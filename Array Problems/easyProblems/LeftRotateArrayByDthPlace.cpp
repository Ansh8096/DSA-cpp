#include <bits/stdc++.h>
using namespace std;

void reverse_arr_D(int arr[], int start, int end){
  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void left_rot_arr_by_D_place(int arr[], int n, int d){

  d=d%n; // ---> explain in notes...

  // reversing from 0 to d-1
  reverse_arr_D(arr, 0, d - 1);

  // reversing from d to n-1
  reverse_arr_D(arr, d, n - 1);

  // reversing from 0 to n-1
  reverse_arr_D(arr, 0, n - 1);

  // reverse(arr,arr+d);
  // reverse(arr+d,arr+n); -----> this is an stl function rverse...
  // reverse(arr,arr+n);

  // for printing our array..
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
int main(){

  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  int d;
  cout<<"Enter the no. of index you want to rotate : "<<endl;
  cin>>d;
  left_rot_arr_by_D_place(arr,n,d);

  return 0;
}
