#include <iostream>
#include <stdio.h>

using namespace std;

bool isPrime(int num) {
  if(num == 2 || num == 3) return true;

  if(num % 2 == 0) return false;

  for(int i = 3; i < num; i++){
    if(num % i == 0) return false;
  }

  return true;
}

int main() {
  int first, second; 

  cin >> first >> second;

  first++;

  while(first <= second) {
    if(isPrime(first) && first == second) {
      cout << "YES";
      return 0;
    }else if(isPrime(first)) {
      cout << "NO";
      return 0;
    }

    first++;
  }
  
  cout << "NO"; 

  return 0;
}
