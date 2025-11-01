#include <bits/stdc++.h>
using namespace std;
int minimum_in_sortd_rotatd_arr_uniq(vector<int> &a, int n)
{
  int low = 0, high = n - 1, ans = INT_MAX;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    // search space is already sorted
    // then arr[low] will always be
    // the minimum in that search space:
    if (a[low] <= a[high])
    {
      ans = min(ans, a[low]);
      break;
    }

    // if left part is sorted:
    if (a[low] <= a[mid])
    {
      // keep the minimum:
      ans = min(ans, a[low]);
      // Eliminate left half:
      low = low + 1;
    }

    // if right part is sorted:
    else
    {
      // keep the minimum:
      ans = min(ans, a[mid]);
      // Eliminate right half:
      high = mid - 1;
    }
  }
  return ans;
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;

  vector<int>a(n1);
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a[i]; 

  cout<<minimum_in_sortd_rotatd_arr_uniq(a,n1);
  return 0;
}
