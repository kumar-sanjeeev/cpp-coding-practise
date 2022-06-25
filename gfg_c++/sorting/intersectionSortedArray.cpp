/**
 * @file intersectionSortedArray.cpp
 * @author Sanjeev Kumar
 * @brief Print the comman elements of the two sorted arrays
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

// naive solution

void naive_intersection(int a[], int size1, int b[], int size2){
    /**
     * @logic 
     * start from elements in array one and look for the same
     * element in array 2, if found print the element
     */

    // explicit handling the 0th element
    int zero_element = a[0];
    
    for(int i=0; i<size2; i++){
        if(zero_element==b[i]){
            cout<<a[0]<<" ";
            break;
        }
    }
    for(int i=1; i<size1; i++)
    {
        if(a[i-1]==a[i]){
            continue;
        }
        for(int j=0; j<size2; j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}

// efficient solution

void intersection(int a[], int size1, int b[], int size2){
    int p1 = 0;
    int p2 = 0;

    while(p1 <size1 && p2 < size2){
        if( p1> 0 && a[p1]==a[p1-1]){
            p1++;
            continue;
        }
        if( a[p1] < b[p2]){
            p1++;
        }
        else if( a[p1] > b[p2]){
            p2++;
        }
        else{
            cout<<a[p1]<<" ";
            p1++;
            p2++;
        }
    }
    // while(p1 < size1 && p2 < size2){

    //     if(a[p1] < b[p2]){
    //         p1++;
    //     }
    //     else if (a[p1] > b[p2]){
    //         p2++;
    //     }
    //     else if(a[p1]==b[p2]){
    //         if(a[p1+1] == b[p2+1] && a[p1]==a[p1+1] && b[p2]==b[p2+1]){
    //             p1++;
    //             p2++;
    //         }
    //         else{
    //             cout<<a[p1]<<" ";
    //             p1++;
    //             p2++;
    //         }
    //     }
    // }
    // if(p1==size1 && p2==size2){
    //     if(a[p1]==b[p2])
    //     {
    //         cout<<a[p1]<<" ";
    //     }
    // }
    // while(p1 < size1){
    //     if(a[p1]==b[p2]){
    //         cout<<a[p1]<<" ";
    //         break;
    //     }
    //     p1++;
    // }
    //  while(p2 < size2){
    //     if(b[p2]==a[p1]){
    //         cout<<b[p2]<<" ";
    //         break;
    //     }
    //     p2++;
    // }
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
        intersection(a,size1,b,size2);
        // naive_intersection(a,size1,b,size2);
    }

    return 0;
}
