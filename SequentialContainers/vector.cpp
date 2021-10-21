#include <iostream>
#include <vector>

int main(){

  std::cout << std::endl;

  std::vector<int> intVec1(5, 2011);
  intVec1.reserve(10);
  std::cout << "intVec1.size(): " << intVec1.size() << std::endl;
  std::cout << "intVec1.capacity(): " << intVec1.capacity() << std::endl;
  intVec1.shrink_to_fit();
  std::cout << "intVec1.capacity(): " << intVec1.capacity() << std::endl;
  
  std::cout << std::endl;
  
  std::vector<int> intVec2(10);
  std::cout << "intVec2.size() : " << intVec2.size() << std::endl;
  std::vector<int> intVec3{10};
  std::cout << "intVec3.size() : " << intVec3.size() << std::endl;
  std::vector<int> intVec4{5, 2011};
  std::cout << "intVec4.size() : " << intVec4.size() << std::endl;

  std::cout << std::endl;
  
}