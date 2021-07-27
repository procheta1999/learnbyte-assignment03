#include <iostream>
using namespace std;
int main()
{
    int n,arr[40],temp,pos1,pos2;
    cin>>n>>pos1>>pos2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    temp=arr[pos1-1];
    arr[pos1-1]=arr[pos2-1];
    arr[pos2-1]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
