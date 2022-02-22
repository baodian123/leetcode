int maxProfit(int* prices, int pricesSize){
    int maxProfit = 0, i;
    int min = prices[0];
    
    for (i=1; i<pricesSize; i++) {
        if (prices[i] - min > maxProfit) maxProfit = prices[i] - min;
        if (prices[i] < min) min = prices[i];
    }
    
    return maxProfit;
}