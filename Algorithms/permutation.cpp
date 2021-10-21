#include <algorithm>
#include <iostream>
#include <vector>

int main(){

  std::cout << std::endl;

  std::vector<int> myInts{1, 2, 3};

  std::cout << "All 3! permutions" << "\n\n";
  std::cout << "forwards" << std::endl;  
  do{
    for (auto i: myInts) std::cout << i << " ";
    std::cout << std::endl;
  } while(std::next_permutation(myInts.begin(), myInts.end()));
  
  std::cout << std::endl;
  
  std::reverse(myInts.begin(), myInts.end());
  
  std::cout << "backwards" << std::endl;
  
  do{
    for (auto i: myInts) std::cout << i << " ";
    std::cout << std::endl;
  } while(std::prev_permutation(myInts.begin(), myInts.end()));
  
  std::cout << std::endl;

}