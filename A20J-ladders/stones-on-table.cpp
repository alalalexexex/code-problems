#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int num_stones;
  string stones;

  cin >> num_stones >> stones;

  int num_same = 0;

  for(int i = 1; i < num_stones; ++i) {
    if(stones[i] == stones[i - 1]) num_same++;
  }

  cout << num_same;

  return 0;
}
