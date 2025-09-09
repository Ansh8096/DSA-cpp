#include <bits/stdc++.h>
using namespace std;
void Sec_lrgst_elemnt_arr(int arr[], int n){
  int largest = arr[0];
  int Slargest = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      Slargest = largest;
      largest = arr[i];
    }
    else if (arr[i] < largest && arr[i] > Slargest)
    {
      Slargest = arr[i];
    }
  }
  cout << "Second largest element in the array : " << Slargest << endl;
}
int main(){

  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;
  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin >> arr[i];
  Sec_lrgst_elemnt_arr(arr,n);
  return 0;
}
