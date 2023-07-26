#include <iostream>
using namespace std;

template <class X>
void bubble(X *items, int count)
{
    // register int a, b;
    X temp;
    for (int a = 1; a < count; a++)
        for (int b = count - 1; b >= a; b--)
            if (items[b - 1] > items[b])
            {
                temp = items[b - 1];
                // exchange elements t = items[b-1];
                items[b-1] = items[b];
                items[b] = temp;
            }
}

int main()
{
    int intArray[5] = {7, 5, 4, 3, 9};
    float floatArray[5] = {4.31f, 2.56f, 0.95f, 10.02f, 3.14f};
    cout << "Original Integer array: ";
    for (int i = 0; i < 5; i++)
        cout << intArray[i] << ' ';
    cout << endl<<endl;
    cout << "Original Float array: ";
    for (int i = 0; i < 5; i++)
        cout << floatArray[i] << ' ';
    cout << endl;

    bubble(intArray, 5);
    bubble(floatArray, 5);

    cout << "Sorted integer array: ";
    for (int i = 0; i < 5; i++)
        cout << intArray[i] << ' ';
    cout << endl;
    cout << "Sorted float array: ";
    for (int i = 0; i < 5; i++)
        cout << floatArray[i] << ' ';
    cout << endl;
    return 0;
}
