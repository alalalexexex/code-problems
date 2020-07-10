#include <iostream>

using namespace std;

int main() {
  int num_cupboards;

  cin >> num_cupboards;
  
  int count = num_cupboards;
  int left_sum = 0;
  int right_sum = 0;

  while(count--){
    int left, right;
    cin >> left >> right;

    left_sum += left;
    right_sum += right;
  }

  int result = left_sum > (num_cupboards)/2 ? num_cupboards - left_sum : left_sum;
  result += right_sum > (num_cupboards)/2 ? num_cupboards - right_sum : right_sum;

  cout << result;

  return 0;
}
