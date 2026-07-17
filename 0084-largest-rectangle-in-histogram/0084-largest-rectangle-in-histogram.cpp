class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int max_area = 0;
        stack<int> st;
        for(int i = 0; i<n; i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int popped_index = st.top();
                st.pop();
                int height = heights[popped_index];
                int width;
                if(st.empty()){
                    width = i;
                }
                else{
                    width = i - st.top() - 1;
                }
                max_area = max(max_area, height*width);
            }
            st.push(i);
        }
        while(!st.empty()){
            int popped_index = st.top();
            st.pop();
            int height = heights[popped_index];
            int width;
            if(st.empty()){
                width = n;
            }
            else{
                width = n - st.top() - 1;
            }
            max_area = max(max_area, height*width);
        }
        return max_area;
    }
};