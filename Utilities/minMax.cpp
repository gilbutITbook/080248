#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

int main(){

  std::cout << std::endl;

  std::string first{"first"};
  std::string second{"second"};

  auto minInt= std::min({3, 1, 2011, 2014, -5});

  std::cout << "std::min(2011, 2014): " << std::min(2011, 2014) << std::endl;
  std::cout << "std::min(first, second): " << std::min(first, second) << std::endl;
  std::cout << "std::min({3, 1, 2011, 2014, -5}): " << std::min({3, 1, 2011, 2014, -5}) << std::endl;
  std::cout << "std::min(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}): "  <<
                std::min(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}) << std::endl;


  std::cout << std::endl;

  std::cout << "std::max(2011, 2014): " << std::max(2011, 2014) << std::endl;
  std::cout << "std::max(first, second): " << std::max(first, second) << std::endl;
  std::cout << "std::max({3, 1, 2011, 2014, -5}): " << std::max({3, 1, 2011, 2014, -5}) << std::endl;
  std::cout << "std::max(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}): "  <<
                std::max(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}) << std::endl;


  std::cout << std::endl;

  auto pairInt= std::minmax(2011, 2014);
  auto pairStr= std::minmax(first, second);
  auto pairSeq= std::minmax({3, 1, 2011, 2014, -5});
  auto pairAbs= std::minmax({3, 1, 2011, 2014, -5}, [](int a, int b){return std::abs(a) < std::abs(b);});

  std::cout << "(pairInt.first, pairInt.second): (" << pairInt.first << ", " << pairInt.second << ")" << std::endl;
  std::cout << "(pairStr.first, pairStr.second): (" << pairStr.first << ", " << pairStr.second << ")" << std::endl;
  std::cout << "(pairSeq.first, pairSeq.second): (" << pairSeq.first << ", " << pairSeq.second << ")" << std::endl;
  std::cout << "(pairAbs.first, pairAbs.second): (" << pairAbs.first << ", " << pairAbs.second << ")" << std::endl;

  std::cout << std::endl;


}

