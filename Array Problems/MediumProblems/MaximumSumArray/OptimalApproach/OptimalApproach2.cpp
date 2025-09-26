#include <bits/stdc++.h>
using namespace std;
pair<int, int> maximum_subarr_sum_OP2(int arr[], int n){
  // OPTIMAL APPROACH... (FOR PRINTING THE MAXIMUM SUBARRAY sUM)
  int maxi = INT_MIN;
  int sum = 0, start = 0;
  int ansStart = -1, ansEnd = -1;
  for (int i = 0; i < n; i++){
    if (sum == 0) start = i;
    sum += arr[i];
    if (sum > maxi) {
      maxi = sum;
      ansStart = start, ansEnd = i;
    }
    if (sum < 0) sum = 0;
  }
  if (maxi < 0) maxi = 0;
  cout << "the maximum subarray sum is " << maxi << endl;
  return {ansStart, ansEnd};
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  pair<int,int> ans = maximum_subarr_sum_OP2(arr,n);
  cout<<ans.first<<","<<ans.second<<endl;
}
