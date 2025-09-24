#include <bits/stdc++.h>
using namespace std;
int maximum_subarr_sum(int arr[],int n){
  // BETTER APPROACH... O(n^2)
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += arr[j];
      maxi = max(maxi, sum);
    }
  }
  return maxi;
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  cout<<maximum_subarr_sum(arr,n);
}
