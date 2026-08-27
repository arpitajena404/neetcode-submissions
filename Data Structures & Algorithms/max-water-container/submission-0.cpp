class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = 0;
        int max_amt = 0;
        int m = heights.size() - 1;

        while(n<m){
            if(heights[n] < heights[m]){
                int area = min(heights[n], heights[m]) * (m - n);
                max_amt = max(max_amt,area);
                n++;
            }
            else if(heights[n] > heights[m]){
                int area = min(heights[n], heights[m]) * (m - n);
                max_amt = max(max_amt,area);
                m--;
            }
            else{
                int area = min(heights[n], heights[m]) * (m - n);
                max_amt = max(max_amt,area);
                n++;
            }
        }
        return max_amt;
    }
};
