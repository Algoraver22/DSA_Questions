class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = 0;
        for (int c : cardPoints) total += c;

        if (k == n) return total;

        int window_size = n - k;
        int window_sum = 0;
        for (int i = 0; i < window_size; i++)
            window_sum += cardPoints[i];

        int min_sum = window_sum;
        for (int i = window_size; i < n; i++) {
            window_sum += cardPoints[i] - cardPoints[i - window_size];
            min_sum = min(min_sum, window_sum);
        }

        return total - min_sum;
    }
};
