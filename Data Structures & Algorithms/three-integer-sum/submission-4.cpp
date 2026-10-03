class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        // for (auto i : nums)
        //     cout << i << " ";
        cout<<endl;
        set<vector<int>> result;
        for(int i=0;i<n-1;i++){
            int target = -nums[i];
            int l=i+1, r=n-1;
            while(l<r){
                int sum = nums[l]+nums[r];
                // cout<<"target = "<<target<<"sum = "<<sum<<endl;
                if(sum == target){
                    vector<int> triplet = {nums[i], nums[l], nums[r]};
                    result.insert(triplet);
                    l++;
                    r--;
                }
                else if(sum>target){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        vector<vector<int>> ans(result.begin(), result.end());
        return ans;
    }
};
