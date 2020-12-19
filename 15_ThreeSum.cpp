#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector< vector<int> > threeSum(vector<int>& nums);

int main()
{
  vector<int> test{0, 0, 0};

  vector< vector<int> > ans = threeSum(test);
  for(auto e : ans)
  {
    for(auto ee : e)
    {
      cout << ee << ", ";
    }
    cout << endl;
  }

  return 0;
}

vector< vector<int> > threeSum(vector<int>& nums)
{
  vector< vector<int> > ans;
  int n = nums.size();
  if(nums.empty() || n < 3)
  {
    return ans;
  }
  
  sort(nums.begin(), nums.end());
  for(int i = 0; i < n - 2; i++)
  {
    if(i > 0 && nums[i] == nums[i - 1])
      continue;
    if(nums[i] > 0)
      return ans;
    int L = i + 1;
    int R = n - 1;
    while(L < R)
    {
      if(nums[i] + nums[L] + nums[R] == 0)
      {
        vector<int> soln;
        soln.push_back(nums[i]);
        soln.push_back(nums[L]);
        soln.push_back(nums[R]);

        ans.push_back(soln);
        while(L<R && nums[L] == nums[L + 1])
          L++;
        while(L<R && nums[R] == nums[R - 1])
          R--;
        L++;
        R--;
      }
      else if(nums[i] + nums[L] + nums[R] < 0)
      {
        L++;
      }
      else
      {
        R--;
      }
    }
  }

  return ans;
}
