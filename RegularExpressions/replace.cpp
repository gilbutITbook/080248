#include <iomanip>
#include <iostream>
#include <regex>
#include <string>

int main(){

  std::cout << std::endl;

  std::string future{"Future"};
  int len= sizeof(future);

  std::string unofficialStandardName{"The unofficial name of the new C++ standard is C++0x."};
  std::cout << std::setw(len) << std::left << "Past: " << unofficialStandardName << std::endl;

  // replace C++0x with C++11
  std::regex rgxCpp(R"(C\+\+0x)");
  std::string newCppName{"C++11"};

  std::string newStandardName{std::regex_replace(unofficialStandardName, rgxCpp, newCppName)};
  // replace unofficial with official
  std::regex rgxOff{"unofficial"};
  std::string makeOfficial{"official"};

  std::string officialName{std::regex_replace(newStandardName, rgxOff, makeOfficial)};
  std::cout << std::setw(len) << std::left  << "Now: " << officialName << std::endl;

  std::cout << std::endl;

}
