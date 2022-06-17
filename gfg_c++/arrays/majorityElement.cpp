/*Return the any index of majority element in the array
 * Majority element is that element which appear greater than size/2 times in the array
*/
#include <bits/stdc++.h>
using namespace std;

// naive solution
int majorityElement(int a[], int size){
    for(int i=0; i<size; i++){
        int count = 0;
        for(int j=i; j<size; j++){
            if(a[j]==a[i]){
                count++;
            }
        }
        if(count > size/2){
            return i;
        }
    }
    return -1;
}

//Better solution

int effi_majorityElement(int a[], int size){
    // first part of algo
    int result = 0;
    int count = 1;
    for(int i=1; i<size; i++){
        if(a[result]==a[i]){
            count++;
        }
        else{
            count --;
        }
        if(count==0){
            result = i;
            count = 1;
        }
    }
    //second part of algo
    int count = 0;
    for(int i=0; i<size; i++){
        if(a[result]==a[i]){
            count ++;
        }
    }
    if(count>size/2){
        return result;
    }
    return -1;
}


void printArray(int a[], int size){
    for(int i=0; i<size; ++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    cout<<"Enter the no of test cases: ";
    int t;
    cin>>t;

    while(t--){

        cout<<"\nEnter the size of array: ";
        int size;
        cin>>size;
        int a[size];
        cout<<"\nEnter the elements of the array: ";

        for(int i=0; i<size; ++i){
            cin>>a[i];
        }
        printArray(a,size);
        cout<<endl;
        cout<<majorityElement(a, size)<<endl;
    }
    
    return 0;
}