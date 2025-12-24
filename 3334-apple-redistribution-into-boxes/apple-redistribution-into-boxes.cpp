class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int apples = 0;
        for (int a : apple) {
            apples += a;
        }

        sort(capacity.begin(), capacity.end(), greater<int>());

        int boxes = 0;
        for (int cap : capacity) {
            apples -= cap;
            boxes++;
            if (apples <= 0) {
                break;
            }
        }

        return boxes;
    }
};
