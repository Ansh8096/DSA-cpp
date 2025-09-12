#include <bits/stdc++.h>
using namespace std;
void right_rot_arr_byONE_place(int arr[], int n)
{
  int tem = arr[n - 1];
  for (int i = 0; i < n - 1; i++)
  {
    arr[n - i - 1] = arr[n - i - 2];
  }
  arr[0] = tem;

  // for printing our array..
  for (int i = 0; i < n; i++)cout << arr[i] << " ";
}
int main(){
  
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;
  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];
  
  right_rot_arr_byONE_place(arr,n);
  return 0;
}
