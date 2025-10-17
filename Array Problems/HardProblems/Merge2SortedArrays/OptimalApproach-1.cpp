#include <bits/stdc++.h>
using namespace std;
void mrg_sortd_arr_OP1(int a1[], int n, int a2[], int m)
{
  int i = n - 1, j = 0;
  while (i >= 0 && j < m)
  {
    if (a1[i] > a2[j])
    {
      swap(a1[i], a2[j]);
      i--, j++;
    }
    else break;
  }
  sort(a1, a1 + n);
  sort(a2, a2 + m);

  // for printing.......
  cout << "the first array is : " << endl;
  for (int i = 0; i < n; i++) cout << a1[i] << " ";
  cout << endl;
  cout << "the second array is : " << endl;
  for (int i = 0; i < m; i++) cout << a2[i] << " ";
}
int main(){
  int n1;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n1;

  int a1[n1];
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n1; i++) cin>>a1[i];  

  int n2;
  cout<<"Enter the size of the 2nd array: "<<endl;
  cin>>n2;

  int a2[n2];
  cout<<"Enter the value of the array: "<<endl;
  for (int i = 0; i < n2; i++) cin>>a2[i];

  mrg_sortd_arr_OP1(a1,n1,a2,n2);
  return 0;
}
