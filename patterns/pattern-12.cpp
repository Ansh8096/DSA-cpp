#include <bits/stdc++.h>
using namespace std;
/*
1        1
12      21
123    321
1234  4321
1234554321    */
void print12(int n)
{
  for (int i = 1; i <= n; i++)
  {
    int space = (2 * n) - (2 * i);

    // numbers
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    // space
    for (int k = 1; k <= space; k++)
    {
      cout << " ";
    }

    // numbers
    for (int l = i; l >= 1; l--)
    {
      cout << l;
    }
    cout << endl;
    // space = space - 2;
    space -= 2; // exactly same as above..
  }
}
int main(){
  int t;
  cout << "enter how many times you want to print diff. patterns: " << endl;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    print12(n);
  }
}
