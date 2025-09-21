#include <bits/stdc++.h>
using namespace std;
string two_sum_OP(vector<int> &arr, int n, int target){
  sort(arr.begin(), arr.end());
  int i = 0;
  int j = n - 1;
  while (i < j){
    int sum = arr[i] + arr[j];
    if (sum == target) return "yes";
    if (sum < target){
      i++;
    }
    if (sum > target){
      j--;
    }
  }
  return "no";
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  vector<int> arr(n);
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  int target;
  cout<<"Enter the value of target: "<<endl;
  cin>>target;

  cout<<two_sum_OP(arr,n,target);
}
