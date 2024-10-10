#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    
}

void swapAlternate(int arr[], int size){

    for(int i=0; i<size; i=i+2){

        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int even [6] = {2,4,6,7,8,5};
    int odd [5] = {3,2,5,7,9};

    swapAlternate(even, 6);

    return 0;
}