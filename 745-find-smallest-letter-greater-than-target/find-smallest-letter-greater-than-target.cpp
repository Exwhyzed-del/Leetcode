class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // int n=letter.size();    
        int s=0;
        int e=letters.size()-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(target<letters[mid]){
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
     
        return letters[s] > target ? letters[s] : letters[0];
    }
};