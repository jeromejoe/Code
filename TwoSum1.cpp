/*
Leetcode 1 TwoSum
*/

class Solution 
{
  public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> hash1, hash2;
        int left, temp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hash1.count(nums[i]))
            {
                hash2[nums[i]] = i;
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
            else if (hash2.count(left) && left == nums[i])
            {
                return {i, hash2[left]};
            }
        }
        
        return {};
    }
};