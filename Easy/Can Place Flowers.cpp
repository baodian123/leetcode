class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i=0; i<flowerbed.size(); ++i) {
            if (flowerbed[i] == 0) {
                if (i-1 >= 0)
                    if (flowerbed[i-1] != 0) continue;
                if (i+1 <= flowerbed.size()-1)
                    if (flowerbed[i+1] != 0) continue;
                flowerbed[i] = 1;
                i += 1;
                n -= 1;
            }
        }

        return n <= 0;
    }
};