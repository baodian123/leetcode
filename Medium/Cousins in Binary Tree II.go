/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
 func replaceValueInTree(root *TreeNode) *TreeNode {
    root.Val = 0

    dfs([]*TreeNode{root})
    return root
}

func dfs(arr []*TreeNode) {
    if len(arr) == 0 {
        return
    }

    var sum int = 0

    for _, node := range(arr) {
        if node == nil {
            continue
        }
        if node.Left != nil {
            sum += node.Left.Val
        }
        if node.Right != nil {
            sum += node.Right.Val
        }
    }

    childs := []*TreeNode{}
    for _, node := range(arr) {
        var cur = 0
        
        if node.Left != nil {
            cur += node.Left.Val
        }
        if node.Right != nil {
            cur += node.Right.Val
        }

        if node.Left != nil {
            node.Left.Val = sum - cur
            childs = append(childs, node.Left)
        }
        if node.Right != nil {
            node.Right.Val = sum - cur
            childs = append(childs, node.Right)
        }
    }

    dfs(childs)
}