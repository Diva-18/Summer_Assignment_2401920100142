class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int index=0;
        
        while(i<n){
            char currchar=chars[i];
            int count =0;
            //find duplicae count 
            while(i<n && chars[i]==currchar){
                count++;
                i++;
            }
            //now assign
            chars[index]=currchar;
            index++;

            if(count>1){
                string countstr=to_string(count);
                for(char &ch:countstr){
                    chars[index]=ch;
                    index++;
                }
            }
        }
    return index; 
    }
};
