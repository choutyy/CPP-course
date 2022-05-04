#include <iostream>
using namespace std;

class Grade{
   public:
    Grade(int v);
    int value;  
    bool operator>=(int) const;
    bool operator<(int) const;
};

// general function
ostream& operator<<(ostream& os, const Grade& g){
    os << g.value;
    return os;
}

int main(){
    const Grade gs[5] = {80, 60, 59, 90, 40}; // Initialized in format of array, why Grade(int v) is still workable? 
    
    cout << "PASS: ";
    for (const auto& g : gs){
        if (g >= 60){ //Grade.operator>=(int), be careful, g is with "const" type 
            cout << " " << g;   //cout.operator<<(g) or operator<<(cout, g) 
        }
    }
    cout << endl;
    
    cout << "FAIL: ";
    for (const auto& g : gs){
        if (g < 60){
            cout << " " << g;  
        }
    }
    cout << endl;
    
    return 0;   
}

Grade::Grade(int v){
    value = v; 
}

bool Grade::operator>=(int i) const{
    return value >= i;
}

bool Grade::operator<(int i) const{
    return value < i;
}
