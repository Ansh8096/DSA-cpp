#include <bits/stdc++.h>
using namespace std;
string longest_Palindrome(string s){
  int start = 0;
  int maxlen = 1; // because we will always have one char as our ans..
  int n = s.length();
  for (int i = 1; i < n; i++)
  {
    // when the palindrome string can be of odd number...
    int l = i - 1;
    int r = i;
    while (l >= 0 && s[l] == s[r])
    {
      if (r - l + 1 > maxlen)
      {
        maxlen = r - l + 1;
        start = l; // we gotta store the starting point..
      }
      l--, r++;
    }
    // when the palindrome string can be of even no ....
    l = i - 1;
    r = i + 1;
    while (r < n && l >= 0 && s[l] == s[r])
    {
      if (r - l + 1 > maxlen)
      {
        start = l; // we gotta store the starting point..
        maxlen = r - l + 1;
      }
      l--, r++;
    }
  }
  return s.substr(start, maxlen); // it will print the string from start-->maxlen ...
}
int main(){
  cout<<longest_Palindrome("babad");
  return 0;                                                                                          
}
