#include<bits/stdc++.h>
using namespace std;
void explain_count_digits(int n){ 
    int cnt=0; // it will be used to count the digits...
    while (n>1)
    {
        cnt=cnt+1; // this will starts from zero and adds 1 to tell how many time the operation runs..
        n=n/10; 
    }   
    cout<<"the no. of digits: "<<cnt;
}
int main()
{
    int a;
    cout<<"enter values: "<<endl;
    cin>>a;  
    explain_count_digits(a);  
    return 0;
}
