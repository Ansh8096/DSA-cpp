#include<bits/stdc++.h>
using namespace std;
// int hash1[1e7]={0}; //  array range globally is upto 10^7 , 1e7 --> 10^7
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"enter the value of array ";
    for (int i = 0; i < n; i++) cin>>arr[i];
    
    // precompute:-
    int hash[13]={0};

    // int hash[1000000]={0}; //  (array range inside main is upto 10^6)
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;    // arr[i]--> here is index, we go to that index in hash array and do a plus 1 whenever the element is there ....
    }
    
    cout<<"enter how many time you want to run query "<<endl;
    int q;
    cin>>q;
    cout<<"check for the numbers you want..."<<endl;
    while (q--) // if we set q=5 loop will run for 5 times... 
    {
    int number;
    cin>>number;
    
    // fetch
    cout<<number<<" is repeated "<<hash[number]<<" times in the array"<<endl;
    }
    return 0;
}
