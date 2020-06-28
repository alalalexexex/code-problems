#include <iostream>
#include <set>

using namespace std;

int main(){
  int last; 
  cin >> last;

  // naive solution
  // iterate every year until find a year with distinct values 
  
//  while(true) {
//    last++;
//    int curr = last;
//    bool found = true;
//    set<int> num_set; 
//    while(curr > 0) {
//      int num = curr % 10;
//      
//      if(num_set.find(num) != num_set.end()){
//        found = false;
//        break;
//      }
//
//      num_set.insert(num);
//      
//      curr /= 10; 
//    }
//
//    if(found) {
//      cout << last << '\n';
//      break;
//    }
//  }
//
  
  // Better solution -> we can assume the year is always four digits
  
  while(true) {
    ++last;
    int curr = last;

    int a = curr % 10;
    int b = (curr/10) % 10;
    int c = (curr/100) % 10;
    int d = (curr/1000) % 10;

    if(a != b && b != c && a != c && a != d && d != b && c != d) break;
  }

  cout << last << '\n';
  
  return 0;
}
