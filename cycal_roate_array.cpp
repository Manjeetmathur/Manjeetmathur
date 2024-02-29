#include <iostream>
using namespace std;

void rotateCycle(int arr[], int n)
{
    if (n <= 1)
    {
        return;
    }

    int lastElement = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastElement;

    // void rotate(int arr[], int n)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         swap(arr[i], arr[n - 1]);
    //     }
    // }
}
int main()
{
    int arr1[] = {2, 4, 6, 8, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout << "original array : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nAfter the cyclically rotation : ";
    rotateCycle(arr1, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
}