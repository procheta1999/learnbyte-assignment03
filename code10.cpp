#include <iostream>
using namespace std;
int main()
{
    int n,arr[40];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The negative numbers: ";
    for(int i=0;i<n;i++)
    {
       if(arr[i]<0)
       {
           cout<<arr[i]<<" ";
       }
    }

    
    return 0;
}
