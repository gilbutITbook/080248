#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main(){
  
  std::cout << std::endl;

  std::string str{"abcdefghijklmnopqrstuvwxyz"};

  std::cout << str << std::endl;

  std::transform(str.begin(), str.end(), str.begin(), [](char c){ return std::toupper(c); });

  std::cout << str << std::endl;
  
  std::cout << std::endl;
  
  std::vector<std::string> vecStr{"Only", "for", "testing", "purpose", "."};
  std::vector<std::string> vecStr2(5, "-");
  
  std::vector<std::string> vecRes;
  
  std::transform(vecStr.begin(), vecStr.end(),
		 vecStr2.begin(),
		 std::back_inserter(vecRes),
		 [](std::string a, std::string b){ return std::string(b) + a + b; });
  
  for ( auto str: vecRes ) std::cout << str << std::endl;

  std::cout << std::endl;

}