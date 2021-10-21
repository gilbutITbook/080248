#include <algorithm>
#include <forward_list>
#include <iostream>

int main(){

  std::cout << std::boolalpha << std::endl;

  std::forward_list<int> myForList;

  std::cout << "myForList.empty(): "  << myForList.empty() << std::endl;
  myForList.push_front(7);
  myForList.push_front(6);
  myForList.push_front(5);
  myForList.push_front(4);
  myForList.push_front(3);
  myForList.push_front(2);
  myForList.push_front(1);

  std::cout << std::endl;

  std::cout << "myForList: " << std::endl;
  for (auto It= myForList.cbegin();It != myForList.cend();++It) std::cout << *It << " ";
  std::cout << "\n\n";

  std::cout << "myForList.erase_after(myForList.before_begin()): " << std::endl;
  myForList.erase_after(myForList.before_begin());
  std::cout<< "myForList.front(): " << myForList.front() << "\n\n";

  std::forward_list<int>myForList2;
  myForList2.insert_after(myForList2.before_begin(), 1);
  myForList2.insert_after(myForList2.before_begin()++, 2);
  myForList2.insert_after((myForList2.before_begin()++)++, 3);
  myForList2.push_front(1000);

  std::cout << "myForList2: " << std::endl;
  for (auto It= myForList2.cbegin();It != myForList2.cend();++It) std::cout << *It << " ";
  std::cout << "\n\n";
  auto IteratorTo5= std::find(myForList.begin(), myForList.end(), 5);
  myForList.splice_after(IteratorTo5, std::move(myForList2));

  std::cout << "myForList.splice_after(IteratorTo5, std::move(myForList2)): " << std::endl;
  for (auto It= myForList.cbegin();It != myForList.cend();++It) std::cout << *It << " ";
  std::cout << "\n\n";

  myForList.sort();

  std::cout << "myForList.sort(): " << std::endl;
  for (auto It= myForList.cbegin();It != myForList.cend();++It) std::cout << *It << " ";
  std::cout << "\n\n";

  myForList.reverse();

  std::cout << "myForList.reverse(): " << std::endl;
  for (auto It= myForList.cbegin();It != myForList.cend();++It) std::cout << *It << " ";
  std::cout << "\n\n";

  myForList.unique();

  std::cout << "myForList.unique(): " << std::endl;
  for (auto It= myForList.cbegin();It != myForList.cend();++It) std::cout << *It << " ";
  std::cout << "\n";

  std::cout << std::endl;

}
