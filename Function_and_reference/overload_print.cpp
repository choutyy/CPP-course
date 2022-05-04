#include <iostream>
using namespace std;

void Print(int a);
void Print(double a);
void Print(char a);
void Print(const char* a); // argument is string
  
int main(){  
    Print("Hello");
    Print('\n');
    Print(4);
    Print('\n');
    Print(8.7);
    return 0;
}

void Print(int a){
    cout << a;
    }
    
void Print(double a){
    cout << a;
    }
    
void Print(char a){
    cout << a;
    }
    
void Print(const char* a){
    cout << a;
    }


