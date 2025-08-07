#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number of elements" <<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array" <<endl;
    for(int i=0; i < n; i++)
    {
        cin>>a[i];
    }
    int max1= a[0],max2=a[0];
    for(int i=0; i < n; i++)
    {
        if(a[i]>max1)
        {
            max1 = a[i];
        }
    }
    for(int i=0; i < n; i++)
    {
        if(a[i]>max2 && a[i]<max1)
        {
            max2 = a[i];
        }
    }
    cout<<"The second maximum elements of the array is : " << max2 <<endl;
}

