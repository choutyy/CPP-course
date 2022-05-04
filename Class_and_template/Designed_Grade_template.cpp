//HW5-5
#include<iostream>
using namespace std;

template<typename T>
class Grade{
public:
    Grade<T>(T v){ val = v; }
    Grade operator+(Grade& g){ return val + g.val; }
    T Get() const { return val; }
private: 
    T val;
};

template<typename T>
ostream& operator<<(ostream& os, const Grade<T>& g){
    return os << g.Get();
}

int main(){
    Grade<int> a1 = 37.45, b1 = 43.56;
    Grade<double> a2 = 37.45, b2 = 43.56; 
    cout << "1) " << (a1 + b1)  << endl 
         << "2) " << (a2 + b2)  << endl;
    return 0; 
}