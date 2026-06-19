class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v;
        v.push_back(0);

        int sum=0;
        for(int num:gain){
            sum+=num;
            v.push_back(sum);
        }
        int maxi=*max_element(v.begin(),v.end());
        return maxi;
    }
};