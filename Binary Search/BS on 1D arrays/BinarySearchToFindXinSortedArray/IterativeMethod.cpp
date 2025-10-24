#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &a, int n, int target)
{
  int low = 0, high = n - 1;
  // Perform the steps:
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] == target) return mid;
    else if (a[mid] < target) low = mid + 1;
    else high = mid - 1;
  }
  return -1;
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;
  vector<int>a(n1);
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a[i]; 
  
  int tar;
  cout<<"Enter the value of tar: "<<endl;
  cin>>tar;
  
  cout<<binary_search(a,n1,tar);

  return 0;
}
