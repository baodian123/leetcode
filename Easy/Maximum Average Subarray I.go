func findMaxAverage(nums []int, k int) float64 {
    var max int = 0

    for i := 0; i < k; i++ {
        max += nums[i]
    }

    tmp := max

    for i := k; i < len(nums); i++ {
        tmp += nums[i] - nums[i-k]

        if tmp > max {
            max = tmp
        }
    }

    return float64(max) / float64(k)
}