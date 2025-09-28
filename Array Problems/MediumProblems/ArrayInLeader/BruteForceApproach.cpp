#include <bits/stdc++.h>
using namespace std;
vector<int> leaders_inArray_BR(vector<int> &arr, int n){
  vector<int> ans;
  for (int i = 0; i < n; i++){
    string leader = "true";
    for (int j = i + 1; j < n; j++){
      if (arr[j] > arr[i]){
        leader = "false";
        break;
      }
    }
    if (leader == "true") ans.push_back(arr[i]);
  }
  return ans;
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  vector<int> arr(n);
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];
  
  vector<int> ans = leaders_inArray_BR(arr,n);
  
  // for printing the array
  for (auto itt : ans) cout << itt << " ";
}
