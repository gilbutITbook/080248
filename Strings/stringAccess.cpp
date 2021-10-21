#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

int main(){

  std::cout << std::endl;
  
  std::string str= {"0123456789"};
  std::cout << "str.front(): " << str.front() << std::endl;
  std::cout << "str.back(): " << str.back() << std::endl;
  
  std::cout << std::endl;
  
  for (int i=0; i <= 10; ++i){
    std::cout << "str[" << i  << "]: " << str[i] << std::endl;
  }
  
  std::cout << std::endl;

  try{
    str.at(10);
  }
  catch (const std::out_of_range& e){
    std::cerr << "Exception: " <<  e.what() << std::endl;
  }
  
  std::cout << std::endl;
  
  std::cout << "*(&str[0]+5): " << *(&str[0]+5) << std::endl;
  std::cout << "*(&str[5]): " << *(&str[5]) << std::endl;
  std::cout << "str[5] : " << str[5] << std::endl;

  std::cout << std::endl;

}