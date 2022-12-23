#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

void revCharArr(char *ch, int size){
    int s = 0, e = size-1;
    while(s < e){
        swap(ch[s++], ch[e--]);
    }
}

int getLen(char *ch){
    int count = 0;
    for(int i = 0; ch[i] != '\0'; i++){
        count++; 
    }
    return count;
}

bool isPalindrome(char *ch, int size){
    int s = 0, e = size - 1;
    while(s < e){
        if(toLowerCase(ch[s]) == toLowerCase(ch[e])){
            s++;
            e--;
        } else {
            return false;
        }
    }
    return true;
}

bool validChar(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    return 0;
}

bool checkPalindrome(string s){
    int st = 0, e = s.length() - 1;
    while(st < e){
        if(s[st] == s[e]){
            st++;
            e--;
        } else {
            return 0;
        }
    }
    return 1;
}

string revStr(string st){
    int s = 0, e = st.length() - 1;
    while(s < e){
        swap(st[s++], st[e--]);
    }
    return st;
}

char getMaxOccChar(string st){
    int alpha[26] {0};
    for(int i = 0; i < st.length(); i++){
        int tempInd = 0;
        if(st[i] >= 'a' && st[i] <= 'z'){
            tempInd = st[i] - 'a';
        } else {
            tempInd = st[i] - 'A';
        }
        alpha[tempInd]++;
    }

    int maxi = -1, ind = -1;
    for(int i = 0; i < 26; i++){
        if(maxi < alpha[i]){
            maxi = alpha[i];
            ind = i;
        }
    }
    return 'a'+ind;
}

int main(){
    // Strings is a 1D Character Array

    // Character array
    // char name[20];
    // cout << "Enter the name: ";
    // cin >> name;
    // cout << "Your name is: " << name << endl;
    // cout << "The Length of name is: " << getLen(name) << endl;
    // revCharArr(name, getLen(name));
    // cout << "Your name is: " << name << endl;
    // cout << "The Entered String is a Palindrome: " << isPalindrome(name, getLen(name)) << endl;

    // remove waste characters from the string and check for plaindrome b4 it turn into lowercase
    // string s = "12sdgwergew5er!@$56sg";
    // string temp = "";
    // for(int i = 0; i < s.length(); i++){
    //     if(validChar(s[i])){
    //         temp.push_back(s[i]);
    //     }
    // }

    // for(int i = 0; i < temp.length(); i++){
    //     temp[i] = toLowerCase(temp[i]);
    // }

    // cout << "Before removing chars: " << s << endl;
    // cout << "After removing chars: " << temp << endl;

    // cout << "Whether 's' is a Plaindrome ? : " << checkPalindrome(temp);

    // Q1. Reverse the words in a string.
    // string st = "My name is Shri";
    // string new1 = "";
    // string temp = "";

    // for(int i = 0; i <= st.length(); i++){
    //     temp.push_back(st[i]);
    //     if(st[i] == ' ' || st[i] == '\0'){
    //         temp.pop_back();
    //         temp = revStr(temp);
    //         for(int j = 0; j < temp.length(); j++){
    //             new1.push_back(temp[j]);
    //         }
    //         new1.push_back(' ');
    //         temp = "";
    //     }
    // }
    // cout << st << endl;
    // cout << new1 << endl;

    // Q2. Return max characters occurring in a string.
    // string s = "malayalam";
    // cout << getMaxOccChar(s) << endl;

    // Q3. Remove all occurences of a substring.
    // string s = "thisisshit";
    // string part = "is";
    // while(s.length() != 0 && s.find(part) < s.length()){
    //     s.erase(s.find(part), part.length());
    // }
    // cout << s << endl;

    // Q4. Permutation in String.

    return 0;
}