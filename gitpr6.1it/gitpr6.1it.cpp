// gitpr6.1it.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

const int SIZE = 20;

void processArray(int a[], int n) {
    int count = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0 && a[i] % 5 != 0) {
            count++;
            sum += a[i];
            a[i] = 0;
        }
    }

    cout << "\nCount = " << count << ", Sum = " << sum << endl;
    cout << "Modified array:\n";
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int main() {
    srand(time(NULL));

    int a[SIZE];
    for (int i = 0; i < SIZE; i++)
        a[i] = -20 + rand() % 71;

    cout << "Initial array:\n";
    for (int i = 0; i < SIZE; i++)
        cout << setw(4) << a[i];
    cout << endl;

    processArray(a, SIZE);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
