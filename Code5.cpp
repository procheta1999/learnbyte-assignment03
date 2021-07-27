#include <iostream>
using namespace std;
int main()
{
    int n,arr[40],product=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       product=product*arr[i];
    }
    cout<<"The product is:"<<product<<endl;
    
    return 0;
}
