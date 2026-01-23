class Solution {
public:
  int minEatingSpeed(vector<int>& piles, int h) {
    int l = 1, r = *max_element(piles.begin(), piles.end());

    while (l < r) {
        int mid = l + (r - l) / 2;
        long long hours = 0;

        for (int p : piles) {
            hours += ceil((double)p / mid);
        }

        if (hours <= h) {
            r = mid;      // mid is valid, try smaller
        } else {
            l = mid + 1;  // mid is invalid, go right
        }
    }
    return l;  // l is the minimum valid speed
}


};