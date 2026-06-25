class Solution {
public:
    int majorityElement(vector<int>& nums) {
           unordered_map<int,int>freq;
           int res=0 ,  maxC=0;
           for(int num:nums){
            freq[num]++;

            if(freq[num]>maxC){
                res=num;
                maxC=freq[num];
            }
           }
      return res;
    }
};