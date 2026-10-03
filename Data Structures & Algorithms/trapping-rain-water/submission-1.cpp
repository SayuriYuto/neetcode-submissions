class Solution {
public:
    int trap(vector<int>& height) {
        int result=0;
        int n=height.size();
        vector<int> maxPrefixHeight(n,0);
        vector<int> maxSuffixHeight(n,0);
        int maxPrefix=0;
        for(int i=0;i<n;i++){
            maxPrefixHeight[i]=maxPrefix;
            int curheight = height[i];
            if(curheight>maxPrefix){
                maxPrefix = curheight;
            }
        }
        // for(auto i:maxPrefixHeight){
        //     cout<<i<< " ";   
        // }
        cout<<endl;
        int maxSuffix=0;
        vector<int>::iterator it;
        for(int i=n-1;i>=0;i--){
            maxSuffixHeight[i]=maxSuffix;
            int curheight = height[i];
            if(curheight>maxSuffix){
                maxSuffix=curheight;
            }
        }
        // for(auto i:maxSuffixHeight){
        //     cout<<i<< " ";   
        // }
        cout<<endl;

        for(int i=0;i<n;i++){
            int trappedWater = min(maxPrefixHeight[i], maxSuffixHeight[i]) - height[i];
            if(trappedWater>=0){
               result += trappedWater;
            }
        }
        return result;
    }
};
