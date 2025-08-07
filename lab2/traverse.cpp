#include <iostream>
using namespace std;
int main()
{
    int n,even_sum=0,odd_sum=0;
    cout<<"Enter the number of elements" <<endl;
    cin>>n;


    int a[n];
    cout<<"Enter the elements of array" <<endl;
    for(int i=0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            even_sum++;
        }
        else
        {
            odd_sum++;
        }

    }

    cout<<"The array has : "<<endl<<even_sum<<" even elements and "<<odd_sum<<" odd elements."<<endl;
}

