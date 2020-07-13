#include <iostream>

using namespace std;

int main() {
  int num_entries; 
  int first;
  cin >> num_entries >> first;

  num_entries -= 1;

  int high = first;
  int low = first;

  int count = 0;

  while(num_entries--){
    int curr;
    cin >> curr;

    if(curr > high) {
      high = curr;
      count++;
    }else if(curr < low){
      low = curr;
      count++;
    }
  }

  cout << count;
  return 0;
}
