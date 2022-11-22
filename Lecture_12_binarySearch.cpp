#include<iostream>
using namespace std;

int binarySearch(int *arr, int size, int key){
    int low = 0, high = size-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] > key){
            high = mid-1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int recursiveBinarySearch(int *arr, int size, int s, int e, int key){
    if(s == e){
        if(arr[s] == key){
            return s;
        } else {
            return -1;
        }
    } else {
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] > key){
            recursiveBinarySearch(arr, size, s, mid-1, key);
        } else {
            recursiveBinarySearch(arr, size, mid+1, e, key);
        }
    }
}

int main(){
    int arr[10] {1,2,3,4,5,6,7,8,9,10};
    cout << "Normal Binary Search: " << binarySearch(arr,10,10) << endl;
    cout << "Recursive Binary Search: " << recursiveBinarySearch(arr,10,0,9,10) << endl;
    return 0;
}