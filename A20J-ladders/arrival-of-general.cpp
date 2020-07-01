#include <iostream>
#include <climits>

using namespace std;

int main() {
  int num_people;
  cin >> num_people;

  int max = INT_MIN;
  int max_i = 0;
  int min = INT_MAX;
  int min_i = 0;

  int result = 0;

  for(int i = 1; i <= num_people; ++i) {
    int height;
    cin >> height;

    if(height > max){
      max = height;
      max_i = i;
    }

    if(height <= min){
      min = height;
      min_i = i;
    }
    
  }

  if(min_i < max_i) result--;

  result += (num_people - min_i);
  result += (max_i - 1);

  cout << result << endl;

  return 0;
}
