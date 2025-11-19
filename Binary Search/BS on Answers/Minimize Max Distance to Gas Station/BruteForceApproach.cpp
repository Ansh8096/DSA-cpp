#include <bits/stdc++.h>
using namespace std;
int minimize_max_dist_gaststation_BR(vector<int> &a, int n, int k)
{
  vector<int> how_many(n - 1, 0);
  // Pick and place k gas stations:
  for (int gas_st = 1; gas_st <= k; gas_st++){
    // Find the maximum section
    // and insert the gas station:
    long double maxsection = -1;
    int maxind = -1;
    for (int i = 0; i < n - 1; i++)
    {
      long double diff = (a[i + 1] - a[i]);
      long double sec_len = diff / (long double)(how_many[i] + 1);
      if (sec_len > maxsection)
      {
        maxsection = sec_len;
        maxind = i;
      }
    }
    // insert the current gas station:--
    how_many[maxind]++;
  }

  // Find the maximum distance i.e. the answer:
  long double maxAns = -1;
  for (int i = 0; i < n - 1; i++)
  {
    long double diff = (a[i + 1] - a[i]);
    long double sec_len = diff / (long double)(how_many[i] + 1);
    maxAns = max(maxAns, sec_len);
  }
  return maxAns;
}
int main(){

  int n;
  cout<<"Enter the value n: "<<endl;
  cin>>n;

  vector<int> a(n);
  cout<<"Enter the values of the array:"<<endl;
  for(int i=0;i<n;i++) cin>>a[i];

  int m;
  cout<<"Enter the value of m: "<<endl;
  cin>>m;
    
  cout<<minimize_max_dist_gaststation_BR(a,n,m);
  return 0;
}
