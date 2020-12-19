#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstr(string s);

int main()
{
  string test = "abccfkdtc";
  cout << lengthOfLongestSubstr(test) << endl;
  return 0;
}

int lengthOfLongestSubstr(string s)
{
  unordered_set<char> substr;
  int n = s.size();
  int rk = -1, ans = 0;
  for(int i = 0; i < n; i++)
  {
    if(i != 0)
    {
      substr.erase(s[i - 1]);
    }

    while(rk < n - 1 && !substr.count(s[rk + 1]))
    {
      substr.insert(s[rk + 1]);
      rk++;
    }

    ans = max(ans, rk - i + 1);
  }
  return ans;
}





//时间太长。。
/*
int lengthOfLongestSubstr(string s)
{
  int maxLengthOfSubstr = 0;

  for(int i = 0; i < s.size(); i++)
  {
    int j = i;
    bool isRepeated = false;
    vector<char> tempSubstr;
    while(j != s.size() && !isRepeated)
    {
      if(std::find(tempSubstr.begin(), tempSubstr.end(), s[j]) == tempSubstr.end())
      {
        tempSubstr.push_back(s[j]);
      }
      else
      {
        isRepeated = true;
      }
      j++;
    }
    if(tempSubstr.size() > maxLengthOfSubstr)
    {
      maxLengthOfSubstr = tempSubstr.size();
    }
  }

  return maxLengthOfSubstr;
}
*/