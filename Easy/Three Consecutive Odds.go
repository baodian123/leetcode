func threeConsecutiveOdds(arr []int) bool {
    odds := 0

    for _, num := range(arr) {
        if num & 1 == 1 {
            odds += 1
        } else {
            odds = 0
        }

        if odds == 3 {
            return true
        }
    }

    return false
}