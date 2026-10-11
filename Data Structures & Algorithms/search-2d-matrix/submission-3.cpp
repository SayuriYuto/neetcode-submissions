class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool result=false;
        int width = matrix.size();
        int len = matrix[0].size();
        cout<<"L="<<len<<" W="<<width<<endl;
        for(int i=0;i<width;i++){
            if(target>=matrix[i][0] && target<=matrix[i][len-1]){
                // binary search in row
                cout<<"Binary searching at "<<i<<endl;
                int l=0,r=len-1;
                while(l<=r){
                    int mid = l+((r-l)/2);
                    cout<<"l="<<l<<" r="<<r<<" mid="<<mid<<endl;
                    if(matrix[i][mid]==target){
                        result=true;
                        cout<<"Target found!"<<endl;
                        break;
                    }
                    else if(matrix[i][mid]<target){
                        l=mid+1;
                    }
                    else{
                        r=mid-1;
                    }
                }
            }
            if(result==true){
                break;
            }
        }
        return result;
    }
};
