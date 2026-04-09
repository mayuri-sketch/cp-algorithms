//clear ith bit. like change the 1 to 0.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,b,c;
    cin>>a>>i;
    b=1<<i;
    if((a&b)==b)
    {
        c=a^b;
        cout<<"the ith bit set is "<<c<<endl;
    }
    else
    {
        cout<<"the ith bit is already cleared"<<endl;
    }
}