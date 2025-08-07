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
        sum+=a[i];
    }

    cout<<"The sum of all the elements of the arrays are : " << sum<<endl;
}

