public class Solution {
    public int MaximumUnits(int[][] boxTypes, int truckSize) {
        Array.Sort(boxTypes, (a, b) => { return b[1] - a[1]; });
        var rs = 0;
        
        for (var len=0; len<boxTypes.GetLength(0); ++len) {
            if (boxTypes[len][0] >= truckSize) {
                rs += truckSize * boxTypes[len][1];
                break;
            } else {
                rs += boxTypes[len][0] * boxTypes[len][1];
                truckSize -= boxTypes[len][0];
            }
        }
        
        return rs;
    }
}