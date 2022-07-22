#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSmallest(vector <int> list) {
   // Your Code is Here ... Hope you Enjoy
    return *min_element(list.begin(), list.end());;
}

int main() {

    cout << findSmallest({3,5,2}) << endl;
    cout << findSmallest({7,4,6,8}) << endl;  
    cout << findSmallest({17,21,15,36,96}) << endl;
    cout << findSmallest({3,9,13,10,5,3,9,5}) << endl;

    return 0;
}