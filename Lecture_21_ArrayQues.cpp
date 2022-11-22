#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> v){
    for(auto i: v){
        cout << i << " ";
    }
    cout << endl;
}

void rotateByK(vector <int> v, int k){
    int n = v.size();
    printArr(v);
    vector <int> temp(n);
    for(int i = 0; i < n; i++){
        temp[(i+k)%n] = v[i];
        // formula for rotating the array in a cyclic way
    }
    printArr(temp);
}

bool sortedAndRotated(vector<int> v){
    int n = v.size(), count = 0;
    printArr(v);
    for(int i = 1; i < n; i++){
        if(v[i-1] > v[i]){
            count++;
        }
    }

    if(v[n-1] > v[0]) count++;

    return count <= 1;

}

int main(){

    // Q1 Rotate Array

    // vector<int> v;
    // v.push_back(1);
    // v.push_back(7);
    // v.push_back(9);
    // v.push_back(11);
    // 9,11,1,7 for k = 2....... whenever we use % operation the solution lies between 0-(n-1)
    // rotateByK(v, 2);

    // Q2 Check if the array is sorted and rotated

    // vector <int> v;
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    
    // if(sortedAndRotated(v)){
    //     cout << "Yes it is sorted and rotated !!" << endl;
    // } else {
    //     cout << "No it is not a rotated one !!";
    // }

    // Q3 Given 2 arrays sum them and store in another array.
    
    return 0;
}