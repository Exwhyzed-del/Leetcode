class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {

            int n = nums[i];

            vector<int> temp;

            while(n > 0) {

                int digit = n % 10;

                temp.insert(temp.begin(), digit);

                n = n / 10;
            }

            for(int digit : temp) {
                ans.push_back(digit);
            }
        }

        return ans;
    }
};