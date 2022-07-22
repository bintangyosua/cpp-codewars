#include <iostream>
#include <string>
using namespace std;

std::string number_to_string(int num) {
    // your code here
    return  "\"" + to_string(num) + "\"";
}

int main() {
    cout << number_to_string(1+2) << endl;
    cout << number_to_string(67) << endl;
    cout << number_to_string(-5) << endl;
    return 0;
}