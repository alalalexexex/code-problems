#include <iostream>
#include <string.h>

using namespace std;

// Word codeforces

int main(){
  string input; 
  cin >> input;

  int upper = 0;
  int lower = 0;

  for(int i = 0; i < input.length(); ++i){
    int achar = input[i];

    if(achar <= 90) upper+=1;
    else lower+=1;
  }

  for(int i = 0; i < input.length(); ++i){
    input[i] = upper > lower ? toupper(input[i]) : tolower(input[i]);
  }

  cout << input << '\n';

  return 0; 
}
