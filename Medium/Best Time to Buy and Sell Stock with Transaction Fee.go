func max(a int, b int) int {
    if a < b {
        return b
    }

    return a
}

func maxProfit(prices []int, fee int) int {
    var (
        buy int = -1e5
        sell int = 0
    )

    for i := 0; i < len(prices); i++ {
        buy = max(buy, sell - prices[i])
        sell = max(sell, buy + prices[i] - fee)
    }

    return sell
}