#include<iostream>
using namespace std;

int reverseInt(int num){
    int rev = 0;
    while(num != 0){
        int lastDigit = num % 10;
        rev = rev*10 + lastDigit;
        num /= 10;
    }
    return rev;
}

bool isPowerOf2(int num){

}

int main(){
    int num{202314};
    cout << "The Reverse is: " << reverseInt(num) << endl;

    // Power of 2
    // if n can be expressed as power of 2 then return true else false
    return 0;
}