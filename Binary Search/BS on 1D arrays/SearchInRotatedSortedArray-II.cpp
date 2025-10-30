#include <bits/stdc++.h>
using namespace std;
int search_el_in_rotated_sorted_arr2(vector<int> &a, int n, int target){
  // when the sorted rotated array has the duplicate elements:-
  int low = 0, high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    // if mid points the target
    if (a[mid] == target) return true;

    // Edge case: (modification)
    if (a[low] == a[mid] && a[mid] == a[high])
    {
      low = low + 1;
      high = high - 1;
      continue;
    }

    // if left is sorted....
    if (a[low] <= a[mid])
    {
      if (a[low] <= target && target <= a[mid])
      {
        // element exists:
        high = mid - 1;
      }
      // element does not exist:
      else low = mid + 1;
    }

    // if right is sorted....
    else
    {
      if (a[mid] <= target && target <= a[high])
      {
        // element exists:
        low = mid + 1;
      }
      // element does not exist:
      else high = mid - 1;
    }
  }
  return false;
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;

  vector<int>a(n1);
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a[i]; 
  
  int x;
  cout<<"Enter the value of x: "<<endl;
  cin>>x;

  cout<<search_el_in_rotated_sorted_arr2(a,n1,x);
  return 0;
}
