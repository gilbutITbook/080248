#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

template < class T > 
T StringTo ( const std::string& source ){

  std::istringstream iss(source);
  T ret;
  iss >> ret;

  return ret;

}

template< class T > 
std::string ToString(const T& n){

  std::ostringstream tmp ;
  tmp << n;
  return tmp.str();

}

int main(){
  
  std::cout << std::endl;

  std::cout << "5 = "  << std::string("5") << std::endl;
  std::cout << "5 = " <<  StringTo<int>("5") << std::endl;
  std::cout << "5 + 6 = " << StringTo<int>("5") + 6 << std::endl;
  
  std::string erg(ToString(StringTo<int> ("5") + 6 ) ); 
  std::cout << "5 + 6 = " << erg  << std::endl;
  
  std::cout << "5e10: " << std::fixed << StringTo<double>("5e10")  << std::endl;
  
  std::cout << std::endl;
  
}