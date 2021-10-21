#include <algorithm>
#include <iostream>
#include <string>

int main(){

  std::cout << std::endl;

  std::string str{"123456789"};

  auto endIt= str.end();
  for (auto middleIt= str.begin();  middleIt != endIt; ++middleIt){
    std::rotate(str.begin(), middleIt, str.end());
    std::cout << str << std::endl;
  }

  std::cout << std::endl;

}