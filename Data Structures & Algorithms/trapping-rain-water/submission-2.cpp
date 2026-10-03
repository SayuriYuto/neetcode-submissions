class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(), result=0;
        int l=0,r=n-1;
        int maxLeft=height[l], maxRight=height[r];
        while(l<r){
            if(maxLeft<maxRight){
                l++;
                maxLeft = max(maxLeft, height[l]);
                result += maxLeft-height[l];
            }
            else{
                r--;
                maxRight = max(maxRight, height[r]);
                result += maxRight-height[r];
            }
        }
        return result;
    }
};
