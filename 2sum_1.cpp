#include<bits/stdc++.h>
using namespace std;

/*
THE TC is O(nlgn) if we use map
if we use unordered_map then it is O(n)

You iterate through the array once (a single for loop) which takes O(n) time.

For each element, you perform a map lookup (mp.find(need)) and insertion (mp[cur]=i). Both operations on a map take O(log n) in the worst case because it is typically implemented as a balanced binary tree.

So the strict worst-case time complexity here is O(n log n) due to using map.

If you want average-case O(n) time complexity, you could use unordered_map instead of map, as its average lookup and insertion operations have O(1) time complexity.

*/

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
        return {i, mp[need]};
      }
      else
      {
        mp[cur] = i;
      }
    }
    return {-1, -1};
  }
};

int main(){

   return 0;
}