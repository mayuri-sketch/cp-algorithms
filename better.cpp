/*optimal code for negatives and zeros*/
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
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
    map<int, int> mpp;
    int arr[10]={1,1,1,1,2,3,4,5,0,6};
    int i,s=0,k,len=0;
    cout<<"enter the sum?"<<endl;
    cin>>k;
    for(i=0;i<10;i++)
    {
        s=s+arr[i];
        mpp[s]=i;
        if(s==k)
        {
            len=max(len,i+1);
        }
        if(mpp.find(s-k)!=mpp.end())
            {
                len=max(len,i-mpp[s-k]+1);
            }
        if(mpp.find(s)==mpp.end())
        {
            mpp[s]=i;
        }
        
    }
    cout<<"longest length : "<<len<<endl;
}
/*
The "Past-the-End" Concept
In C++, .end() does not point to the last item in the map; it points to a theoretical spot just after the last item.

myMap.find("key"): Returns an iterator to the specific key-value pair if it exists.

myMap.end(): Acts as a "Sentinel" or a "Stop" sign. It represents the boundary of the container.
*/