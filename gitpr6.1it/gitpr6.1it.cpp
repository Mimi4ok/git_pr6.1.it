// gitpr6.1it.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

bool checkCriterion(int value, int index) {
    return (value > 0 && index % 5 != 0);
}

void generateArray(int a[], int size, int minVal, int maxVal) {
    for (int i = 0; i < size; i++)
        a[i] = minVal + rand() % (maxVal - minVal + 1);
}

void printArray(const int a[], int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

void countAndSum(const int a[], int size, int& count, int& sum) {
    count = 0;
    sum = 0;

    for (int i = 0; i < size; i++) {
        if (checkCriterion(a[i], i)) {
            count++;
            sum += a[i];
        }
    }
}

void replaceWithZero(int a[], int size) {
    for (int i = 0; i < size; i++) {
        if (checkCriterion(a[i], i))
            a[i] = 0;
    }
}

int main() {
    srand(time(0));

    const int SIZE = 20;
    int a[SIZE];
    int count = 0, sum = 0;

    generateArray(a, SIZE, -20, 50);

    cout << "Initial array:\n";
    printArray(a, SIZE);

    countAndSum(a, SIZE, count, sum);
    cout << "\nCount = " << count << ", Sum = " << sum << endl;

    replaceWithZero(a, SIZE);

    cout << "Modified array:\n";
    printArray(a, SIZE);

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
