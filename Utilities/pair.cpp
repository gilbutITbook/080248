#include <iostream>
#include <utility>

int main(){

  std::cout << std::endl;

  std::pair<const char*, double> charDoub("string", 3.14);
  std::pair<const char*, double> charDoub2= std::make_pair("string", 3.14);
  auto charDoub3= std::make_pair("string", 3.14);

  std::cout << "charDoub: (" << charDoub.first << ", " << charDoub.second << ")" << std::endl;
  charDoub.first="String";
  std::get<1>(charDoub)=4.14;
  std::cout << "charDoub: (" << charDoub.first << ", " << charDoub.second << ")" << std::endl;

  std::cout << std::endl;

  if (charDoub2 == charDoub3) std::cout << "charDoub2 == charDoub3" << std::endl;

  if (charDoub > charDoub3) std::cout << "charDoub > charDoub3" << std::endl;

  std::cout << std::endl;

}
