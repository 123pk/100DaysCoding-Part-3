/*
Platform :- Leetcode
Contest :- Decode string
Hint :- Stack
*/
class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        string t = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ']') {
                st.push(s[i]);
            } else {
                string temp = "";
                while(!st.empty() && st.top() != '[') {
                    temp += st.top();
                    st.pop();
                }
                st.pop();
                
                reverse(temp.begin(), temp.end());
                string num = "";
                while(!st.empty() && st.top() >= '0' && st.top() <= '9') {
                    num += st.top();
                    st.pop();
                }
                    
                reverse(num.begin(), num.end());
                
                int n = stoi(num);
                
                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < temp.length(); j++) {
                        st.push(temp[j]);
                    }
                }
                
            }
        }
        string ans = "";
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
