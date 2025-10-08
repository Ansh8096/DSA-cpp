#include <bits/stdc++.h>
using namespace std;
int Pascal_triangle_1(int n, int r){
  int res = 1;
  // calculating nCr:
  for (int i = 0; i < r; i++)
  {
    res = res * (n - i);
    res = res / (i + 1);
  }
  return res;
}
vector<vector<int>> Pascal_triangle_3_BR(int n)
{
  vector<vector<int>> ans;
  for (int row = 1; row <= n; row++)
  {
    vector<int> temp; // temporary list
    for (int col = 1; col <= row; col++)
    {
      temp.push_back(Pascal_triangle_1(row - 1, col - 1));
    }
    ans.push_back(temp); // like this we get every element of each row together...
  }
  return ans;
}
int main(){
  int R;
  cout<<"Enter the value of Row:"<<endl;
  cin>>R;

  vector<vector<int>> ans = Pascal_triangle_3_BR(R);
  for (auto itr : ans)
  {
    for (auto il : itr)
    {
      cout << il << " ";
    }
    cout << endl;
  }
  return 0;
}
