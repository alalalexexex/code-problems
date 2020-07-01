#include <iostream>
#include <string.h>

using namespace std;

// stoi is a function that converts string to int
// can convert binary strings using last parameter -> 2

//void print_binary(unsigned long long num, int length) {
//  char num_print[length];
//
//  num_print[length] = '\0'; 
//
//  int i = length - 1;
//
//  while(num >= 1) {
//    if(num % 2 == 0) num_print[i] = '0';
//    else num_print[i] = '1';
//    
//    num /= 2;
//    --i;
//  }
//
//  for(int j = i; j >= 0; j--) num_print[j] = '0';
//
//  cout << num_print;
//}
//
//int main() {
//  string one, two;
//  cin >> one >> two;
//
//  unsigned long long first = stoi(one, 0, 2);
//  unsigned long long second = stoi(two, 0, 2);
//
//  unsigned long long result = first ^ second; // xor
//
//  print_binary(result, one.length());
//  
//  return 0;
//}
//

int main() {
  string one, two;
  cin >> one >> two;

  for(int i = 0; i < one.length(); ++i) {
    if(one[i] != two[i]) cout << '1';
    else cout << '0';
  }

  return 0;
}
