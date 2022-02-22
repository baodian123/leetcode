int maxProfit(int* prices, int pricesSize){
    int i, max = 0;
    
    for (i=1; i<pricesSize; i++) {
        if (prices[i] - prices[i-1] > 0) max += prices[i] - prices[i-1];
    }
    
    return max;
}