//count no of set bits.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n!=0)
    {
        if(n%2==1)
        {
            count++;
        }
        n=n/2;
    }
    cout<<"no of set bits : "<<count<<endl;
}