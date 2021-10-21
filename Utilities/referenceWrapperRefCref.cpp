#include <functional>
#include <iostream>
#include <string>
#include <tuple>
#include <utility>


void invokeMe(const std::string& s){
  std::cout << s << ": const " << std::endl;
}


template <typename T>
void doubleMe(T t){
  t *= 2;
}

int main(){

  std::cout << std::endl;

  std::string s{"string"};

  invokeMe(std::cref(s));

  std::cout << std::endl;

  int i=1;
  std::cout << "i: " << i << std::endl;

  doubleMe(i);
  std::cout << "doubleMe(i): " << i << std::endl;

  doubleMe(std::ref(i));
  std::cout << "doubleMe(std::ref(i)): " << i << std::endl;

  std::cout << std::endl;

  int a{2011};
  auto tup= std::make_pair(a, std::ref(a));
  std::cout << "(tup.first, tup.second): (" << tup.first << ", " << tup.second << ")" << std::endl;
  a=2014;
  std::cout << "(tup.first, tup.second): (" << tup.first << ", " << tup.second << ")" << std::endl;

  std::cout << std::endl;

}

