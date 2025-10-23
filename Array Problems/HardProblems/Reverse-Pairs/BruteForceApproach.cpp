#include <bits/stdc++.h>
using namespace std;
int reverse_pairs_BR(int a[], int n){
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] > 2 * a[j]) cnt++;
    }
  }
  return cnt;
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;
  int a1[n1];
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a1[i];  
  
  cout<<reverse_pairs_BR(a1,n1);

  return 0;
}
