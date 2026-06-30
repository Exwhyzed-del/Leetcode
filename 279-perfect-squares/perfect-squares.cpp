class Solution {
public:

    // Check if a number is a perfect square
    int is_square(int n){
        int temp = (int) sqrt(n);
        return temp * temp == n;
    }

    int numSquares(int n) {

        // Remove factors of 4
        while ((n & 3) == 0)
            n >>= 2;

        // Check Legendre condition
        if ((n & 7) == 7)
            return 4;

        // Check if perfect square
        if(is_square(n))
            return 1;

        // Check if sum of two squares
        int sqrt_n = (int) sqrt(n);

        for(int i = 1; i <= sqrt_n; i++){
            if (is_square(n - i*i))
                return 2;
        }

        // Otherwise answer is 3
        return 3;
    }
};