#include <bits/stdc++.h>
using namespace std;
int first_function(vector<int> &a, int n, int x)
{
  int low = 0, high = n - 1;
  int first = -1;
  // Perform the steps:
  while (low <= high){
    int mid = (low + high) / 2;
    if (a[mid] == x)
    {
      first = mid;
      high = mid - 1;
    }
    else if (a[mid] < x) low = mid + 1;
    else high = mid - 1;
  }
  return first;
}
int last_function(vector<int> &a, int n, int x)
{
  int low = 0, high = n - 1;
  int last = -1;
  // Perform the steps:
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] == x)
    {
      last = mid;
      low = mid + 1;
    }
    else if (a[mid] < x) low = mid + 1;
    else high = mid - 1;
  }
  return last;
}
pair<int, int> first_last_occurence_OP2(vector<int> &a, int n, int x){
  int first = first_function(a, n, x);
  if (first == -1) return {-1, -1};
  int last = last_function(a, n, x);
  return {first, last};
}
int cnt_occurences_of_x(vector<int> &a, int n, int x){
  pair<int, int> ans = first_last_occurence_OP2(a, n, x);
  if (ans.first == -1) return 0;
  return (ans.second - ans.first + 1);
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

  cout<<cnt_occurences_of_x(a,n1,x);
  return 0;
}
