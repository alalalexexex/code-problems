#include <iostream>

using namespace std;

int main() {
  int num_drinks;
  cin >> num_drinks;
  double sum = 0;

  for(int i = 0; i < num_drinks; ++i){
    double perc;

    cin >> perc;

    double frac = perc / 100;
    sum += frac;
  }

  double result = (sum / num_drinks) * 100;
  cout << result;

  return 0;
}
