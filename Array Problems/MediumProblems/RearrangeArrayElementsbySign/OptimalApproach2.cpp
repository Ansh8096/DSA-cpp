#include <bits/stdc++.h>
using namespace std;
vector<int> rearrange_arr_alt_pos_neg_OP2(vector<int> &a,int n){
  vector<int> pos, neg;
  // this for adding (+ves to pos.) and (-ves to neg.).....
  for (int i = 0; i < n; i++)
  {
    if (a[i] >= 0) pos.push_back(a[i]);
    else neg.push_back(a[i]);
  }

  if (pos.size() > neg.size())
  {
    for (int i = 0; i < neg.size(); i++)
    {
      a[2 * i] = pos[i];
      a[2 * i + 1] = neg[i];
    }
    // when the elements are left in pos vector.
    int index = neg.size() * 2; // this will give the index in org. arr from where elements are not arranged...
    for (int i = neg.size(); i < pos.size(); i++){
      a[index] = pos[i]; // this will fill up the left +ves elements from pos -> org. arr
      index++;
    }
  }
  // this will also cover cover thecondition when pos.size()==neg.size()
  else
  {
    for (int i = 0; i < pos.size(); i++)
    {
      a[2 * i] = pos[i];
      a[2 * i + 1] = neg[i];
    }

    int index = pos.size() * 2; // this will give the index in org. arr from where elements are not arranged...
    for (int i = pos.size(); i < neg.size(); i++)
    {
      a[index] = neg[i];
      index++;
    }
  }
  return a;
}
int main(){
  int n;
  cout << "enter the size of an array: " << endl;
  cin >> n;

  vector<int> arr(n);
  cout << "enter the values of an array: " << endl;
  for (int i = 0; i < n; i++) cin>>arr[i];

  vector<int> ans = rearrange_arr_alt_pos_neg_OP2(arr,n);
  
  // for printing the array
  for (auto itt : ans) cout << itt << " ";
}
