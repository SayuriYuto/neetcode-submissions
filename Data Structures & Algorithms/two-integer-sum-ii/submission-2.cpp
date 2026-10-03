class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0, r=numbers.size()-1;
        vector<int> result = {l,r};
        while(l<r){
            int sum = numbers[l]+numbers[r];
            // cout<<" "<<numbers[l]<<" "<<numbers[r]<<" "<<sum<<endl;
            if(sum > target){
                r--;
            }
            else if(sum < target){
                l++;
            }
            else{
                result[0]=l+1;
                result[1]=r+1;
                break;
            }
        }
        return result;
    }
};
