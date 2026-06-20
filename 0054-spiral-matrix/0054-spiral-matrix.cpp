class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> ans;

        int strow = 0;
        int endrow = m - 1;
        int stcol = 0;
        int endcol = n - 1;

        while(strow <= endrow && stcol <= endcol)
        {
            for(int i = stcol; i <= endcol; i++)
            {
                ans.push_back(matrix[strow][i]);
            }

            for(int i = strow + 1; i <= endrow; i++)
            {
                ans.push_back(matrix[i][endcol]);
            }

            for(int i = endcol - 1; i >= stcol; i--)
            {
                if(strow == endrow) break;

                ans.push_back(matrix[endrow][i]);
            }

            for(int i = endrow - 1; i > strow; i--)
            {
                if(stcol == endcol) break;

                ans.push_back(matrix[i][stcol]);
            }

            strow++;
            stcol++;
            endrow--;
            endcol--;
        }

        return ans;
    }
};