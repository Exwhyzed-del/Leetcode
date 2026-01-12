class Solution {
public:
    bool isSameAfterReversals(int num) {
        int original = num;

        // First reverse
        int rev1 = 0;
        while (num > 0) {
            int rem = num % 10;
            rev1 = rev1 * 10 + rem;
            num /= 10;
        }

        // Second reverse
        int rev2 = 0;
        while (rev1 > 0) {
            int rem = rev1 % 10;
            rev2 = rev2 * 10 + rem;
            rev1 /= 10;
        }

        return rev2 == original;
    }
};
