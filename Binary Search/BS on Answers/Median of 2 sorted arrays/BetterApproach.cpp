#include <bits/stdc++.h>
using namespace std;
double mdn_of_two_sortd_arr_BT(vector<int> &a1,int n1,vector<int> &a2,int n2){
  int i = 0, j = 0;
  int n = n1 + n2;
  int idx2 = (n / 2);
  int idx1 = idx2 - 1;
  int cnt = 0;
  int el1 = -1, el2 = -1;
  while (i < n1 && j < n2)
  {
    if (a1[i] < a2[j])
    {
      if (cnt == idx1) el1 = a1[i];
      if (cnt == idx2) el2 = a1[i];
      cnt++; i++;
    }
    else
    {
      if (cnt == idx1) el1 = a2[j];
      if (cnt == idx2) el2 = a2[j];
      cnt++; j++;
    }
  }
  while (i < n1)
  {
    if (cnt == idx1) el1 = a1[i];
    if (cnt == idx2) el2 = a1[i];
    cnt++; i++;
  }
  while (j < n2)
  {
    if (cnt == idx1) el1 = a2[j];
    if (cnt == idx2) el2 = a2[j];
    cnt++; j++;
  }
  if (n % 2 == 1) return el2;
  else
  {
    return (double)((double)(el1 + el2)) / 2.0;
  }
}
int main(){

  int n;
  cout<<"Enter the value n: "<<endl;
  cin>>n;

  vector<int> a(n);
  cout<<"Enter the values of the array:"<<endl;
  for(int i=0;i<n;i++) cin>>a[i];

  int n1;
  cout<<"Enter the value n: "<<endl;
  cin>>n1;

  vector<int> a1(n1);
  cout<<"Enter the values of the array:"<<endl;
  for(int i=0;i<n1;i++) cin>>a1[i];
    
  cout<<mdn_of_two_sortd_arr_BT(a,n,a1,n1);
  return 0;
}
