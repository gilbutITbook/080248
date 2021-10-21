#include <iostream>
#include <string>

void showStringInfo(const std::string& s){

  std::cout << s << std::endl;
  std::cout << "s.size(): " << s.size() << std::endl;
  std::cout << "s.capacity(): " << s.capacity() << std::endl;
  std::cout << "s.max_size(): " << s.max_size() << std::endl;
  std::cout << std::endl;

}

int main(){

  std::string str;
  showStringInfo(str);
  
  str +="12345";
  showStringInfo(str);
  
  str.resize(30);
  showStringInfo(str);

  str.reserve(1000);
  showStringInfo(str);
  
  str.shrink_to_fit();
  showStringInfo(str);

}