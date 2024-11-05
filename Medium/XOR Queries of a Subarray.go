func xorQueries(arr []int, queries [][]int) []int {
	tmp := make([]int, 0)

	tmp = append(tmp, arr[0])

	for i := 1; i < len(arr); i++ {
		tmp = append(tmp, arr[i]^tmp[i-1])
	}

	rs := make([]int, 0)

	for i := 0; i < len(queries); i++ {
		if queries[i][0] == 0 {
			rs = append(rs, tmp[queries[i][1]])
		} else {
			rs = append(rs, tmp[queries[i][1]]^tmp[queries[i][0]-1])
		}
	}

	fmt.Println(tmp)

	return rs
}