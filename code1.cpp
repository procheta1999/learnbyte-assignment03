#include <iostream>
using namespace std;
int main()
{
    int n,arr[40],temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    temp=arr[0];
    arr[0]=arr[n-1];
    arr[n-1]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
