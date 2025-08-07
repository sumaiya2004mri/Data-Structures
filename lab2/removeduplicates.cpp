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

    for(int i =0 ; i < n ; i ++)
    {
        bool isduplicate= false;
        for(int j=0 ; j<i ; j ++)
        {
            if (a[i]==a[j])
            {
                isduplicate = true;
                break;
            }
        }
        if (!isduplicate)
        {
            cout<<a[i] << " ";
        }
    }
}

