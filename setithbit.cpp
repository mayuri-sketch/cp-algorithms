//set the ith bit of an integer. like if it's 0, then make it to 1.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,c;
    cin>>a>>i;
    b=1<<i;
    //if(a&b==b) : this statement will give error because == has higher precendance than &. it would 
    //treat it as a&(b==b)
    if((a&b)==b)
    {
        cout<<"the ith bit is set already"<<endl;
    }
    else
    {
       c=a|b;
       cout<<"the set bit is "<<c<<endl;
    }
}