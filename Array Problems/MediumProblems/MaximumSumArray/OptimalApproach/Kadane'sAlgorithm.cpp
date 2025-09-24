#include <bits/stdc++.h>
using namespace std;
int maximum_subarr_sum_OP1(int arr[], int n)
{
  // OPTIMAL APPROACH... (ONLY FOR PRINTING THE SUM)
  int maxi = INT_MIN;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    if (sum > maxi) maxi = sum;
    if (sum < 0) sum = 0;
  }

  if (maxi < 0) maxi = 0; // it will give maxi sum of subarray = 0(empty set) when all the elements of the array are -ve.
  return maxi;
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  cout<<maximum_subarr_sum_OP1(arr,n);
}
