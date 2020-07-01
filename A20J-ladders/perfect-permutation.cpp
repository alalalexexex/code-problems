#include <iostream>

using namespace std;

int main() {
  int n; 
  cin >> n;

  if(n % 2 != 0){

    cout << -1;

  }
  else{

    for(int i = 1; i <= n; ++i){

      int j = i % 2 == 0 ? i - 1 : i + 1;

      cout << j << ' ';

    }

  }

  return 0;
}
