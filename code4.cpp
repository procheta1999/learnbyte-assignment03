#include <iostream>
using namespace std;
int main()
{
    int n,arr[40],sum=0;
    float avg=0.0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    avg=(float)sum/(float)n;
    cout<<"The sum is:"<<sum<<endl;
    
    printf(" The average is: %.2f",avg);
    return 0;
}
