#include <bits/stdc++.h>
using namespace std;
void intersection_array(int arr1[], int n1, int arr2[], int n2)
{
  vector<int> ans;
  int i = 0, j = 0;
  while (i < n1 && j < n2)
  {
    if (arr1[i] < arr2[j])
    {
      i++;
    }
    else if (arr2[j] < arr1[i])
    {
      j++;
    }
    else if (arr1[i] == arr2[j])
    {
      ans.push_back(arr1[i]);
      i++;
      j++;
    }
  }
  for (int itt : ans)
  {
    cout << itt << " ";
  }
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  int arr[n];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  int n1;
  cout << "enter the size of an array: " << endl;
  cin >> n1;

  int arr1[n1];
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n1; i++) cin>>arr1[i];

  intersection_array(arr,n,arr1,n1);
  return 0;
}
