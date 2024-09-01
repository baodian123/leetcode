/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func goodNodes(root *TreeNode) int {
    return 1 + cnt(root.Left, root.Val) + cnt(root.Right, root.Val)
}

func cnt(node *TreeNode, max int) int {
    if node == nil {
        return 0
    }

    if node.Val >= max {
        return 1 + cnt(node.Left, node.Val) + cnt(node.Right, node.Val)
    } else {
        return cnt(node.Left, max) + cnt(node.Right, max)
    }
}