#include <stdio.h>

class EndOutput{
    public:
};

class OutputStream{
    public: 
     OutputStream& operator<<(const char* str){
         printf("%s", str);
         return (*this); // return itself
     } 
     OutputStream& operator<<(int i){
         printf("%d", i);
         return (*this); // return itself
     } 
     OutputStream& operator<<(double i){
         printf("%f", i);
         return (*this); // return itself
     } 
     void operator<<(EndOutput& myEndl){ //myCout.operator<<(EndOutput& myEndl)
         printf("\n");
     } 
};

OutputStream myCout; 
EndOutput myEndl;

int main(){
    myCout << "3 + 5 == " << 3 + 5 << myEndl;// "<<" is a operator , operator<<(myCout, "3 + 5 ="), or myCout.operator<<("3 + 5 = ")
    myCout << "3 / 5. == " << 3 / 5. << myEndl;// "<<" is a operator , operator<<(myCout, "3 + 5 ="), or myCout.operator<<("3 + 5 = ")
    return 0;
}


