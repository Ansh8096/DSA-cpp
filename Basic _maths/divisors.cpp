#include<bits/stdc++.h>
using namespace std;
void explain_divisors(int n){
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0) {
            cout<<i<<" ";
        }
    } 
}
int main(){
    int a;
    cout<<"enter the value: "<<endl;
    cin>>a;
    explain_divisors(a);
    return 0;
}
