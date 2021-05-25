#include <iostream>
#include <string>

using namespace std;

template <typename T>
T IndexOfElem(const T arr[], const int size, const T elem);

template <typename T>
void Print(const T arr[], const int size);

int main()
{
    int arr[] = { 1, 5, 5, 7, -2, -55, 5, 8, 88, -536 };
    Print<int>(arr, size(arr));
    int a;
    cout << "Insert key: "; cin >> a;
    cout << "Index of found element: " << IndexOfElem(arr, size(arr), a) << endl << endl;

    return 0;
}

template <typename T>
T IndexOfElem(const T arr[], const int size, const T elem)
{
    T maxValue = arr[0];

    for (int i = 0; i < size; i++)
        if (arr[i] == elem)
            return i;
}
template <typename T>
void Print(const T arr[], const int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << "  ";
    cout << endl;
}