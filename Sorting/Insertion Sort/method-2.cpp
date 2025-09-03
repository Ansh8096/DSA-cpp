// RECURSIVE METHOD:--------->
#include <bits/stdc++.h>
using namespace std;
void insertion_sort_rec(int arr[], int i, int n){
  if (i == n) return;
  while (i > 0 && arr[i] < arr[i - 1]){
    swap(arr[i], arr[i - 1]);
    i--; // (i--) ---> beacuz we don't want to just compare two elements. we want to compare all the previous elements but not less then the index 0 ...
  }
  insertion_sort_rec(arr, i + 1, n);
}
int main(){

  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;
  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin >> arr[i];
  insertion_sort_rec(arr,0, n);
  cout << "displaying the sorted array :" << endl;
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  return 0;
}
