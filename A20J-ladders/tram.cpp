#include <iostream>

using namespace std;

int main() {
  int stops;
  cin >> stops;
  int min = 0;
  int current = 0;

  while(stops--) {
    int enter, leave;
    cin >> leave >> enter;
  
    current -= leave;
    current += enter;
    
    if(current > min) min = current;
  }

  cout << min;

  return 0;
}
