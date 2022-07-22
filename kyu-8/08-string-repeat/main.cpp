#include <iostream>
#include <string>
using namespace std;

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string strProp;
  for (int i = 0; i < repeat; i++) {
    strProp += str;
  }
  return strProp;
}   

int main() {
    cout << repeat_str(3, "*") << endl;
    cout << repeat_str(5, "#") << endl;
    cout << repeat_str(2, "ha ") << endl;
    cout << repeat_str(5, ">") << endl;
    cout << repeat_str(10, "!") << endl;
    cout << repeat_str(3, "hello ") << endl;
    cout << repeat_str(3, "$") << endl;
    cout << repeat_str(5, "a") << endl;
    cout << repeat_str(6, "A") << endl;
    cout << repeat_str(7, "aA") << endl;
    cout << repeat_str(3, "") << endl;
    cout << repeat_str(0, "null") << endl;
    cout << repeat_str(0, "") << endl;
    return 0;
}