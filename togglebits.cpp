//toggle the bits. convert the 1 to zero and 0 to 1.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,c;
    cin>>a>>i;
    b=1<<i;
    if((a&b)==b)
    {
        c=a^b;
    }
    else
    {
        c=a|b;
    }
    cout<<"the toggled bit is : "<<c<<endl;
}