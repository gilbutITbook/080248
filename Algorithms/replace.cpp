#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main(){

  std::cout << std::endl;

  std::string str{"Only for testing purpose."};
  
  std::cout << str << std::endl;
  
  std::replace(str.begin(), str.end(), ' ', '1');
  std::cout << str << std::endl;
  
  std::replace_if(str.begin(), str.end(), [](char c){ return c == '1'; }, '2');
  std::cout << str << std::endl;
  
  std::string str2;
  std::replace_copy(str.begin(), str.end(), std::back_inserter(str2), '2', '3');
  std::cout << str2 << std::endl;
  
  std::string str3;
  std::replace_copy_if(str2.begin(), str2.end(), std::back_inserter(str3), [](char c){ return c == '3'; }, '4');
  std::cout << str3 << std::endl;

  std::cout << std::endl;
  
}