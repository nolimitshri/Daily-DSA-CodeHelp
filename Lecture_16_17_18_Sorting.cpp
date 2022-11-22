#include<iostream>
using namespace std;

void printArr(int *arr, int size){
    for(int i{0}; i < size; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int *arr, int size){
    printArr(arr, size);
    for(int i = 0; i < size-1; i++){ // constant to which it will be compared
        for(int j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    printArr(arr, size);
}

void bubbleSort(int *arr, int size){
    bool swapped =  false;
    printArr(arr, size);
    for(int i = 1; i < size; i++){ // for rounds
        for(int j = 0; j < size - i; j++){ // main loop
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
    printArr(arr, size);
}

void insertionSort(int *arr, int size){
    printArr(arr, size);
    for(int i = 1; i < size; i++){ // for rounds and consider single 0th element as sorted
        int temp = arr[i];
        int j = i - 1;
        for(j; j >= 0; j--){
            if(temp < arr[j]){
                // shift
                arr[j+1] = arr[j];
            } else {
                break;
            }
        }
        arr[j+1] = temp;
    }
    printArr(arr, size);
}

int main(){
    // O(n^2)

    // Selection Sort
    // Place the smallest element in the array at its position
    // Round: n - 1 // two pointer sorting
    int arr[5] {64,25,12,22,11};
    // selectionSort(arr, 5);

    // Bubble Sort
    // Big Elements at its correct position // in each round we are comparing and swapping
    // Rounds: n - 1
    // bubbleSort(arr, 5);

    // Insertion Sort - no swapping shifting only
    // Rounds: n - 1
    // adaptible algorithm - time to time the array gets sorted
    // stable algorithm
    // insertionSort(arr, 5);


    return 0;
}