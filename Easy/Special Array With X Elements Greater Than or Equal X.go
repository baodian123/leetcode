func specialArray(nums []int) int {
	var (
		m         = map[int]int{}
		lastkey   = 0
		lastvalue = 0
		keys      []int
	)

	for _, num := range nums {
		m[num] += 1
	}

	for k := range m {
		keys = append(keys, k)
	}

	sort.Slice(keys, func(i, j int) bool {
		return keys[i] > keys[j]
	})

	for _, k := range keys {
		if k == m[k]+lastvalue {
			return k
		} else if lastvalue > k && lastvalue < lastkey {
			return lastvalue
		}

		lastkey = k
		lastvalue += m[k]
	}

	if lastvalue < lastkey {
		return lastvalue
	}

	return -1
}