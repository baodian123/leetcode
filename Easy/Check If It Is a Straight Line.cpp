class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        float deltax = coordinates[1][0] - coordinates[0][0];

        if (deltax == 0)
        {
            for (int i=2; i<coordinates.size(); ++i)
            {
                if (coordinates[i][0] != coordinates[0][0])
                {
                    return false;
                }
            }
            
            return true;
        }

        float slope = (coordinates[1][1] - coordinates[0][1]) / deltax;

        bool check = true;

        for (int i=2; i<coordinates.size(); ++i)
        {
            if (float(coordinates[i][1] - coordinates[0][1]) / (coordinates[i][0] - coordinates[0][0]) != slope)
            {
                check = false;
                break;
            }
        }

        return check;
    }
};