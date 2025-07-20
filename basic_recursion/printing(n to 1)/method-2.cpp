#include <bits/stdc++.h>
using namespace std;
void problem_3(int i, int n)
{ // print from N to 1 using recursion...
  if (i > n)
  {
    return;
  }
  problem_3(i + 1, n);
  cout << i << endl;
}
int main()
{
  int n;
  cout<<"enter the value"<<endl;
  cin >> n;
  problem3(n,n);
  return 0;
}
