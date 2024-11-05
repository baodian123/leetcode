func largestAltitude(gain []int) int {
    var (
        max = 0
        high = 0
    )

    for i := 0; i < len(gain); i++ {
        high += gain[i]

        if high > max {
            max =  high
        }
    }

    return max
}