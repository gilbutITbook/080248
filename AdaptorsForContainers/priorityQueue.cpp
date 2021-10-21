#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

int main(){

  std::cout << std::boolalpha << std::endl;

  std::priority_queue<int> myPriorityQueue;

  std::cout << "myPriorityQueue.empty(): " << myPriorityQueue.empty() << std::endl;
  std::cout << "myPriorityQueue.size(): " << myPriorityQueue.size() << std::endl;
  
  std::cout << std::endl;

  myPriorityQueue.push(3);
  myPriorityQueue.push(1);
  myPriorityQueue.push(2);

  std::cout << "myPriorityQueue.top(): " << myPriorityQueue.top() <<  std::endl;
  
  std::cout << std::endl;

  while (!myPriorityQueue.empty()){
    std::cout << "myPriorityQueue.top(): " << myPriorityQueue.top() <<  std::endl;
    myPriorityQueue.pop();
  }
  
  std::cout << std::endl;

  std::cout << "myPriorityQueue.empty(): " << myPriorityQueue.empty() << std::endl;
  std::cout << "myPriorityQueue.size(): " << myPriorityQueue.size() << std::endl;
  
  std::cout << std::endl;
 
  std::priority_queue<std::string, std::vector<std::string>, std::greater<std::string>> myPriorityQueue2;

  myPriorityQueue2.push("Only"); 
  myPriorityQueue2.push("for"); 
  myPriorityQueue2.push("testing"); 
  myPriorityQueue2.push("purpose"); 
  myPriorityQueue2.push(".");
  
  while (!myPriorityQueue2.empty()){ 
    std::cout << "myPriorityQueue2.top(): " << myPriorityQueue2.top() <<  std::endl;
    myPriorityQueue2.pop();
  }
  
  std::cout << std::endl;
  
}