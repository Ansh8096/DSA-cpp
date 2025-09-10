#include <bits/stdc++.h>
using namespace std;
void chk_arr_sorted(int arr[], int n)
{
  int cnt = 0;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] >= arr[i - 1])
    {
    }
    else
    {
      cnt = 1;
      cout << "false";
      break;
    }
  }
  if (cnt == 0)
  {
    cout << "true";
  }
}
int main(){

  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;
  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin >> arr[i];
  chk_arr_sorted(arr,n);
  return 0;
}
