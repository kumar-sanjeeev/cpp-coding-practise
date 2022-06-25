/**
 * @file mergeFunction.cpp
 * Sanjeev Kumar
 * Sort the array, given low, mid and high index value
 * @version 0.1
 * @date 2022-06-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;

void mergeFunction(int a[], int low, int mid, int high)
{

    int left_size = mid - low + 1; // 4
    int right_size = high - mid;   // 3

    int left[left_size];
    int right[right_size];

    // create left and right aux arrays
    for (int i = 0; i < left_size; i++)
    {
        left[i] = a[low + i];
    }

    for (int i = 0; i < right_size; i++)
    {
        right[i] = a[mid + 1 + i];
    }

    // create the two pointer
    int p1 = 0, p2 = 0, k = low;

    while (p1 < left_size && p2 < right_size)
    {
        if (left[p1] <= right[p2])
        {
            a[k] = left[p1];
            p1++;
            k++;
        }
        else
        {
            a[k] = right[p2];
            p2++;
            k++;
        }
    }

    while(p1 < left_size){
        a[k] = left[p1];
        p1++;
        k++;
    }

    while(p2 < right_size){
        a[k] = right[p2];
        p2++;
        k++;
    }

}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Enter the no of test cases: ";
    int t;
    cin >> t;
    while (t--)
    {

        cout << "\nEnter the size of array: ";
        int size;
        cin >> size;
        int a[size];
        cout << "\nEnter the elements of the array: ";
        for (int i = 0; i < size; ++i)
        {
            cin >> a[i];
        }
        cout << endl;
        cout<<"Enter the value of the low, mid and high index: ";
        int low, mid, high;
        cin >> low >> mid >> high;
        printArray(a, size);
        mergeFunction(a, low, mid, high);
        cout << endl;
        printArray(a,size);
    }

    return 0;
}
