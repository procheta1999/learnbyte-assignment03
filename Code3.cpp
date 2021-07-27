#include <iostream>
using namespace std;
int main()
{
    int n,arr[40],count=0,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       if(x==arr[i])
       {
           count++;
       }
    }
    cout<<"The count is:"<<count<<endl;
    return 0;
}
