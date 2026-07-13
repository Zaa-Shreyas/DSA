class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        stack<char> st;
        for(int i = 0; i<s.size(); i++){
            if(st.empty()){
                st.push(s[i]);
                count++;
            }
            else if(s[i] == '('){
                st.push(s[i]);
                count++;
            }
            else{
                if(st.top() == '('){
                    st.pop();
                    count--;
                }
                else{
                    st.push(s[i]);
                    count++;
                }
            }
        }
        return count;
    }
};