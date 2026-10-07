class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto it:tokens){
            if(it != "+" && it != "-" && it != "*" && it != "/"){
                st.push(stoi(it));
            }
            else{
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                int result;
                if(it=="+"){
                    result=a+b;
                }
                else if(it=="-"){
                    result=a-b;
                }
                else if(it=="*"){
                    result=a*b;
                }
                else{
                    result=a/b;
                }
                st.push(result);
            }
        }
        return st.top();
    }
};