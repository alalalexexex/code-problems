// Code Forces Queue at the School B

#include <iostream> 
#include <vector>

// A2OJ Queue at the School problem 

int main(){
  int num_ppl, time; 
  std::string ref;
  std::cin >> num_ppl >> time >> ref; 

  while(time--) {
    for(int i = 1; i < num_ppl; ++i) {
      if(ref[i] == 'G' && ref[i-1] == 'B') {
        ref[i-1] = 'G';
        ref[i] = 'B'; 
        ++i; // don't reference the same combo twice
      }
    }
  }

  std::cout << ref << '\n'; 

  return 0; 
}
