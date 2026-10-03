class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        int result=0;
        for(int i=0;i<tokens.size();i++){
            string s = tokens[i];
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                // token is operator
                int topVal = stack.top();
                stack.pop();
                int secondTopVal = stack.top();
                stack.pop();
                switch(s[0]){
                    case '+':
                        result = secondTopVal + topVal;
                        break;
                    case '-':
                        result = secondTopVal - topVal;
                        break;
                    case '*':
                        result = secondTopVal * topVal;
                        break;
                    case '/':
                        result = secondTopVal / topVal;
                        break;
                    default:
                        break;
                }
                stack.push(result);
            }
            else{
                // token is number
                stack.push(stoi(s));
            }
        }
        return stack.top();
    }
};