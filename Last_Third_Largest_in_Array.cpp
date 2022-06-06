class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size();
        int count=1;
        int temp=nums[0];
        for(int i=0;i<n;i++)
        {
            if(temp>nums[i])
            {
                count++;
            }
            temp=nums[i];
            if(count==3)
            {
                return temp;
            }
        }
        return nums[0];
    }
};
