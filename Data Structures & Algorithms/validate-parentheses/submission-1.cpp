class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(char ch : s){
            if(ch=='[' || ch=='{' || ch=='(')  st.push(ch);

            else{
              if(!st.empty()){
                if(ch==')' && st.top()=='(') st.pop();

                else if(ch=='}' && st.top()=='{') st.pop();
                
                 else if(ch==']' && st.top()=='[') st.pop();

                 else{
                    return false;  //patern not match
                 }
              }
              else{
                return false; //stack not empty
              }
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};
