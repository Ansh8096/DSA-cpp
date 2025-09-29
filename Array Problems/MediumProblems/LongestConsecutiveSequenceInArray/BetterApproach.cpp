#include <bits/stdc++.h>
using namespace std;
int lngst_cons_sequence_BR(vector<int> &arr,int n){
  // BETTER APPROACH....
  sort(arr.begin(), arr.end());
  int cnt = 0;
  int longest = 1;
  int last_smaller = INT_MIN;
  for (int i = 0; i < n; i++){
    if ((arr[i] - 1) == last_smaller){
      cnt += 1;
      last_smaller = arr[i];
    }
    else if (arr[i] == last_smaller){
    }
    else if (arr[i] != last_smaller){
      cnt = 1;
      last_smaller = arr[i];
    }
    longest = max(longest, cnt);
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

  cout<<lngst_cons_sequence_BR(arr,n);

}
