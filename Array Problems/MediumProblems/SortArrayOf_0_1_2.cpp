#include <bits/stdc++.h>
using namespace std;
void zero_one_twoOP(int arr[], int n){
  int low = 0;
  int mid = 0;
  int high = n - 1;
  while (mid <= high)
  {
    if (arr[mid] == 0)
    {
      swap(arr[mid], arr[low]);
      mid++;
      low++;
    }
    else if (arr[mid] == 1)
    {
      mid++;
    }
    else if (arr[mid] == 2)
    {
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  zero_one_twoOP(arr,n);
  
  // for printing:---
  for (int i = 0; i < n; i++) cout<<arr[i]<<" ";
  return 0;
}
