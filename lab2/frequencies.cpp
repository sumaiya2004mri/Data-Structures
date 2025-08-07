#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    bool counted[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        counted[i] = false;
    }

    cout << "Element Frequencies:\n{ ";
    for (int i = 0; i < n; i++)
    {
        if (counted[i]) continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                counted[j] = true;
            }
        }

        cout << arr[i] << " : " << count;
        if (i < n - 1) cout << ",";
    }
    cout << " }" << endl;

    return 0;
}

