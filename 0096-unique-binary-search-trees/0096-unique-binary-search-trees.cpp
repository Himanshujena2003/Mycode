class Solution {
public:

// Function to calculate nCr
unsigned long long nCr(int n, int r) {
    if (r > n - r) {
        r = n - r;
    }

    unsigned long long result = 1;

    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}
int numTrees(int n) {
        unsigned long long result = nCr(2*n, n) / (n + 1);
        return result;   
}
};