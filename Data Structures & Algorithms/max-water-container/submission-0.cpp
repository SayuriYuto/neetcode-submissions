class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,n=heights.size(), r=n-1;
        int result=0;
        while(l<r){
            int width = r-l;
            int height = min(heights[l], heights[r]);
            // cout<<"h "<< height <<" w "<< width<<endl;
            int vol = width*height;
            if(vol>result){
                result = vol;
            }
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return result;
    }
};
