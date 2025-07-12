#include<bits/stdc++.h>
using namespace std;
void explain_extraction_digits(auto n){
    while (n>1)
    {
        auto lastdigit=n%10;
        cout<<lastdigit<<endl;
        n=n/10; 
    }   
}
int main()
{
    int a;
    cout<<"enter values: "<<endl;
    cin>>a;  
    explain_extraction_digits(a);  
    return 0;
}
