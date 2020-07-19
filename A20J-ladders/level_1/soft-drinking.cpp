#include <iostream>

using namespace std;

int main() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int amount = k * l;
  int slices = c * d;
  
  int small = min((amount)/nl, min(slices, p / np));
  cout << small / n;

  return 0;
  
}
