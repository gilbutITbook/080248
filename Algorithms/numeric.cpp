#include <array>
#include <iostream>
#include <numeric>
#include <vector>



int main(){

  std::cout << std::endl;

  std::array<int, 9> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::cout << "std::accumulate(arr.begin(), arr.end(), 0): " << std::accumulate(arr.begin(), arr.end(), 0) << std::endl;
  std::cout << "std::accumulate(arr.begin(), arr.end(), 1, [](int a, int b){ return  a+b;}): " << std::accumulate(arr.begin(), arr.end(), 1, [](int a, int b){ return  a * b; } ) << std::endl;
  
  std::cout << std::endl;
  
  std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> myVec;
  
  std::cout << "adjacent_difference: " << std::endl;
  std::adjacent_difference(vec.begin(), vec.end(), std::back_inserter(myVec), [](int a, int b){ return a * b; });
  for (auto v: vec) std::cout << v << " ";
  std::cout <<  std::endl;
  for (auto v: myVec) std::cout << v << " ";
  
  std::cout << "\n\n";
  
  std::cout << "std::inner_product(vec.begin(), vec.end(), arr.begin(), 0): "<< std::inner_product(vec.begin(), vec.end(), arr.begin(), 0)  << std::endl;
  
  std::cout << std::endl;
  
  myVec={};
  std::partial_sum(vec.begin(), vec.end(), std::back_inserter(myVec));
  std::cout <<  "partial_sum: ";
  for ( auto v: myVec) std::cout << v << " ";
  
  std::cout << "\n\n";
  
  std::cout << "iota: ";
  std::vector<int> myLongVec(100);
  std::iota(myLongVec.begin(), myLongVec.end(),  2000);
  
  for ( auto v: myLongVec) std::cout << v << " ";
  
  std::cout << "\n\n";

}
