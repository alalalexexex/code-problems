// Borze code forces B
#include <iostream>

using namespace std;

int main() {
  string input; 
  cin >> input;
  char output[input.length()];

  int j = 0;

  for (int i = 0; i < input.length(); ++i) {
    char letter = input[i];
    char next = i + 1 == input.length() ? 'n'  : input[i+1];

    if(letter == '-' && next == '.'){
      output[j] = '1';
      ++i;
    }
    else if(letter == '-' && next == '-'){
      output[j] = '2';
      ++i;
    }
    else output[j] = '0';
    ++j;
  }
  
  output[j] = '\0';

  cout << output << endl;
  return 0;
}
