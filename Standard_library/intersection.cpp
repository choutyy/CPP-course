// HW7
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Intersection(vector<int>& a, vector<int>& b) {
    vector<int> result; 
    // sort vector a and b firstly
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    // use set_intersection 
    set_intersection(begin(a), end(a), begin(b), end(b), back_inserter(result));
    return result;
}

int main() {
    vector<int> a = {3, 9, 1, 7, 2, 6};
    vector<int> b = {1, 3, 5, 7};
    vector<int> c = {2, 4, 6, 8, 0, 3, 9};
    
    for (auto v : Intersection(a, b)) {
        cout << v << " ";
    }
    cout << endl;
    
    for (auto v : Intersection(a, c)) {
        cout << v << " ";
    }
    cout << endl;
    
}
