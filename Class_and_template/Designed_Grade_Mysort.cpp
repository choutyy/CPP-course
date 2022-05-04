// HW5-4 
#include<iostream>
using namespace std; 

class Grade{
    friend ostream& operator<<(ostream& os, Grade& g){
        return os << g.val;
    }
public:
    Grade(int v){
        val = v;
    } 
    bool operator>(Grade& g){
        return (val > g.val);
    }
private: 
    int val;
};

template<typename T>
void Mysort(T& a, T& b){
    if (a > b){
        T t = a; 
          a = b;
          b = t;
    }
}

int main(){
    int a1 = 3, b1 = 5; 
    double a2 = 7, b2 = 4;
    Grade a3 = 3, b3 = 5; 
    Grade a4 = 7, b4 = 4;
    
    Mysort(a1, b1);
    Mysort(a2, b2);
    Mysort(a3, b3);
    Mysort(a4, b4);
    
    cout << "(a1, b1): (" << a1 << ", " << b1 << ")" << endl 
         << "(a2, b2): (" << a2 << ", " << b2 << ")" << endl 
         << "(a3, b3): (" << a3 << ", " << b3 << ")" << endl 
         << "(a4, b4): (" << a4 << ", " << b4 << ")" << endl; 
    
    return 0; 
}