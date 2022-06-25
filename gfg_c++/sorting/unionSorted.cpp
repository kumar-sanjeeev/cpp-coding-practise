/**
 * @file unionSorted.cpp
 * @author Sanjeev Kumar
 * @brief Implement union of two sorted array
 * @version 0.1
 * @date 2022-06-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void union_sorted(int a[], int size1, int b[], int size2){
    int p1 = 0;
    int p2 = 0;

    while(p1 < size1 && p2 < size2){
        if(p1 > 0 && a[p1]==a[p1-1]){
            p1++;
            continue;
        }
        
        if(p2 > 0 && b[p2]==b[p2-1]){
            p2++;
            continue;
        }

        if(a[p1] < b[p2]){
            cout<<a[p1]<<" ";
            p1++;
        }

        if(a[p1] > b[p2]){
            cout<<b[p2]<<" ";
            p2++;
        }

        if(a[p1] == b[p2]){
            cout<<a[p1]<<" ";
            p1++;
            p2++;
        }
    }

    while(p1 < size1){
        if(p1 > 0 && a[p1]!=a[p1-1]){
            cout<<a[p1]<<" ";
            p1++;
        }
    }

    while(p2 < size2){
        if(p2 > 0 && b[p2]!=b[p2-1]){
            cout<<b[p2]<<" ";
            p2++;
        }
    }
}
int main()
{
    cout << "Enter the no of test cases: ";
    int t;
    cin >> t;
    while (t--)
    {

        cout << "\nEnter the size of array1: ";
        int size1;
        cin >> size1;
        int a[size1];
        cout << "\nEnter the elements of the array: ";
        for (int i = 0; i < size1; ++i)
        {
            cin >> a[i];
        }

        cout << "\nEnter the size of array2: ";
        int size2;
        cin >> size2;
        int b[size2];
        cout << "\nEnter the elements of the array: ";
        for (int i = 0; i < size2; ++i)
        {
            cin >> b[i];
        }


        cout << endl;
        printArray(a, size1);
        printArray(b,size2);
        cout<<endl;
        union_sorted(a,size1,b,size2);
    }

    return 0;
}
