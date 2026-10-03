class Solution {
public:
    bool isPalindrome(string s) {
        int l=0, r=s.length()-1;
        while(l<r){
            char lchar = s.at(l);
            char rchar = s.at(r);
            // make it lower
            // cout<<(int)lchar<<" "<<(int)rchar<<endl;
            if(lchar>='A' && lchar<='Z'){
                lchar = lchar + 32;
            }
            if(rchar>='A' && rchar<='Z'){
                rchar = rchar + 32;
            }

            // sanitize for only alphanumeric
            // cout<<lchar<<" "<<rchar<<endl;
            if(!(lchar>='a' && lchar<='z') && !(lchar>='0' && lchar<='9')){
                l++;
                continue;
            }
            if(!(rchar>='a' && rchar<='z') && !(rchar>='0' && rchar<='9')){
                r--;
                continue;
            }
            cout<<lchar<<" "<<rchar<<endl;
            if(lchar!=rchar){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
