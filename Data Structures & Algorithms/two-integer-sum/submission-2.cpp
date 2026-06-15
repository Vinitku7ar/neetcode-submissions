class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>num;
        for(int i=0;i<nums.size();i++){
            num[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int value=target-nums[i];
            if(num.count(value) && i!=num[value] ){
                return{i,num[value]};
            }
        }
    }
};
