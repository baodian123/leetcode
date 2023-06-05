class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies.at(0);

        for (int i=1; i<candies.size(); ++i) {
            if (candies.at(i) > max)
                max = candies.at(i);
        }

        vector<bool> rs;

        for (int i=0; i<candies.size(); ++i) {
            rs.push_back((candies.at(i) + extraCandies) >= max ? true : false);
        }

        return rs;
    }
};