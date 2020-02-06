// leetcode 17 Letter Combinations of a Phone Number


class Solution 
{
  public:
  
    vector<string> letterCombinations(string digits) 
    { if (digits.empty())
      {
        return {};
      }
      
      int index = 0;
      string list;
      
      vector<string> num_map(10, "");
      num_map[0] = "";
      num_map[1] = "";
      num_map[2] = "abc";
      num_map[3] = "def";
      num_map[4] = "ghi";
      num_map[5] = "jkl";
      num_map[6] = "mno";
      num_map[7] = "pqrs";
      num_map[8] = "tuv";
      num_map[9] = "wxyz";
      
      DFS(index, list, digits, num_map);
      return result;
    }
  
  private:
    vector<string> result;
  
    void DFS(int& index, string &list, const string digits, const vector<string> num_map)
    {
      int cur_num = digits[index] - '0';
      for (int i = 0; i < num_map[cur_num].size(); i ++)
      {
        list.push_back(num_map[cur_num][i]);
        if (index < digits.size() - 1)
        {
          index ++;
          DFS(index, list, digits, num_map);
        }
        else
        {
          result.push_back(list);
        }
        list.pop_back();
      }
      index --;
    }
};