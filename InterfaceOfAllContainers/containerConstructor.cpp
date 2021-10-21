#include <iostream>
#include <map>
#include <unordered_map>
#include <utility>
#include <string>
#include <vector>

int main(){
 
  std::cout << std::endl;
  
  std::vector<int> vec= {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::map<std::string, int> str2Int ={{"bart", 12345}, {"jenne", 34929}, {"huber", 840284}};
  std::unordered_map<std::string, int> str2Int2{str2Int.begin(), str2Int.end()};
  
  for ( auto v: vec ) std::cout << v << " ";
  std::cout << std::endl;
  for ( auto m: str2Int ) std::cout << m.first << ", " << m.second << " ";
  std::cout << std::endl;
  for ( auto um: str2Int2 ) std::cout << um.first << ", " << um.second << " ";
  
  std::cout << "\n\n";
  
  std::vector<int> vec2= vec;
  std::cout << "intVec.size(): " << vec.size() << std::endl;
  std::cout << "vec2.size(): " << vec2.size() << std::endl;
  
  std::cout << std::endl;
  
  std::vector<int> vec3= std::move(vec);
  std::cout << "vec.size(): " << vec.size() << std::endl;
  std::cout << "vec3.size(): " << vec3.size() << std::endl;
  
  std::cout <<  std::endl; 
  
}

