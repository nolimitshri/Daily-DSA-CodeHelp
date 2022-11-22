#include<iostream>
#include<vector>
using namespace std;

void printArr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int *arr, int size){
    for(int i = 0; i < size; i += 2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
    cout << "The Swapped Version is: " << endl;
    printArr(arr, 10);
}

int uniqueElement(int *arr, int size){  
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int duplicateElement(int *arr, int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans^arr[i];
    }
    for(int i = 0; i < size; i++){
        ans = ans^i;
    }
    return ans;
}

void frequencyArr(int *arr, int size){
    int brr[size];
    for(int i = 0; i < size - 1; i++){
        int count = 1;
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
                brr[j] = -1;
            }
        }
        if(brr[i] != -1){
            brr[i] = count;
        }
    }
}

vector<int> intersectionElements1(int *arr, int as, int *brr, int bs){
    vector<int> ans;
    for(int i = 0; i < as; i++){
        int element = arr[i];
        for(int j = 0; j < bs; j++){
            if(element == brr[j]){
                ans.push_back(element);
                brr[j] = -1;
                break;
            }
        }
    }
    return ans;
}

vector<int> intersectionElements2(int *arr, int as, int *brr, int bs){
    vector<int> ans;
    int i = 0, j = 0;
    while(i < as && j < bs){
        if(arr[i] == brr[j]){
            ans.push_back(arr[i]);
            j++;
            i++;
        } else if(arr[i] < brr[j]){
            i++;
        } else {
            j++;
        }
    }
    return ans;
}

vector<int> pairSum(int *arr, int size, int s){
    vector<int> ans;
    for(int i = 0; i < size-1; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] + arr[j] == s){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    return ans;
}

void sort01(int *arr, int size){
    printArr(arr,size);
    int i = 0, j = size-1;
    while(i <= j){
        if(arr[i] == 0){
            i++;
        } else if(arr[j] == 1){
            j--;
        } else if(arr[i] > arr[j]){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    printArr(arr,size);
}

void sort012(int *arr, int size){
    int s = 0, m = 0, h = size-1;
    while(m <= h){
        switch(arr[m]){
            case 0:
                swap(arr[s++], arr[m++]);
                break;
            case 1: 
                m++;
                break;
            case 2:
                swap(arr[m], arr[h--]);
                break;
        }
    }
    printArr(arr, size);
}

int main(){
    // Q1 Swap Alternate
    // int arr[10] {1,2,3,4,5,6,7,8,9,10};
    // cout << "The Original Array is: " << endl;
    // printArr(arr, 10);
    // swapAlternate(arr, 10);

    // Q2 Find Unique Element
    // int arr[9] = {11,11,12,12,22,33,33,22,13};
    // cout << "The Unique Element in the array is: " << uniqueElement(arr, 9) << endl;

    // Q3 Find no of unique occurences


    // Q4 Find Duplicates in an array
    // int arr[6] {1,2,3,4,5,5};
    // cout << "The duplicate element in the array is: " << duplicateElement(arr, 6) << endl;

    // Q5 Find the frequency of elements in the array
    // int arr[9] {1,2,3,4,5,5,4,3,2};
    // frequencyArr(arr, 9);

    // Q6 Intersection of two arrays
    // int arr[4] {1,2,3,4};
    // int brr[3] {3,4,5};
    // cout << "The Intersection is: " << endl;
    // vector<int> final = intersectionElements2(arr,4,brr,3);
    // for(auto i: final){
    //     cout << i << " ";
    // }
    // cout << endl;

    // Q7 Pair Sum
    // int arr[5] {0,1,2,3,4};
    // cout << "The Pair Sum is: " << endl;
    // vector<int> final = pairSum(arr, 5, 4);
    // for(auto i: final){
    //     cout << i << " ";
    // }
    // cout << endl;

    // Q8 Sort 0 1 
    // int arr[10]{1,1,1,0,1,0,0,0,0,1};
    // sort01(arr, 10);

    // Q9 Sort 0, 1, 2
    int arr[6] = {0, 1, 2, 0, 1, 2};
    printArr(arr,6);
    sort012(arr, 6);



    return 0;
}