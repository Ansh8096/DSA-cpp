#include <bits/stdc++.h>
using namespace std;
/*
A 
A B 
A B C 
A B C D 
A B C D E 
A B C D E F 
*/
void print14(int n)
{
  // second method:-
  for (int i = 0; i <= n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch << " ";
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
    print14(n);
  }
}
