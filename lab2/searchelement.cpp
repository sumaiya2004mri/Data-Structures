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
    }
    int key;
    bool found=false;
    cout<<"Enter the element you are searching :"<<endl;
    cin>>key;
    for(int i=0; i < n; i++)
    {
        if(a[i]==key)
        {
            found =true;
            continue;
        }
    }
    if(found)
    {
        cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Element is not found"<<endl;
    }
}


