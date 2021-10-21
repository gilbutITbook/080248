#include <iostream>
#include <map>
#include <set>
#include <vector>

int main(){
 
  std::cout << std::boolalpha<< std::endl;
  
  std::vector<int> intVec{1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::map<std::string, int> str2Int ={{"grimm", 12345}, {"meyer", 34929}, {"huber", 840284}};
  std::set<double> douSet{3.14, 2.5};
  
  std::cout << "intVec.empty() : " << intVec.empty() << std::endl;
  std::cout << "str2Int.empty(): " << str2Int.empty() << std::endl;
  std::cout << "douSet.empty() : " << douSet.empty() << std::endl;
  
  std::cout <<  std::endl; 
   
  std::cout << "intVec.size() : " << intVec.size() << std::endl;
  std::cout << "str2Int.size(): " << str2Int.size() << std::endl;
  std::cout << "douSet.size() : " << douSet.size() << std::endl;
  
  std::cout << std::endl;
  
  std::cout << "intVec.max_size() : " << intVec.max_size() << std::endl;
  std::cout << "str2Int.max_size(): " << str2Int.max_size() << std::endl;
  std::cout << "douSet.max_size() : " << douSet.max_size() << std::endl;
  
  std::cout << std::endl;
  
}
