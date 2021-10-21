#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main(){

  std::cout << std::boolalpha << std::endl;
  
  std::string str{"RUdAjdDkaACsdfjwldXmnEiVSEZTiepfgOIkue"};
 
  std::cout << str <<  std::endl;

  std::cout << "std::is_sorted(str.begin(), str.end()): " <<  std::is_sorted(str.begin(), str.end()) << std::endl;
  
  std::cout << std::endl;
  
  std::partial_sort(str.begin(), str.begin() + 30, str.end());
  std::cout << str <<  std::endl;
  auto sortUntil=  std::is_sorted_until(str.begin(), str.end());
  std::cout << "Sorted unitl: " << *sortUntil << std::endl;
  for (auto charIt= str.begin(); charIt != sortUntil; ++charIt) std::cout << *charIt;
  
  std::cout << "\n\n";
  
  std::vector<int> vec{1, 0, 4, 3, 5};
  
  auto vecIt= vec.begin();
  while( vecIt != vec.end() ){
    std::nth_element(vec.begin(), vecIt++, vec.end());
    std::cout << std::distance(vec.begin(), vecIt) << "-th ";
    for (auto v: vec) std::cout << v;
    std::cout << std::endl;
  }
  
  std::cout << std::endl;

}