#include<bits/stdc++.h>
using namespace std;
void explain_divisors(int n){
    // for (int i = 1; i <=n; i++)
    // {
    //     if(n%i==0) {
    //         cout<<i<<" ";
    //     }
    // } 
    //***************** OTHER WAY ********/
    vector<int> vc;
    // O(sqrt(n))
    for (int i = 1; i <=sqrt(n); i++) {   // or i*i<=n 
    if(n%i==0){
    vc.push_back(i);
    if((n/i) != i){
    vc.push_back(n/i);
    }}  
    }
    // O(no. of factors * log(no. of factors))
    sort(vc.begin(), vc.end());
    // O(no. of factors)
    for (auto it : vc)
    {
        cout << it << " ";
    }
}
int main(){
    int a;
    cout<<"enter the value: "<<endl;
    cin>>a;
    explain_divisors(a);
    return 0;
}
