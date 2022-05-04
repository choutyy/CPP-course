// HW5-1
#include <iostream>
using namespace std;

class IntArray{
public:
    IntArray(){ //歸零
        for(int i = 0; i < 5; i++){
            data_[i] = 0;
        }
    }
    int& operator[](int i){ 
        return data_[i % 5]; //參考物件裡面的成員，修改成員data_的值
    }; 
    
    int operator[](int i) const{       
        return data_[i % 5]; //複製物件裡面的成員，回傳一個複製品data_
    }; 
    
private: 
    int data_[5]; 
};

ostream& operator<<(ostream& os, const IntArray& v){
    return os << "[" << v[0] << "," << v[1] << "," << v[2] << "," << v[3] << "," << v[4]<< "]"; 
}

int main(){
    IntArray a;     
    a[2] = 7; // a.operator[](2), a.data_ = 7,
    a[3] = 5;
    a[4] = 9;
    const IntArray b = a;
    cout << "a[7]: " << a[7] << endl   // a[7]  = a[2] = 7
         << "a[18]: " << a[18] << endl  // a[18] = a[3] = 5
         << "a[25]: " << a[25] << endl  // a[25] = a[0] = 0
         << "a[29]: " << b[29] << endl; // a[29] = a[4] = 9
    return 0; 
}