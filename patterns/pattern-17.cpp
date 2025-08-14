#include <bits/stdc++.h>
using namespace std;
/*
       A     
      ABA    
     ABCBA   
    ABCDCBA  
   ABCDEDCBA 
*/
void print17(int n)
{

  for (int i = 0; i < n; i++)
  {

    // spaces
    for (int j = 0; j <= n - i - 1; j++)
    {
      cout << " ";
    }

    // char
    char ch = 'A';
    int breakpoint = (2 * i + 1) / 2;
    for (int x = 1; x <= 2 * i + 1; x++)
    {
      cout << ch;
      if (x <= breakpoint)
        ch++;
      else
        ch--;
    }

    // spaces
    for (int k = 0; k <= n - i - 1; k++)
    {
      cout << " ";
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
    print17(n);
  }
}
