#include <iostream>

using namespace std;

int main() {
//  double num;
//
//  cin >> num;
//
//  num = (double) (((num / 10) / 10) / 10) / 10;
//
//  cout << num;
//
//  return 0;
//  naive solution -> loop 7 times
//
  int count = 0;
  unsigned long long num;
  cin >> num;

  while(num > 0){
    if(count > 7) break;
    if(num % 10 == 4 || num % 10 == 7) count++;
    num /= 10;
  }

  if(count == 4 || count == 7) cout << "YES";
  else cout << "NO";
}
