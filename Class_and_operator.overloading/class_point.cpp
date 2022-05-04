#include <iostream>
#include <cmath>

using namespace std;

class Point{
    public:
    double x;
    double y;
    double Length();
    Point Normalize();
}; 

void Normalize(Point&);

int main(){
    Point p = {3,5}, q = {6,4};
    Normalize (p);
    cout << "p: (" << p.x << ", " << p.y <<"), " << p.Length() << endl;
    q.Normalize();
    cout << "q: (" << q.x << ", " << q.y <<"), " << q.Length() << endl;
    return 0;
}

void Normalize(Point& p){
    double Length = p.Length();
    p.x = p.x / Length;
    p.y = p.y / Length; 
}

double Point::Length(){
        return sqrt(x*x + y*y);
}

Point Point::Normalize(){
       double Length = sqrt(x*x + y*y); // Length is a local variable used in Point::Normalize
       return {x = x/Length, y = y/Length}; 
}    