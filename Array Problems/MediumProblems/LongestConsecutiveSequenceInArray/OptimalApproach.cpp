#include <bits/stdc++.h>
using namespace std;
int lngst_cons_sequence_OP(vector<int> &arr,int n){
  if (n == 0) return 0;
  int longest = 1;
  unordered_set<int> st;
  for (int i = 0; i < n; i++){
    st.insert(arr[i]);
  }

  for (auto it : st){
    // it is used when there is no smaller element exists...
    if (st.find(it - 1) == st.end()){
      int x = it;
      int cnt = 1;
      // it is used till highest cnt is found...
      while (st.find(x + 1) != st.end()){
        x += 1;
        cnt += 1;
      }
      longest = max(longest, cnt);
    }
  }
  return longest;
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  vector<int> arr(n);
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  cout<<lngst_cons_sequence_OP(arr,n);
}
