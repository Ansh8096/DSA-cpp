#include<bits/stdc++.h>
using namespace std;
void PrimeNo_chk(int n){
    int cnt=0;
    for (int i = 1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cnt++;
            if((n/i)!=i){
                cnt++;
            }
        }
    }
    if(cnt==2){
        cout<<"It is a prime number ";
    }
    else cout<<"It is not a prime number ";

}
int main(){
    int a;
    cout<<"enter the value: "<<endl;
    cin>>a;
    PrimeNo_chk(a);
    return 0;
}
