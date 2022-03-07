class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int minCost[] = new int[cost.length+1];
        
        minCost[0] = 0;
        minCost[1] = cost[0];
        
        for (int i=2; i<minCost.length; i++) {
            minCost[i] = Math.min(minCost[i-1], minCost[i-2]) + cost[i-1];
        }
       
        return Math.min(minCost[minCost.length-1], minCost[minCost.length-2]);
    }
}