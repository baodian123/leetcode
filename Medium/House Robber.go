func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func rob(nums []int) int {
	if len(nums) == 1 {
		return nums[0]
	}

	if len(nums) == 2 {
		return max(nums[0], nums[1])
	}

	dp := make([]int, len(nums))

	var init int = max(nums[0], nums[1])
	dp[0] = init
	dp[1] = init
	dp[2] = max(nums[0]+nums[2], nums[1])

	for i := 3; i < len(nums); i++ {
		dp[i] = max(nums[i]+dp[i-2], dp[i-1])
	}

	return dp[len(nums)-1]
}