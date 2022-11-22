#include<iostream>
using namespace std;

int leftOccurence(int *arr, int size, int key){
    int s = 0, e = size-1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        } else if(arr[mid] > key){
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int rightOccurence(int *arr, int size, int key){
    int s = 0, e = size - 1;
    int ans = -1;
    while(s <= e){
        int mid = s+ (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        } else if(arr[mid] > key){
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int peakInMountain(int *arr, int size){
    int s = 0, e = size-1;
    while(s < e){
        int mid = s + (e-s)/2;
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int binarySearch(int *arr, int size, int key, int s, int e){
    while(s <= e){
        int mid = s+(e-s)/2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] > key){
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return -1;
}

int pivotOfArray(int *arr, int size){
    int s = 0, e = size-1;
    while(s < e){
        int mid = s+(e-s)/2;
        if(arr[mid] >= arr[0]){ // 1st line
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int searchWithPivot(int *arr, int size, int key){
    int s = 0, e = size - 1;
    int pivot = pivotOfArray(arr, size);
    if(arr[pivot] <= key && arr[e] >= key){
        return binarySearch(arr, size, key, pivot, e);
    } else {
        return binarySearch(arr, size, key, s, pivot-1);
    }
}

long long int sqroot(int n){
    int s = 0, e = n, ans = -1;
    while(s <= e){
        long long int mid = s+(e-s)/2;
        if(mid*mid == n){
            return mid;
        } else if(mid*mid > n) {
            e = mid - 1;
        } else {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}

double sqrootDec(int n){
    double ans = sqroot(n);
    double factor = 1;
    for(int i = 0; i < 3; i++){
        factor /= 10;
        for(double j = ans; j*j < n; j+=factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    // Q1 Find Right and Left Occurence of an element.
    // int arr[8] {0,0,1,1,2,2,2,2};
    // cout << "The Left Occurence: " << leftOccurence(arr, 8, 2) << endl;
    // cout << "The Right Occurence: " << rightOccurence(arr, 8, 2) << endl;

    // Q2 Find total occurence of an element.
    // cout << "Occurence of Element 2 is: " << rightOccurence(arr,8,2) - leftOccurence(arr,8,2) + 1 << endl;

    // Q3 Find peak of a mountain array.
    // int arr[6] {1,2,3,6,5,4};
    // cout << "Peak of this array is at: " << peakInMountain(arr, 6) << endl;

    // Q4 Find Pivot in an Array / sorted-rotated array.
    // int arr[5] {7,9,1,2,3};
    // cout << "The Pivot of the Array is: " << pivotOfArray(arr, 5) << endl;

    // Q5 Search in a sorted-rotated array.
    // cout << "The Position is: " << searchWithPivot(arr, 5, 1) << endl;

    // Q6 Find Square Root using Binary Search.
    int n = 27;
    cout << "The Square Root of " << n << " is: " << sqroot(n) << endl;
    cout << "The Exact Sqr Root of " << n << " is: " << sqrootDec(n) << endl;


    return 0;
}