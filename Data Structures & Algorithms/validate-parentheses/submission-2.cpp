#include <stack>
class Solution {
public:
    bool isClosing(char c){
        switch (c)
        {
            case ')':
            case '}':
            case ']':
            return true;    
            default:
            return false;
        }
    }

    bool isPair(char c1, char c2){
        if((c1 - '#') > (c2 - '#')){
            char c3 = c1;
            c1 = c2;
            c2 = c3;
        }
        if(c1 == '(' && c2 == ')'){
            return true;
        }
        else if (c1 == '{' && c2 == '}')
        {
            return true;
        }
        else if (c1 == '[' && c2 == ']')
        {
            return true;
        }
        else{
            return false;
        }   
    }

    bool isValid(string s)
    {
        stack<char> stack;
        if(s.length()%2!=0) return false;
        for(int i=(s.length()-1);i>=0;--i){
            char c = s.at(i);
            if(isClosing(c))
            {
                // cout << c << " isClosing" << endl;
                stack.push(c);
            }
            else
            {
                if(stack.empty()) return false;
                char topChr = stack.top();
                cout << c << " & " << topChr << endl;
                if(!isPair(topChr, c))
                {
                    return false;
                }
                else{
                    stack.pop();
                }
            }
        }
        if(stack.empty()){
            return true;
        }
        return false;
    }
};
