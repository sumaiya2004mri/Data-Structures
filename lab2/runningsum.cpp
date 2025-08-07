#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: "<<endl;
    cin >> n;

    int a[n];
    cout << "Enter the elements: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum[n];
    int s= 0;

    for(int i = 0; i < n; i++)
    {
        s += a[i];
        sum[i] = s;
    }

    cout << "Running Sum: ";
    for(int i = 0; i < n; i++)
    {
        cout << sum[i] << " ";
    }

    return 0;
}

