#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  string input;
  cin >> input;

  int code = input[0];
  
  char ans = code <= 90 ? input[0] : (char) (code - 32);

  input[0] = (char) ans;

  cout << input;
  
  return 0;
}
