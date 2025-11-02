#include <bits/stdc++.h>
using namespace std;
int single_el_in_sortd_arr_OP(vector<int> &a, int n)
{
  // Edge cases:
  if (n == 1) return a[0];
  if (a[0] != a[1]) return a[0];
  if (a[n - 1] != a[n - 2]) return a[n - 1];

  int low = 1, high = n - 2;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    // if arr[mid] is the single element:
    if (a[mid] != a[mid + 1] && a[mid] != a[mid - 1])
    {
      return a[mid];
    }
    // we are in the left:
    if ((mid % 2 == 1 && a[mid - 1] == a[mid]) || (mid % 2 == 0 && a[mid + 1] == a[mid]))
    {
      // eliminate the left half:
      low = mid + 1;
    }
    // we are in the right:
    else
    {
      // eliminate the right half:
      high = mid - 1;
    }
  }
  // dummy return statement:
  return -1;
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;

  vector<int>a(n1);
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a[i]; 

  cout<<single_el_in_sortd_arr_OP(a,n1);
  return 0;
}
