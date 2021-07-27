#include <iostream>
using namespace std;
int main()
{
    int n,arr[40],counto=0,counte=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       if(arr[i]%2==0)
       {
           counte++;
       }
       else
       {
           counto++;
       }
    }
    cout<<"Even: "<<counte<<endl;
    cout<<"Odd: "<<counto<<endl;
    
    return 0;
}
