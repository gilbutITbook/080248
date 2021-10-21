#include <iostream>
#include <vector>

struct MyInt{
  MyInt(int i): myInt(i){};
  int myInt;
};

int main(){
  
  std::cout << std::endl;

  std::vector<MyInt> myIntVec;
  myIntVec.push_back(MyInt(5));
  myIntVec.emplace_back(1);
  std::cout << "myIntVec.size(): " << myIntVec.size() << std::endl;
  
  std::cout << std::endl;
  
  std::vector<int> intVec;
 
  intVec.assign({1, 2, 3}); 
  for ( auto v: intVec ) std::cout << v << " ";
  
  std::cout << std::endl;
  
  intVec.insert(intVec.begin(), 0);
  for ( auto v: intVec ) std::cout << v << " ";
  
  std::cout << std::endl;
  
  intVec.insert(intVec.begin()+4, 4);
  for ( auto v: intVec ) std::cout << v << " ";
  
  std::cout << std::endl;
  
  intVec.insert(intVec.end(), {5, 6, 7, 8, 9, 10, 11});
  for ( auto v: intVec ) std::cout << v << " ";
  std::cout << std::endl;
  for ( auto revIt= intVec.rbegin(); revIt != intVec.rend(); ++revIt) std::cout << *revIt << " ";
  
  std::cout << std::endl;
  
  intVec.pop_back();
  for ( auto v: intVec ) std::cout << v << " ";
  
  std::cout << "\n\n";
    
}