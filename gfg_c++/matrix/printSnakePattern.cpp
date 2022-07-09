/**
 * @file printSnakePattern.cpp
 * @author Sanjeev Kumar
 * @brief Print elements of 2D matrix in Snake Pattern
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> create_vector(int row, int col){

    vector<vector<int>> a;
    cout<<"Enter the elements of vector: ";
    for(int i=0; i<row; i++){
        vector<int> v;
        for(int j=0; j<col; j++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        a.push_back(v);
    }

    return a;
}

void print2DVector(vector<vector<int>> &v){
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printSnake(vector<vector<int>> &a){
    for(int i=0; i<a.size(); i++){
        if(i%2==0){
            for(int j=0; j<a[i].size(); j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=a[i].size()-1; j>=0; j--){
                cout<<a[i][j]<<" ";
            }
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cout<<"Enter the no of test cases: ";
    cin>>t;

    while(t--){
        int row, col;
        cout<<"Enter the no of rows: ";
        cin>>row;
        cout<<"/nEnter the no of col: ";
        cin>>col;
        vector<vector<int>> v;
        v = create_vector(row,col);
        print2DVector(v);
        printSnake(v);
    }
    return 0;
}