#include <iostream>
using namespace std;

void MySwap(int& a, int& b);
void MySwap(double& a, double& b);
void MySwap(float& a, float& b);
  
int main(){  
    int a = 1, b = 2;
    double c = 3.4, d = 5.6;
    float e = 7.8, f = 8.9;
    MySwap(a,b);
    MySwap(c,d);
    MySwap(e,f);
    cout << "a : " << a << endl
         << "b : " << b << endl
         << "c : " << c << endl
         << "d : " << d << endl
         << "e : " << e << endl
         << "f : " << f << endl;
    return 0;
}

void MySwap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

void MySwap(double& a, double& b){
    double t = a;
    a = b;
    b = t;
}

void MySwap(float& a, float& b){
    float t = a;
    a = b;
    b = t;
}

