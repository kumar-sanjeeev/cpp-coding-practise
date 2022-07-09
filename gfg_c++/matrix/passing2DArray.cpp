/**
 * @file passing2DArray.cpp
 * @author Sanjeev Kumar
 * @brief Passing 2D arrays in the funtion
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

const int row = 3;
const int col = 2;

// one way to do this --> but still only useful for any rows but having 2 columns
void printArray1(int a[][2], int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<2; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

// there is no way that we can pass the size of row and column into a function
// along with array to print the 2d array
//******solution*********
// Declare the rows and columns as global variable
void printArray2(int a[row][col]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

// C-style solution to write the general purpose matrix methods
//********** Using Double Pointers*****************************
void printArray3(int **a, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
    }
}

//************Using arrays of Pointers*************************
void printArray4(int *a[], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

//************Using Array of Vectors***************************
void printArray5(vector<int> a[], int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

//************Using Vectors of Vectors****************************

void printArray6(vector<vector<int>> &a){
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // int a[3][2] ={{1,2},{3,4},{5,6}};
    // printArray1(a,3);

    // using double pointers
    int **a;                     
    int m=3, n=2;
    a = new int *[m];           

    for(int i=0; i<m; i++){
        a[i] = new int [n];
        for(int j=0; j<n; j++){
            a[i][j] = i;
            cout<<a[i][j]<<" ";
        }
    }

    // using array of pointers
    int m=3; int n=2;

    int *a[m];
    for(int i=0; i<m; i++){
        a[i] = new int [n];

        for(int j=0; j<n; j++){
            a[i][j] = i;
        }
    }

    return 0;
}