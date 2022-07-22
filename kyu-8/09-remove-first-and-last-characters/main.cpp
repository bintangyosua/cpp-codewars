#include <iostream>
#include <string>
using namespace std;

string sliceString (string str ) {
  // your code is here ... Hope You Enjoy !!
  str.erase(0, 1); str.erase(str.length() - 1, 1); return str;
}

int main() {
    cout << sliceString("tuna") << endl;
    cout << sliceString("rats") << endl;
    cout << sliceString("code") << endl;

    cout << sliceString("country") << endl;
    cout << sliceString("place") << endl;
    cout << sliceString("translation") << endl;
    
    return 0;
}