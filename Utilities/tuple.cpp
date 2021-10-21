#include <iostream>
#include <string>
#include <tuple>
#include <utility>

int main(){

  std::cout << std::boolalpha << std::endl;

  // create two tuples
  std::tuple<std::string, int, float> tup1("first", 3, 4.17f);
  auto tup2= std::make_tuple("second", 4, 1.1);

  // read the values
  std::cout << "tup1: "  << std::get<0>(tup1) << ", " << std::get<1>(tup1) << ", " << std::get<2>(tup1) << std::endl;
  std::cout << "tup2: "  << std::get<0>(tup2) << ", " << std::get<1>(tup2) << ", " << std::get<2>(tup2) << std::endl;

  // compare them
  std::cout << "tup1 < tup2: " << (tup1 < tup2) << std::endl;

  std::cout << std::endl;

  // modify a tuple value
  std::get<0>(tup2)= "Second";

  // read the values
  std::cout << "tup1: "  << std::get<0>(tup1) << ", " << std::get<1>(tup1) << ", " << std::get<2>(tup1) << std::endl;
  std::cout << "tup2: "  << std::get<0>(tup2) << ", " << std::get<1>(tup2) << ", " << std::get<2>(tup2) << std::endl;

  // compare them
  std::cout << "tup1 < tup2: " << (tup1 < tup2) << std::endl;

  std::cout << std::endl;

  auto pair= std::make_pair(1, true);
  std::tuple<int, bool> tup= pair;

}
