#include <iostream>
#include <string>

int main(){

  std::cout << std::boolalpha << std::endl;

  std::string first{"aaa"};
  std::string second{"aaaa"};
  
  std::cout << "first <  first :" << (first < first) << std::endl;
  std::cout << "first <=  first :" << (first <= first) << std::endl;
  std::cout << "first <  second :" << (first < second) << std::endl;

  std::cout << std::endl;
  
  std::string one{"1"};
  std::string oneOneOne= one+ std::string("1") +"1";

  std::cout << "1 + 1 + 1: " << oneOneOne << std::endl;
  
  std::cout << std::endl;

}