#include <iostream>
#include <queue>

int main(){

  std::cout << std::boolalpha << std::endl;

  std::queue<int> myQueue;

  std::cout << "myQueue.empty(): " << myQueue.empty() << std::endl;
  std::cout << "myQueue.size(): " << myQueue.size() << std::endl;
  
  
  std::cout << std::endl;

  myQueue.push(1);
  myQueue.push(2);
  myQueue.push(3);

  std::cout << "myQueue.back(): " << myQueue.back() <<  std::endl;
  std::cout << "myQueue.front(): " << myQueue.front() <<  std::endl;
  
  std::cout << std::endl;

  while (!myQueue.empty()){
    std::cout << "myQueue.back(): " << myQueue.back() <<  std::endl;
    std::cout << "myQueue.front(): " << myQueue.front() <<  std::endl;
    myQueue.pop();
  }
  
  std::cout << std::endl;

  std::cout << "myQueue.empty(): " << myQueue.empty() << std::endl;
  std::cout << "myQueue.size(): " << myQueue.size() << std::endl;
  
  std::cout << std::endl;
  
}