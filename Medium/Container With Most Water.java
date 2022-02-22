class Solution {
    public int maxArea(int[] height) {
        int arr[] = new int[height.length];
        arr[0] = height[0];
        int temp = 1;
        
        int rs = 0;
        for (int i = 1; i < height.length; i++) {
            if (rs/i < height[i]) {
                for (int j = 0; j < temp; j++) {
                    int x = Math.min(height[i], arr[j])*(i-j);
                    if (x > rs) {
                        rs = x;
                    }
                }    
            }
            arr[temp] = height[i];
            temp += 1;
        }
        return rs;
    }
}