#include <bits/stdc++.h>
using namespace std;
void rearrange_arr_alt_pos_neg(int arr[], int n){
  vector<int> pos;
  vector<int> neg;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] >= 0) pos.push_back(arr[i]);
    else if (arr[i] < 0) neg.push_back(arr[i]);
  }
  for (int i = 0; i < n / 2; i++)
  {
    arr[2 * i] = pos[i];
    arr[2 * i + 1] = neg[i];
  }

}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  rearrange_arr_alt_pos_neg(arr,n);
  
  // for printing the array
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
