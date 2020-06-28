#include <iostream>
#include <vector>

using namespace std;

int toggle(int curr) {
  if(curr == 0) return 1;
  return 0;
}

int main() {
  vector<vector<int>> initial{ {1, 1, 1}, {1, 1, 1}, {1, 1, 1} };

  for(int i = 0; i < 3; ++i) {
    for(int j = 0; j < 3; ++j) {
      int actions;
      cin >> actions;

      if(actions % 2 != 0){
        initial[i][j] = toggle(initial[i][j]);
        if(i - 1 > -1) initial[i-1][j] = toggle(initial[i-1][j]);
        if(i + 1 < 3) initial[i+1][j] = toggle(initial[i+1][j]);
        if(j - 1 > -1) initial[i][j-1] = toggle(initial[i][j-1]);
        if(j + 1 < 3) initial[i][j+1] = toggle(initial[i][j+1]);
      }
    }
  }

  for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j) {
      cout << initial[i][j];
    }
    cout << '\n';
  }

  return 0;
}
