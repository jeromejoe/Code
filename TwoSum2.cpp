/*
Leetcode 1 TwoSum one hash
*/

class Solution 
{
  public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> hash1;
        int left;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hash1.count(nums[i]))
            {
                hash1[nums[i]+1000] = i;
            }
            else
            {
                hash1[nums[i]] = i;  
            }
                    
        }
        for (int i = 0; i < nums.size(); i++)
        {
            left = target - nums[i];
            if (hash1.count(left) && left != nums[i])
            {
                return {i, hash1[left]};
            }
            else if (hash1.count(left+1000) && left == nums[i])
            {
                return {i, hash1[left+1000]};
            }
        }
        
        return {};
    }
};