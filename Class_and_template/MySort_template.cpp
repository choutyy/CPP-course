// HW5-3
#include <iostream>
using namespace std; 

template<typename T, int N>
void Mysort(T (&a)[N]){
     for(int i=0; i<N; i++){ 
         for(int j=i+1; j<N; j++) {     
           if(a[i]>a[j])
           {
               T temp = a[i];
               a[i] = a[j];
               a[j]= temp;               
           }
         }
    }
}

template<typename T, int N, typename = enable_if_t<!is_same<T, const char>::value>>
ostream& operator<<(ostream& os, T(&a)[N]){ //為什麼這邊的T(&a)[N] 不能加const?
    os << "[" << a[0];
    for (int i = 1; i < N; i++){
        os << ", " << a[i];
    }
    return os << "]";
}

int main(){
    int a[3] = {7, 3, 5};
    int b[5] = {7, 3, 5, 9, 2};
    double c[5] = {3.1, 7.5, 4.0, 9.7, 2.5};
    
    Mysort(a); // 就算沒有寫Mysort<int, 3>(a) 也會從引數a自動去推斷函式模板所需要的參數
    Mysort(b);
    Mysort(c);
       
    cout << "a: " << a << endl
         << "b: " << b << endl
         << "c: " << c << endl;

    return 0; 
}