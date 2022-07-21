#include <iostream>
#include <vector>
#include <array>
using namespace std;

const vector<int>& numeral = {
    
};
int square_sum(const vector<int>& numbers) {
    int squares = 1;
    int zero = 0;
    int num = numbers.size();
    for (int i = 0; i < num; i++) {
        squares = numbers[i] * numbers[i];
        zero += squares;
    }
    return zero;
}

int main() {
    square_sum(numeral);
    return 0;
}