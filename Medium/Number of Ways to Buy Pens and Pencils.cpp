class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long rs = 0;
        
        for (int i=0; i<=total/cost1; ++i) {
            rs += (total-cost1*i)/cost2+1;
        }
        
        return rs;
    }
};