class Solution {
public:
    int max(int a, int b) {
        return (a > b) ? a : b;
    } 
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        int n=heights.size();
    int stack[n];
    int top = -1;
    
    for (int i = 0; i <= n; i++) {
        while ((top >= 0) && (i == n || heights[i] < heights[stack[top]])) {
            int height = heights[stack[top--]];
            int width = (top >= 0) ? i - stack[top] - 1 : i;
            maxArea = max(maxArea, height * width);
        }
        stack[++top] = i;
    }
    
    return maxArea;
    }
};