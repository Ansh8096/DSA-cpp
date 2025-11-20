#include <bits/stdc++.h>
using namespace std;
int minimize_max_dist_gaststation_BT(vector<int> &a, int n, int k){
  vector<int> how_many(n - 1, 0);
  priority_queue<pair<long double, int>> PQ;
  // insert the first n-1 elements into pq
  // with respective distance values:
  for (int i = 0; i < n - 1; i++){
    PQ.push({a[i + 1] - a[i], i});
  }

  // Pick and place k gas stations:
  for (int gas_st = 1; gas_st <= k; gas_st++){
    // Find the maximum section
    // and insert the gas station:
    auto tp = PQ.top();
    PQ.pop();
    int index = tp.second;
    // insert the current gas station:
    how_many[index]++;

    long double initial_diff = (a[index + 1] - a[index]);
    long double new_sec = initial_diff / (long double)(how_many[index] + 1);
    PQ.push({new_sec, index});
  }
  return PQ.top().first;
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
    
  cout<<minimize_max_dist_gaststation_BT(a,n,m);
  return 0;
}
