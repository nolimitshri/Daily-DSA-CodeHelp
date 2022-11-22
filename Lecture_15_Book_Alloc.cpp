#include<iostream>
using namespace std;

bool isPossibleSol(int *arr, int n, int m, int sol){
    int count = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= sol){ // trying to get minimized result
            pageSum += arr[i];
        } else {
            count++;
            if(count > m || arr[i] > sol){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int *arr, int n, int m){
    int s = 0;
    int e = 0;
    int ans = -1;
    for(int i = 0; i < n; i++){
        e += arr[i];
    }
    while(s <= e){
        int mid = s + (e-s)/2;
        if(isPossibleSol(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int isPossiblePos(int *arr, int n, int k, int pos){
    int count = 1, firstCowPos = arr[0]; // here we have stored our first cow and we will now check for another cow by placing at the stalls and clacluating the distance bw stalls such that it should be maximum possible
    for(int i = 0; i < n; i++){
        if(arr[i] - firstCowPos >= pos){
            count++;
            if(count == k){
                return true;
            }
            firstCowPos = arr[i];
        }
    }
    return false;
}

int allocateCows(int *arr, int n, int k){
    int s = 0, e = 0, ans = 0;
    for(int i = 0; i < n; i++){
        e = max(e, arr[i]);
    }
    while(s <= e){
        int mid = s + (e-s)/2;
        if(isPossiblePos(arr, n , k, mid)){
            ans = mid;
            s = mid + 1; // find largest solution
        } else {
            e = mid - 1;
        }
    }
    return ans;
}


int main(){
    // we need to find minimum in both of the below questions

    // max pages alloted to a student must be minimum
    int book [4] {10,20,30,40};
    cout << "The Minimum Pages allocated: " << allocateBooks(book, 4, 2) << endl;

    // Painter's Partition Algorithm
    // Partition of Boards to be painted in such a way that K painters would paint all the boards
    // in minimum amount of time.

    // Aggressive Cows
    // need to find large distance
    // Need to assign cows to the stalls such that the minimum distance bw 2 cows must be as 
    // large as possible.

    // apply binary search || search space concept if after finding the possible solution
    // you can neglect one portion of the answer

    int stalls [5] {1,2,3,4,6};
    cout << "The Largest Possible Distance: " << allocateCows(stalls, 5, 2);
    return 0;
}