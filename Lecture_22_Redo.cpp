#include<iostream>
using namespace std;

string revString(string s){
    int st = 0, e = s.length() - 1;
    while(st < e){
        swap(s[st++],s[e--]);
    }
    return s;
}

string reverseWordsInString(string original){
    string temp = "", new1 = "";

    for(int i = 0; i <= original.length(); i++){
        temp.push_back(original[i]);
        if(original[i] == ' ' || original[i] == '\0'){
            temp.pop_back();
            temp = revString(temp);
            for(int j = 0; j < temp.length(); j++){
                new1.push_back(temp[j]);
            }
            new1.push_back(' ');
            temp = "";
        }
        cout << new1 << endl;
    }
    return new1;
}

char getMaxOccuringCharacter(string s){
    int arr[26] {0}, alphaIndex;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            alphaIndex = s[i] - 'a';
        } else if(s[i] >= 'A' && s[i] <= 'Z'){
            alphaIndex = s[i] - 'A';
        }
        arr[alphaIndex]++;
    }
    int result = -1, index = -1;
    for(int i = 0; i < 26; i++){
        if(result < arr[i]){
            result = arr[i];
            index = i;
        }
    }
    char c = index + 'a';
    return c;
}

string replaceSpaces(string S){
    string temp = "";
    for(int i = 0; i < S.length(); i++){
        if(S[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        } else {
            temp.push_back(S[i]);
        }
    }
    return temp;
}

string removeSubstring(string S, string part){
    while(S.length() > 0 && S.find(part) < S.length()){
        S.erase(S.find(part), part.length());
    }
    return S;
}

bool checkIfArraysEqual(int *arr1, int *arr2){
    for(int i = 0; i < 26; i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}

bool checkPermutation(string main, string b){
    int arr[26] {0};
    for(int i = 0; i < b.length(); i++){
        int alphaIndex = b[i] - 'a';
        arr[alphaIndex]++;
    }

    int i = 0, windowSize = b.length(), mainStr[26] {0};
    
    while(i < windowSize && i < main.length()){
        int alphaIndex = main[i] - 'a';
        mainStr[alphaIndex]++;
        i++;
    }
    
    if(checkIfArraysEqual(arr, mainStr)){
        return 1;
    }
    
    while(i < main.length()){
        int alphaIndex = main[i] - 'a';
        mainStr[alphaIndex]++;
        alphaIndex = main[i-windowSize] - 'a';
        mainStr[alphaIndex]--;

        i++;

        if(checkIfArraysEqual){
            return 1;
        }
    }
    return 0;

}

string removeAdjDuplicates(string s){
    int i = 0, j = i + 1;
    while(i < s.length() && j < s.length()){
        if(s[i] == s[j]){
            s.erase(i,2);
            i = 0;
            j = i+1;
        } else {
            i++;    
            j++;
        }
    }
    return s;
}

void compressedStr(string s){
    int arr[26] {0};
    char ch1[100];
    for(int i = 0; i < s.length(); i++){
        int alphaIndex = s[i] - 'a';
        arr[alphaIndex]++;
    }
    int j = 0;
    for(int i = 0; i < 26; i++){
        if(arr[i] > 0 && arr[i] > 1){
            char ch = i + 'a';
            ch1[j++] = ch;
            ch1[j++] = 48 + arr[i];
        } else if(arr[i] == 1){
            char ch = i + 'a';
            ch1[j++] = ch;
        }
    }
    for(int i = 0; i < 7; i++){
        cout << ch1[i] << " ";
    }
    cout << endl;
}

int main(){
    // string str = "This is the string to be reversed.";
    // cout << reverseWordsInString(str);

    // Q. Return Maximum Character occuring in a character.
    // string ch = "asnjfwiunqvinviqnerijna";
    // cout << getMaxOccuringCharacter(ch) << endl;

    // Q. Remove spaces and replace it with '@40'.
    // string rem = "THis is going to be replaced.";
    // cout << replaceSpaces(rem) << endl;

    // Q. Remove All Occurences of a substring.
    // string A = "daabcbaabcbc", B = "abc";
    // cout << removeSubstring(A, B) << endl;

    // Q. Permutation in String.
    // string s1 = "ab", s2 = "eidbaooo";
    // cout << "Exists? : " << checkPermutation(s2, s1) << endl;

    // Q. Remove all adjacent duplicates in a string. !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // string n = "geeksforgeeg";
    // cout << removeAdjDuplicates(n) << endl;
    
    // Q. String Compression.
    string s = "aabbbcdd";
    compressedStr(s);
    return 0;
}