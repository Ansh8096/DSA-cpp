#include <bits/stdc++.h>
using namespace std;
int cnt_subarr_XOR_k_OP(vector<int> &arr, int n, int k){
  int xr = 0;
  map<int, int> mpp;
  mpp[xr]++;
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    xr = xr ^ arr[i];
    int x = xr ^ k;
    cnt += mpp[x];
    mpp[xr]++;
  }
  return cnt;
}
int main(){
  int n;
  cout << "Enter the size of the array: "<<endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the value of the array: "<<endl;
  for (int i = 0; i < n; i++) cin >> arr[i];
  int k;
  cout << "Enter the k value: "<<endl;
  cin >> k;
  cout<<cnt_subarr_XOR_k_OP(arr,n,k);
  return 0;
}
