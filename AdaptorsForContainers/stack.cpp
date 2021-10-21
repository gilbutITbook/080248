#include <iostream>
#include <stack>

int main(){

  std::cout << std::boolalpha << std::endl;

  std::stack<int> myStack;

  std::cout << "myStack.empty(): " << myStack.empty() << std::endl;
  std::cout << "myStack.size(): " << myStack.size() << std::endl;
  
  
  std::cout << std::endl;

  myStack.push(1);
  myStack.push(2);
  myStack.push(3);

  std::cout << "myStack.top(): " << myStack.top() <<  std::endl;
  
  std::cout << std::endl;

  while (!myStack.empty()){
    std::cout << "myStack.top(): " << myStack.top() <<  std::endl;
    myStack.pop();
  }
  
  std::cout << std::endl;

  std::cout << "myStack.empty(): " << myStack.empty() << std::endl;
  std::cout << "myStack.size(): " << myStack.size() << std::endl;
  
  std::cout << std::endl;
  
}