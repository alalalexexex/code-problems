#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  string input;
  vector<int> sorted;

  int end_one = 0;

  cin >> input;
  for(int i = 0; i < input.length(); i++) {
     if(input[i] == '+') continue;
     int curr = input[i] - 48;

     if(curr == 1){
       end_one += 1;
       sorted.insert(sorted.begin(), curr);
     }
     else if(curr == 3) sorted.insert(sorted.end(), curr);
     else {
        sorted.insert(sorted.begin() + end_one, curr);
     }
  }

  for(int i = 0; i < sorted.size(); ++i){
     if(i != sorted.size() - 1) cout << sorted[i] << '+';
     else cout << sorted[i];
  }

  return 0;
}
