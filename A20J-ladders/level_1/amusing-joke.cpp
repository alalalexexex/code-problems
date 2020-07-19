#include <iostream>
#include <map>

using namespace std;

int main() {
  string first, last, letters;
  cin >> first >> last >> letters;
  map<char, int> my_map;

  for(int i = 0; i < first.length(); ++i) {
    my_map[first[i]] += 1;
  }
  for(int i = 0; i < last.length(); ++i) {
    my_map[last[i]] += 1;
  }

  for(int i = 0; i < letters.length(); ++i) {
    if(my_map[letters[i]])
     my_map[letters[i]] -= 1;
    else{
      cout << "NO"; // letter doesn't exist
      return 0;
    }
  }

  for(int i = 0; i < first.length(); ++i) {
    if(my_map[first[i]] > 0) {
      cout << "NO";
      return 0;
    }
  }
  for(int i = 0; i < last.length(); ++i) {
    if(my_map[last[i]] > 0) {
      cout << "NO";
      return 0;
    }
  }
  
  cout << "YES";
  return 0;
}
