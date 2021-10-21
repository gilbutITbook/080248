#include <iostream>
#include <limits>
#include <string>

int main(){

  std::cout << std::endl;
  
  std::cout << "to_string, to_wstring" << std::endl;
  
  std::string maxLongLongString=std::to_string(std::numeric_limits<long long>::max());
  std::wstring maxLongLongWstring=std::to_wstring(std::numeric_limits<long long>::max());
  
  std::cout << std::numeric_limits<long long>::max() << std::endl;
  std::cout << maxLongLongString << std::endl;
  std::wcout <<  maxLongLongWstring <<  std::endl;
  
  std::cout << std::endl;
  
  std::cout << "ato* " << std::endl;
  
  std::string str("10010101");
  
  std::cout << std::stoi(str) << std::endl;
  std::cout << std::stoi(str, nullptr, 16) << std::endl;
  std::cout << std::stoi(str, nullptr, 8) << std::endl;
  std::cout << std::stoi(str, nullptr, 2) << std::endl;
  
  std::cout << std::endl;
  
  std::size_t idx;
  std::cout << std::stod("   3.5 km", &idx) << std::endl;
  std::cout << "Not numeric char at position " << idx << "." << std::endl;
  
  std::cout << std::endl;
  
  try{
    std::cout << std::stoi("   3.5 km") << std::endl;
    std::cout << std::stoi("   3.5 km", nullptr, 2) << std::endl;
    
  }
  catch (const std::exception& e){
    std::cerr <<  e.what() << std::endl;
  }
  
  std::cout << std::endl;

}