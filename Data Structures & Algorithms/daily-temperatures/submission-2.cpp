class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int tempSize=temperatures.size();
        vector<int> result(tempSize, 0);
        stack<int> stack;
        for(int i=0;i<tempSize;i++){
            int curTemp=temperatures[i];
            // since we are finding next greater element,
            // we will be using decreasing order stack
            while(!stack.empty()){
                int stackTopTemp = temperatures[stack.top()];
                if(curTemp>stackTopTemp){
                    int tempIndex = stack.top();
                    result[tempIndex]=i-tempIndex;
                    stack.pop();
                }
                else{
                    break;
                }
            }
            stack.push(i);
        }
        return result;
    }
};
