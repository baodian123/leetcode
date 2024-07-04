func minDifference(nums []int) int {
    if len(nums) <= 4 {
        return 0
    }

    sort.Ints(nums)

    var (
        s        = 0
        e        = len(nums) - 4
        diff int = 1e10
    )

    for {
        if nums[e]-nums[s] < diff {
            diff = nums[e] - nums[s]
        }

        e++
        s++

        if e >= len(nums) {
            break
        }
    }

    return diff
}