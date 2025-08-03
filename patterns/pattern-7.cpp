#include <bits/stdc++.h>
using namespace std;
void print7(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space:-
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // star:-
    for (int k = 0; k < 2 * i + 1; k++)
    {
      cout << "*";
    }
    // space:-
    for (int l = 0; l < n - i - 1; l++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
int main()
{
  int t;
  cout << "enter how many times you want to print diff. patterns: "<<endl;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    print7(n);
  }
}
