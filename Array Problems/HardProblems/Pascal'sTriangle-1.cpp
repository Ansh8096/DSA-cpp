#include <bits/stdc++.h>
using namespace std;
int Pascal_triangle_1(int n, int r)
{
  int res = 1;
  // calculating nCr:
  for (int i = 0; i < r; i++)
  {
      res = res * (n - i);
      res = res / (i + 1);
  }
  return res;
}
int main(){
  int R;
  cout<<"Enter the value of Row:"<<endl;
  cin>>R;
  int C;
  cout<<"Enter the value of Column:"<<endl;
  cin>>C;
  cout<<Pascal_triangle_1(R-1,C-1);
  return 0; 
}
