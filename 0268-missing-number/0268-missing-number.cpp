class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int hash[10000]={0};
        int ele;
        for(int i=0; i<n; i++)
        {
            hash[nums[i]]++;
        }

        for(int i=0; i<=n; i++)
        {
            if(hash[i]==0)
            ele=i;
        }
        return ele;
    }
};