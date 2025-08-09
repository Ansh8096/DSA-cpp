#include <bits/stdc++.h>
using namespace std;
/*

1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15    

*/
void print13(int n)
{
  int num = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << num << " ";
      num = num + 1;
    }
    cout << endl;
  }
}
int main(){
  int t;
  cout << "enter how many times you want to print diff. patterns: " << endl;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    print13(n);
  }
}
