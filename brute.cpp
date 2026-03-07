#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    int h;
    if(a>b)
    {
        h=a;
    }
    else
    {
        h=b;
    }
    return h;
}
int main()
{
    int arr[10]={1,2,1,1,2,3,4,5,4,3};
    int i,j,k,s=0,len=0;
    cout<<"enter the sum?"<<endl;
    cin>>k;
    for(i=0;i<10;i++)
    {
        s=0;
        for(j=i;j<10;j++)
        {
            s=s+arr[j];
            if(s==k)
            {
                len=max(len,j-i+1);
            }
        }
    }
    cout<<"longest length is:"<<len;
    
}