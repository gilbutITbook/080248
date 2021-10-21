#include <fstream>
#include <iostream>
#include <string>

int writeFile(const std::string name){

  std::ofstream outFile(name);

  if (!outFile){
    std::cerr << "Could not open file " << name << std::endl;
    exit(1);
  }

  for ( unsigned int i=0; i < 10; ++i){
    outFile << i << "        0123456789" << std::endl;
  }
}



int main(){
  
  std::cout << std::endl;
  
  std::string random{"random.txt"};
  
  writeFile(random);
  
  std::ifstream inFile(random);

  if (!inFile){
    std::cerr << "Could not open file " << random << std::endl;
    exit(1);
  }
  
  std::string line;
  
  std::cout << "The whole file : " << std::endl;
  std::cout << inFile.rdbuf();
  std::cout <<  "inFile.tellg(): " << inFile.tellg()  << std::endl;
  
  std::cout <<  std::endl;
  
  inFile.seekg(0); 
  inFile.seekg(0, std::ios::beg);   // redundant
  getline(inFile, line); 
  std::cout << line << std::endl;
  
  inFile.seekg(20, std::ios::cur);
  getline(inFile, line);
  std::cout << line << std::endl;
  
  inFile.seekg(-20, std::ios::end);
  getline(inFile, line);
  std::cout << line << std::endl;

  std::cout << std::endl;
  
}