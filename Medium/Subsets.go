func subsets(nums []int) [][]int {
	rs := [][]int{{}}

	for i := 1; i <= len(nums); i++ {
		do(&rs, nums, i, 0, make([]bool, len(nums)), 0)
	}

	return rs
}

func do(rs *[][]int, nums []int, rl int, cl int, checks []bool, idx int) {
	if cl > rl {
		return
	}

	if cl == rl {
		arr := []int{}

		for i := 0; i < len(nums); i++ {
			if checks[i] {
				arr = append(arr, nums[i])
			}
		}

		*rs = append(*rs, arr)

		return
	}

	if idx >= len(nums) {
		return
	}

	checks[idx] = true
	do(rs, nums, rl, cl+1, checks, idx+1)
	checks[idx] = false
	do(rs, nums, rl, cl, checks, idx+1)
}