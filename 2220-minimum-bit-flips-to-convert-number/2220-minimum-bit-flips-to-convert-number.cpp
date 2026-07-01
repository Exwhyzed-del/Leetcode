class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;

        while(start>0 || goal>0){
            int bin1=start%2;
            int bin2=goal%2;

            if(bin1!=bin2){
                count++;

            }
            start/=2;
            goal/=2;
        }
        return count;
    }
};