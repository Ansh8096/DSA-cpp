#include <bits/stdc++.h>
using namespace std;
int upperBound_BS(vector<int> &a, int n, int x){
  int low = 0, high = n - 1, ans = n;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] > x)
    { // CASE_1: may be an answer....
      ans = mid;
      // look for small index on left ...
      high = mid - 1;
    }
    // look for right...
    else low = mid + 1; // CASE_2: can't be an answer....
  }
  return ans;
}
int blank_box(vector<vector<int>> &a, int n, int m, int x)
{
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    cnt += upperBound_BS(a[i], m, x); // this will add up the count of elements which are <= x...
  }
  return cnt; // this will return the cnt...
}
int median_of_matrix_op(vector<vector<int>> &a, int n, int m)
{
  int low = INT_MAX, high = INT_MIN;
  // to find the low and high
  for (int i = 0; i < n; i++)
  {
    low = min(low, a[i][0]);       // it will find min. from 0th column...
    high = max(high, a[i][m - 1]); // it will find max. from (m-1)th column...
  }

  int req = (n * m) / 2;
  // binary search....
  while (low <= high)
  {
    int mid = (low + high) / 2;
    int smaller_equals = blank_box(a, n, m, mid);
    if (smaller_equals <= req) low = mid + 1;
    else high = mid - 1;
  }
  return low;
}
int main(){
  vector<vector<int>> matrix ={
    {1,5,7,9,11},
    {2,3,4,5,10},
    {9,10,12,14,16}                                                                                    
  };                                                                                                                                                                                                                                                            
                                                                           
  int n = matrix.size();                  
  int m = matrix[0].size();

  cout<<median_of_matrix_op(matrix,n,m);
  return 0;                                                                                          
}
