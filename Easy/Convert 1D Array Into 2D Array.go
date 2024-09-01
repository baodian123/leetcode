func construct2DArray(original []int, m int, n int) [][]int {
    if m * n != len(original) {
        return [][]int{}
    }

    array := make([][]int, m)
    for i := range array {
        array[i] = make([]int, n)
    }

    for i := 0; i < m; i++ {
        for j := 0; j < n; j++ {
            array[i][j] = original[n*i+j]
        }
    }

    return array
}