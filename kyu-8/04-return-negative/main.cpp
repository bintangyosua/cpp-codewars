#include <iostream>
using namespace std;

int makeNegative(int num){
    num > 0 ? num *= -1 : 0;
    return num;
}

int main() {

    cout << makeNegative(42) << endl; // Equals(-42))

    return 0;
}