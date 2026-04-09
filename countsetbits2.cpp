//another way to count number of set bits.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n!=0)
    {
        n=n&(n-1);
        count++;
    }
    cout<<"no of set bits : "<<count<<endl;
}
/* here the tc will be o(31). note that for an integer the first bit is reserved for the sign.
*/
