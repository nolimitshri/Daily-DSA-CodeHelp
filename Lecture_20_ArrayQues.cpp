#include<iostream>
using namespace std;

void printArr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArr(int *arr, int size){
    printArr(arr, size);
    int i = 0, j = size - 1;
    while(i < j){
        swap(arr[i++], arr[j--]);
    }
    printArr(arr, size);
}

void reverseAfterIndex(int *arr, int size, int point){
    int s = point, e = size - 1;
    printArr(arr, size);
    while(s < e){
        swap(arr[s++], arr[e--]);
    }
    printArr(arr, size);
}

void mergeArray(int *arr1, int *arr2, int s1, int s2){
    int brr[s1+s2];
    int i = 0, j = 0, k = 0;
    while(i < s1 && j < s2){
        if(arr1[i] < arr2[j]){
            brr[k++] = arr1[i++];
        } else {
            brr[k++] = arr2[j++];
        }
    }
    while(i < s1){
        brr[k++] = arr1[i++];
    }
    while(j < s2){
        brr[k++] = arr2[j++];
    }
    printArr(brr, s1+s2);
}

void moveZeroesRight(int *arr, int size){
    printArr(arr, size);
    int nonZero = 0; // i watches for non-zero element position
    for(int j = 0; j < size; j++){
        if(arr[j] != 0){
            swap(arr[j], arr[nonZero++]);
        }
    }
    printArr(arr, size);
}

void moveZeroesLeft(int *arr, int size){
    printArr(arr, size);
    int nonZero = size - 1;
    for(int j = size - 1; j >= 0; j--){
        if(arr[j] != 0){
            swap(arr[j], arr[nonZero--]);
        }
    }
    printArr(arr, size);
}

int main(){
    // int arr[6] {1,2,3,4,5,6};

    // Q1 Reverse an Array.
    // reverseArr(arr, 6);
    // reverseAfterIndex(arr, 6, 3);

    // Q2 Merge Sorted Array.
    // int arr1[5] {1,3,5,7,9};
    // int arr2[4] {2,4,6,8};
    // mergeArray(arr1, arr2, 5, 4 );

    // Q3 Move Zeroes
    int arr[6] {1,0,0,3,12,0};
    // move zeroes to right side or left side one pointer watching for non-zero position
    // and a loop to traverse and encounter a non zero element if found swap it
    // moveZeroesRight(arr, 6);
    // moveZeroesLeft(arr, 6);

    return 0;
}