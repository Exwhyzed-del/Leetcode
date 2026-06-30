class Solution {
public:
    bool isPerfectSquare(int num) {
        
    int st=1,end=num;
    while(st<=end){
        long mid=st+(end-st)/2;
        if(mid*mid==num) return true;
        else if(mid*mid>num) end=mid-1;
        else st=mid+1;
        }
        return false;
    }
};