#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main(){

  std::cout << std::boolalpha << std::endl;

  std::string str1{"Only For Testing Purpose."};
  std::string str2{"only for testing purpose."};
  
  std::cout << "str1: " << str1 << std::endl;
  std::cout << "str2: " << str2 << std::endl;
  
  std::cout << std::endl;

  std::cout << "std::equal(str1.begin(), str1.end(), str2.begin()): " << std::equal(str1.begin(), str1.end(), str2.begin()) << std::endl;
  std::cout << "std::equal(str1.begin(), str1.end(), str2.begin(), [](char c1, char c2){ return std::toupper(c1) == std::toupper(c2);}): " 
             << std::equal(str1.begin(), str1.end(), str2.begin(), [](char c1, char c2){ return std::toupper(c1) == std::toupper(c2);}) << std::endl;

  std::cout << std::endl;
  
  str1= {"Only for testing Purpose."};
  str2= {"Only for testing purpose."};
  
  std::cout << "str1: " << str1 << std::endl;
  std::cout << "str2: " << str2 << std::endl;
  
  std::cout << std::endl;
  
  auto pair= std::mismatch(str1.begin(), str1.end(), str2.begin());
  if ( pair.first == str1.end() ){
    std::cout << "str1 and str2 are equal" << std::endl;
  }
  else{
    std::cout << "str1 and str2 are different at position " << std::distance(str1.begin(), pair.first) 
              << " with (" << *pair.first << ", " << *pair.second << ")" <<  std::endl;
  }		    
  
  auto pair2= std::mismatch(str1.begin(), str1.end(), str2.begin(), [](char c1, char c2){ return std::toupper(c1) == std::toupper(c2);});
  if ( pair2.first == str1.end() ){
    std::cout << "str1 and str2 are equal" << std::endl;
  }
  else{
    std::cout << "str1 and str2 are different at position " << std::distance(str1.begin(), pair2.first) 
              << " with(" << *pair2.first << ", " << *pair2.second << ")" <<  std::endl;
  }
  
  std::cout << std::endl;
  
}