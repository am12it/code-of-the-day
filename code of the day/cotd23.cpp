class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0,i,size=operations.size();
        for(i=0;i<size;i++)
        {
            if(operations[i]=="++X"||operations[i]=="X++")
                X++;
            else
                X--;
            
        }
        return X;
        
    }
};