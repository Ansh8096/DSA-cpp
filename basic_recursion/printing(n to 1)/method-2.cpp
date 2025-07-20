#include <bits/stdc++.h>
using namespace std;
void problem_3(int i, int n)
{ // print from N to 1 using recursion...
  if (i > n)
  {
    return;
  }
  problem_3(i + 1, n);
  cout << i << " ";
}
int main()
{
  int n;
  cout<<"enter the value"<<endl;
  cin >> n;
  problem_3(1,n);
  return 0;
}
