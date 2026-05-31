class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       vector<int>result;
    //    for(int num:nums){
    //     result.push_back(num);}
    //      for(int num:nums){
    //     result.push_back(num);}
         
         
    //    return result;
    //2nd approach 
     for(int i=0;i<2;i++){
        for(int num:nums){
            result.push_back(num);
        }
     }
     return result;

    }
};