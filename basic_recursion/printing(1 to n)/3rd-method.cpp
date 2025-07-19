#include <bits/stdc++.h>
using namespace std;
void problem__2(int n)
{ // print from 1 to N using recursion (using only one variable) ...
  if (n == 0)
  {
    return;
  }
  problem__2(n - 1);
  cout<<n<<" ";
}
int main()
{
  int n;
  cout << "enter the value" << endl;
  cin >> n;
  problem__2(n);
  return 0;
}
