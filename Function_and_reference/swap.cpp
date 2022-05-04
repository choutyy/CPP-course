#include <iostream>
using namespace std;
void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

void Mysort(int& a, int& b){
    if(a>b) swap(a,b);    
}

int main(){
    int a = 3, b = 5;
    int c = 9, d = 2;
    Mysort(a,b);
    Mysort(c,d);
    cout << "a = " << a << endl
         << "b = " << b << endl
         << "c = " << c << endl
         << "d = " << d << endl;
    return 0;
}


