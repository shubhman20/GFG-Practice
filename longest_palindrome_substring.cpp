//User function template for C++

class Solution{   
public:
    string longestPalindrome(string S){
        // code here 
        if(S.size()<=1) return S;
        string ans="";
        for(int i=0;i<S.size();i++){
            string s1="",s2="";
            for(int j=i;j<S.size();j++){
                s1 = s1+S[j];
                s2 = S[j] + s2;
                if(s1==s2){
                    if(ans.size()<s1.size()){
                        ans=s1;
                    }
                }
            }
        }
        return ans;
    }
};
