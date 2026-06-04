class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int count=0;
        int total= m*n;
        //index
        int startingrow=0;
        int startingcol=0;
        int endingrow=m-1;
        int endingcol=n-1;
        while(count<total){
            //print startingrow
            for(int index=startingcol;count<total&&index<=endingcol;index++){
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;

            //endcol
            for(int index=startingrow;count<total&&index<=endingrow;index++){
                ans.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;
            
            //end row
            for(int index=endingcol;count<total&&index>=startingcol;index--){
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;

            //startcol
            for(int index=endingrow;count<total&&index>=startingrow;index--){
                ans.push_back(matrix[index][startingcol]);
                count++;
            }
            startingcol++;

        }

    return ans;    
    }
};
