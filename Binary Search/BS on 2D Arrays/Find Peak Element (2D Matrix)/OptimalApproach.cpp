#include <bits/stdc++.h>
using namespace std;
int max_el(vector<vector<int>> &a, int n, int m, int col){
  int maxi = INT_MIN;
  int idx = -1;
  for (int i = 0; i < n; i++)
  {
    if (a[i][col] > maxi)
    {
      maxi = a[i][col];
      idx = i;
    }
  }
  return idx;
}
pair<int, int> Peak_in_2D_matrix_op(vector<vector<int>> &a, int n, int m){
  int low = 0;
  int high = m - 1;
  while (low <= high){
    int mid = (low + high) / 2;
    int row = max_el(a, n, m, mid);
    int left = (mid - 1) >= 0 ? a[row][mid - 1] : -1;
    int right = (mid + 1) < m ? a[row][mid + 1] : -1;
    if (a[row][mid] > left && a[row][mid] > right){
      return {row, mid};
    }
    else if (a[row][mid] < left) high = mid - 1;
    else low = mid + 1;
  }
  return {-1, -1};
}
int main(){
  vector<vector<int>> matrix ={
    {1,5,7,9,11},
    {2,3,4,5,10},
    {9,10,12,14,16}                                                                                    
  };                                                                                                                                                                                                                                                            
                                                                           
  int n = matrix.size();                  
  int m = matrix[0].size();

  pair<int,int> ans = Peak_in_2D_matrix_op(matrix,n,m);
  cout<<ans.first<<","<<ans.second<<endl;
  return 0;                                                                                          
}
