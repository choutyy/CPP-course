#include <iostream>
#include <string>
using namespace std;

int Count_digits(int a){
    string temp;
    temp = to_string(a);
    return temp.size();
    }

void SplitInteger(int a){
    int digit = Count_digits(a);
    for(int size = 1; size<=digit; size++){
        cout << a%10 << " "; 
        a = a/10;
    } 
    cout << endl;    
    }
    
int main(){  
    SplitInteger(1234);
    SplitInteger(567890);
    return 0;
}


