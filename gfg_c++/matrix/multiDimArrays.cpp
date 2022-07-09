/**
 * @file multiDimArrays.cpp
 * @author Sanjeev Kumar
 * @brief Different ways to create the multi dimensional arrays in the cpp
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 */

#include <bits/stdc++.h>
using namespace std;

int main(){

    // method 1 
    int a[3][2] = {{1,2},
                   {3,4},
                   {5,6}};

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // method 2: array of pointers
    int m=3, n=2;
    int *a[m];
    for(int i=0; i<m; i++){
        a[i] = new int[n];
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            a[i][j] = 10;
            cout<<a[i][j]<<" ";
        }
    }

    // method3: array of vectors
    int m=3, n=2;
    vector<int> a[m];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            a[i].push_back(10);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
    }

    // method 4: vectors of vectors
    int m=3, n=2;
    vector<vector<int>> a;
    
    for(int i=0; i<m; i++){
        vector<int> v;
        for(int j=0; j<n; j++){
            v.push_back(10);
        }
        a.push_back(v);
    }

    for(int i=0; i<a.size(); i++){
        for(int j=0; j<a[i].size(); j++)
        {
            cout<<a[i][j]<<" ";
        }
    }

    return 0;
}