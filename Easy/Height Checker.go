func heightChecker(heights []int) int {
    var (
        cnt = 0
        arr []int
    )

    arr = append(arr, heights...)
    sort.Ints(heights)

    for i := 0; i < len(heights); i++ {
        if heights[i] != arr[i] {
            cnt += 1
        }
    }

    return cnt
}