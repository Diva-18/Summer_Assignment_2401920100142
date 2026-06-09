class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if(p.size()>s.size()) return result;
        vector<int> freqp(26,0),freqs(26,0);
        //count frequncy of p
        for(char c:p){
            freqp[c-'a']++;
        
        }
        int k=p.size();
        for(int i=0;i<s.size();i++){//add current char
            freqs[s[i]-'a']++;

            if(i>=k){//remove char if it exceed window
                freqs[s[i-k]-'a']--;
            }
            if(freqp==freqs){
                result.push_back(i-k+1);//compare

            }
        }

        return result;
    }
};
