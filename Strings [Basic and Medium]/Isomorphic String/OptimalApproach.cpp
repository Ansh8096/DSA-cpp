#include <bits/stdc++.h>
using namespace std;
string isIsomorphic_OP(string s, string t){
  int n = s.length();
  int hash_s[128] = {0};
  int hash_t[128] = {0};
  for (int i = 0; i < n; i++){
    if (hash_s[s[i]] != hash_t[t[i]]) return "false";
    hash_s[s[i]] = i + 1;
    hash_t[t[i]] = i + 1;
  }
  return "true";
}
int main(){
  cout<<isIsomorphic_OP("apple","bbnbm");
  return 0;                                                                                          
}
