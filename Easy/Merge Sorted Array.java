class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int idx = 0;
        for (int i=0; i<m+n; i++) {
            if (idx == n) break;
            if (nums1[i] >= nums2[idx]) {
                for (int j=m+n-1; j>=i; j--) {
                    if (j-1 < 0) break;
                    nums1[j] = nums1[j-1];
                }
                nums1[i] = nums2[idx];
                idx += 1;
            }
        }
        if (idx < n) {
            int last = m+n-1;
            for (int i=n-1; i>=idx; i--) {
                nums1[last] = nums2[i];
                last -= 1;
            }
        }
    }
}