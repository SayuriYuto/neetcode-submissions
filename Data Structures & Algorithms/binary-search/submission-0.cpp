class Solution {
public:
    int search(vector<int>& nums, int target) {
        return searchHelper(nums, target, 0, nums.size()-1);
    }

    int searchHelper(vector<int>&nums, int target, int startIndex, int endIndex){
        if(startIndex == endIndex){
            if(nums[startIndex]==target){
                return startIndex;
            }
            else{
                return -1;
            }
        }
        int midIndex = startIndex+endIndex;
        if(midIndex%2!=0){
            midIndex-=1;
        }
        midIndex/=2;

        int result1, result2;
        result1 = searchHelper(nums, target, startIndex, midIndex);
        result2 = searchHelper(nums, target, midIndex+1, endIndex);
        if(result1!=-1){
            return result1;
        }
        else if(result2!=-1){
            return result2;
        }
        else{
            return -1;
        }
    }
};
