class Solution {
public:
     bool checkstring(char c){
        return c=='a'||c=='i'||c=='e'||c=='o'||c=='u';
     }
    int maxVowels(string s, int k) {
        int n=s.length();
        int i=0;
        int count=0,maxi=INT_MIN;
        for(int j=0;j<n;j++){
            if(checkstring(s[j])){
                count++;
            }
            if(j-i+1==k){
                maxi=max(count,maxi);

                if(checkstring(s[i])){
                    count--;
                }
                i++;
            }

        }
        return maxi;

        
    }
};