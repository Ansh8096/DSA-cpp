#include <bits/stdc++.h>
using namespace std;
void union_Array(int arr1[], int n1, int arr2[], int n2)
{
  int i = 0;
  int j = 0;
  vector<int> unionArr;
  while (i < n1 && j < n2)
  {
    if (arr1[i] <= arr2[j])
    {
      if (unionArr.size() == 0 || unionArr.back() != arr1[i])
      {
        unionArr.push_back(arr1[i]);
      }
      i++;
    }
    else
    {
      if (unionArr.size() == 0 || unionArr.back() != arr2[j])
      {
        unionArr.push_back(arr2[j]);
      }
      j++;
    }
  }

  while (i < n1)
  {
    if (unionArr.size() == 0 || unionArr.back() != arr1[i])
    {
      unionArr.push_back(arr1[i]);
    }
    i++;
  }

  while (j < n2)
  {
    if (unionArr.size() == 0 || unionArr.back() != arr2[j])
    {
      unionArr.push_back(arr2[j]);
    }
    j++;
  }

  // for printing the vector...
  for (auto itr : unionArr)
  {
    cout << itr << " ";
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

  union_Array(arr,n,arr1,n1);
  return 0;
}
