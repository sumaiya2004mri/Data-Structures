#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements" <<endl;
    cin>>n;


    int a[n];
    cout<<"Enter the elements of array" <<endl;
    for(int i=0; i < n; i++)
    {
        cin>>a[i];
    }


    int b[n];
    for(int i=0 ; i<n; i++)
    {
        b[i]=a[n-1-i];
    }
    cout<<"---Entered array---" <<endl;
    for(int i =0 ; i<n ;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"---Reversed array---" <<endl;
    for(int i =0 ; i<n ;i++)
    {
        cout<<b[i]<<" ";
    }
}

