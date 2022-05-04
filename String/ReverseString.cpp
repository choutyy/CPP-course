//HW6-2
#include <iostream>
#include <string>
using namespace std;

void ReverseString(string&); 

int main() {
    string words[3] = {"Hello", "c++", "world!"};
    for (string& word : words) {
        cout << "Before: " << word << endl;
        ReverseString(word);
        cout << "After : " << word << endl;
    }
}

void ReverseString(string& str){
    int length = str.length();
    for (int i = 0; i < length/2; i++){
        swap(str[i], str[length - i - 1]);
    }
}
