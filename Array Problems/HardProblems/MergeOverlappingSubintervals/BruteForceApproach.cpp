#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mrge_ovrlappng_sub_intrvl_BR(vector<vector<int>> &arr){
  int n = arr.size();
  vector<vector<int>> ans;
  // sort the given intervals:
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++) // select an interval:
  {
    int start = arr[i][0];
    int end = arr[i][1];
    // Skip all the merged intervals:
    if (!ans.empty() && end <= ans.back()[1]) continue;
    // check the rest of the intervals:
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j][0] <= end)
      {
        end = max(arr[j][1], end);
      }
      else break;
    }
    ans.push_back({start, end});
  }
  return ans;
}
int main(){
  vector<vector<int>>arr2 = { {1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
  vector<vector<int>> ans2 = mrge_ovrlappng_sub_intrvl_BR(arr2);
  for (auto it : ans2) cout << "[" << it[0] << ", " << it[1] << "] ";
  return 0;
}
