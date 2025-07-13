#include<bits/stdc++.h>
using namespace std;
void getGCD_HCF(int n1, int n2){
// 3rd method.......
    while ((n1>0)&&(n2>0))
    {
        if(n1>n2) {n1=n1%n2;}
        else n2=n2%n1;
    }
    if (n1==0) cout<<"GCD is: "<<n2;
    else cout<<"GCD is: "<<n1;
}
int main(){
    int a,b;
    cout<<"enter values: "<<endl;
    cin>>a>>b;
    getGCD_HCF(a,b);
    return 0;
}
