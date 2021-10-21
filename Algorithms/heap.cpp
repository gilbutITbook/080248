#include <algorithm>
#include <iostream>
#include <vector>

int main(){

  std::cout << std::boolalpha << std::endl;

  std::vector<int> vec{4, 3, 2, 1, 5, 6, 7, 9, 10};
  for (auto v: vec) std::cout << v << " ";
  std::cout << std::endl;

  std::make_heap(vec.begin(), vec.end());
  for (auto v: vec) std::cout << v << " ";
  std::cout << std::endl;
  
  std::cout << "std::is_heap(vec.begin(), vec.end()): " << std::is_heap(vec.begin(), vec.end()) << std::endl;
  
  std::cout << std::endl;
 
  vec.push_back(100);
  std::cout << "std::is_heap(vec.begin(), vec.end()): " << std::is_heap(vec.begin(), vec.end()) << std::endl;
  std::cout << "*std::is_heap_until(vec.begin(), vec.end()): " << *std::is_heap_until(vec.begin(), vec.end()) << std::endl;
  for (auto v: vec) std::cout << v << " ";
  std::push_heap(vec.begin(), vec.end());
  std::cout << "std::is_heap(vec.begin(), vec.end()): " << std::is_heap(vec.begin(), vec.end()) << std::endl;
  std::cout << std::endl;
  for (auto v: vec) std::cout << v << " ";
  
  std::cout << "\n\n";
  
  std::pop_heap(vec.begin(), vec.end());
  for (auto v: vec) std::cout << v << " ";
  std::cout << std::endl;
  std::cout << "*std::is_heap_until(vec.begin(), vec.end()): " << *std::is_heap_until(vec.begin(), vec.end()) << std::endl;
  vec.resize(vec.size() - 1);
  std::cout << "std::is_heap(vec.begin(), vec.end()): " << std::is_heap(vec.begin(), vec.end()) << std::endl;
  
  std::cout << std::endl;
  
  std::cout << "vec.front(): " << vec.front() << std::endl;
   
  std::cout << std::endl;

}