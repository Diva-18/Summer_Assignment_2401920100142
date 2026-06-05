class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
        for(int i=0;i<strs[0].size();i++){
            for(auto s: strs){
                if(s[i]!=strs[0][i]){
                    return str;
                }
            }
            str+=strs[0][i];
        }
    return str;    
    }
};
