#include <bits/stdc++.h>
using namespace std;
vector<int> spiral_matrix_op(vector<vector<int>> &matrix){
  int n = matrix.size();
  int m = matrix[0].size();
  int left = 0, right = m - 1, top = 0, bottom = n - 1;
  vector<int> ans;

  while (left <= right && top <= bottom)
  {
    for (int i = left; i <= right; i++)
    {
      ans.push_back(matrix[top][i]);
    }
    top++;

    for (int i = top; i <= bottom; i++)
    {
      ans.push_back(matrix[i][right]);
    }
    right--;

    if (top <= bottom)
    {
      for (int i = right; i >= left; i--)
      {
        ans.push_back(matrix[bottom][i]);
      }

      bottom--;
    }
    if (left <= right)
    {
      for (int i = bottom; i >= top; i--)
      {
        ans.push_back(matrix[i][left]);
      }
      left++;
    }
  }
  return ans;
}
int main(){
  vector<vector<int>> matrix = {
    {1,2,3,4,5,6},        // matrix[0]
    {20,21,22,23,24,7},   // matrix[1]
    {19,32,33,34,25,8},   // matrix[2] 
    {18,31,36,35,26,9},   // matrix[3]
    {17,30,29,28,27,10},  // matrix[4]
    {16,15,14,13,12,11}   // matrix[5]
  };
  int n=matrix.size();
  int m = matrix[0].size();  
  vector<int>ans=spiral_matrix_op(matrix);
  for(auto itr: ans) cout<<itr<<" ";
  return 0; 
}
