//HW6-1
#include <iostream>
#include <iomanip>
using namespace std;

class Timer {
public:
    Timer(); 
    void Tick() {
        counter++;
    }
    void Reset() {
        counter = 1;
    }
    int counter;
};

int main() {
    Timer timer; 
    for (int i = 1; i <= 8; i++) {
        if (i == 4) {
            timer.Reset();
        }
        cout << timer.counter << endl;
        timer.Tick();
    }
    return 0;
}

Timer::Timer(){
    counter = 1;
}