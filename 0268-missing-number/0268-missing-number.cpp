class Solution {
public:
    int missingNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int ele;
       for(int i=0;i<nums.size();i++){
           if(nums[i]!=i){
               ele=i;
               break;
           }
       }
       return ele;
    }
};