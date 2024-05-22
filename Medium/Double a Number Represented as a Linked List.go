/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
 func doubleIt(head *ListNode) *ListNode {
    var (
        rt = head
        pre = head
        cur = head.Next
    )

    if head.Val >= 5 {
        l := &ListNode{
            Val: 0,
            Next: head,
        }

        rt = l
        pre = l
        cur = head
    } else {
        pre.Val *= 2
    }

    for cur != nil {
        pre.Val += cur.Val * 2 / 10
        cur.Val = cur.Val * 2 % 10

        pre = cur
        cur = cur.Next
    }

    return rt
}