#include <iostream>
#include <set>

using namespace std;

int main() {
  set<char> my_set;

  string input;
  cin >> input;
  int i = 0;
  int count = 0;

  while(i < input.length()) {
    char curr = input[i];
    if(my_set.count(curr) == 0) count++;
    my_set.insert(curr);
    i++;
  }

  if(count % 2 == 0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";

  return 0;
}
