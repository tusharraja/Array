#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &arr, int x)
  {
    unordered_map<int, int> mp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
      int cur = arr[i];
      int need = x - cur;
      if (mp.find(need) != mp.end())
      {
        return {mp[need] + 1, i + 1};
      }
      else
      {
        mp[cur] = i;
      }
    }
    return {-1, -1};
  }
};
