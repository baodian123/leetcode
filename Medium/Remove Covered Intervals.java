class Solution {
    public int removeCoveredIntervals(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        int lead = intervals[0][1], count = 0, cur_val = intervals[0][0];
        for (int i=1; i<intervals.length; i++) {
            if (intervals[i][1] <= lead && intervals[i][0] == cur_val) count += 1;
            else if (intervals[i][0] == cur_val) {
                count += 1;
                lead = intervals[i][1];
            }
            else {
                if (intervals[i][1] <= lead) count += 1;
                else {
                    cur_val = intervals[i][0];
                    lead = intervals[i][1];
                }
            }
        }
        
        return intervals.length - count;
    }
}