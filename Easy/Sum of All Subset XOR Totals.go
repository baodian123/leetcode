func subsetXORSum(nums []int) int {
	val := 0

	for i := 1; i <= len(nums); i++ {
		val += cnt(nums, i, 0, make([]bool, len(nums)), 0)
	}

	return val
}

func cnt(nums []int, rl int, cl int, checks []bool, idx int) int {
	if cl > rl {
		return 0
	}

	val := 0

	if cl == rl {
		flag := false

		for i := 0; i < len(nums); i++ {
			if checks[i] {
				if !flag {
					val = nums[i]
					flag = true
				} else {
					val ^= nums[i]
				}
			}
		}

		return val
	}

	if idx >= len(nums) {
		return val
	}

	checks[idx] = true
	val += cnt(nums, rl, cl+1, checks, idx+1)
	checks[idx] = false
	val += cnt(nums, rl, cl, checks, idx+1)

	return val
}