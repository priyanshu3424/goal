#include <iostream>
using namespace std;

void pArray(int* arr, int n)
{
    if (n == 0) {
        return;
    }
    // recursive call
    cout << arr[n - 1] << ' ';
    pArray(arr, n - 1);  
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    pArray(arr, 5);
    return 0;
}
