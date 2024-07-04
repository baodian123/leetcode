/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
 func mergeNodes(head *ListNode) *ListNode {
    if head == nil || head.Next == nil {
        return nil
    }

    var (
        h   *ListNode
        val = 0
        cur = head.Next
        tmp = &h
    )

    for {
        if cur == nil {
            break
        }

        if cur.Val == 0 {
            *tmp = &ListNode{
                Val:  val,
                Next: nil,
            }

            val = 0
            tmp = &(*tmp).Next
        } else {
            val += cur.Val
        }

        cur = cur.Next
    }

    return h
}