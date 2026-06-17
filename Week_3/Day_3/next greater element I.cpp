class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        stack<int>s;
        for(int i=nums2.size()-1;i>=0;i--){
            int curr=nums2[i];
            while(!s.empty() && s.top()<=curr){
                s.pop();
            }
            if(s.empty()){
                m[nums2[i]]=-1;
            }
            else{
                m[nums2[i]] =s.top();
            }
            s.push(curr);
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
        
    }
};
