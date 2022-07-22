#include <iostream>
#include <string>
#include <array>
using namespace std ; 

string reverseString (string str ) {
  // your Code is Here ... enjoy !!!
  string strProp;
  for (int i = str.length() - 1; i >= 0; i--) {
     strProp += str[i];
  }
  return strProp;
}

int main() {
    cout << reverseString("okihsaS");
    return 0;
}