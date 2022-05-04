// HW5-2
#include <iostream>
using namespace std;

class Intarray{
public:
    Intarray(){ //歸零
        for(int i = 0; i < 5; i++){
            data_[i] = 0;
        }
    }
    int& operator[](int i){ 
        return data_[i]; //參考物件裡面的成員，修改成員data_的值
    }; 
    
    int operator[](int i) const{       
        return data_[i]; //複製物件裡面的成員，回傳一個複製品data_
    }; 
    Intarray& Fill(int i){
        for(int j = 0; j < 5; j++){
            data_[j] = i;
        }
        return (*this);
    }    
private: 
    int data_[5]; 
};

ostream& operator<<(ostream& os, const Intarray& v){
    return os << "[" << v[0] << ", " << v[1] << ", " << v[2] << ", " << v[3] << ", " << v[4]<< "]"; 
}

int main(){
    Intarray a;     
    cout << "a : " << a << endl; // call operator<<(ostream, const Intarray&)
    a.Fill(5); //call a.Fill(int i) or Fill(const Intarray&, int) 
    cout << "a : " << a << endl; 
    a[3] = 7; // call a.operator[](3) 
    cout << "a : " << a << endl; 
    a.Fill(0); 
    cout << "a : " << a << endl; 
    return 0; 
}