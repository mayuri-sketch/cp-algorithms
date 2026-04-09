//check if ith bit set or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,b;
    cin>>a>>i;
    b=1<<i;
    if(a&b==b)
    {
        cout<<"yes the ith bit is set"<<endl;
    }
    else
    {
        cout<<"no the ith bit is not set"<<endl;
    }
}