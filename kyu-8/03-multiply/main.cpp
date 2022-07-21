#include <iostream>
#include <vector>
using namespace std;

int positive_sum (const std::vector<int> arr){
  // Your code here
    int sum=0;
  for (int num:arr)
    (num>=0)?sum+=num:0;
  return sum;
}

int main() {

    cout << positive_sum(std::vector <int> {1,2,3,4,5}) << endl;
    cout << positive_sum(std::vector <int> {1,-2,3,4,5}) << endl;
    cout << positive_sum(std::vector <int> {-1,2,3,4,-5}) << endl;

    return 0;
}