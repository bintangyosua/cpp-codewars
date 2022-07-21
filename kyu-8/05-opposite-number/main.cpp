#include <iostream>
using namespace std;

float opposite(float number) {
    return number < 0 ? -number : number;
}

int main() {
    cout << opposite(-100); // Equals(-1);
    return 0;
}