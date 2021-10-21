#include <iomanip>
#include <iostream>
#include <memory>

class MyStruct{
public:
  MyStruct():val(count){
    std::cout << std::setw(15) << std::left << (void*) this << " Hello: " << val <<  std::endl;
    MyStruct::count++;
  }
  ~MyStruct(){
    std::cout << std::setw(15) << std::left << (void*)this << " Good Bye: " << val << std::endl;
    MyStruct::count--;
  }
private:
  int val;
  static int count;
};

int MyStruct::count= 0;

int main(){

  std::cout << std::endl;

  // create a myUniqueArray with five MyStructs
  {
    std::unique_ptr<MyStruct[]> myUniqueArray{new MyStruct[5]};
  }

  std::cout << std::endl;

  // create a myUniqueArray
  // assign an myUnqiueArray element a new MyStruct
  {
    std::unique_ptr<MyStruct[]> myUniqueArray{new MyStruct[1]};
    MyStruct myStruct;
    myUniqueArray[0]=myStruct;
  }

  std::cout << std::endl;

  // create a myUniqueArray
  // assign a new MyStruct an myUniqueArray element
  {
    std::unique_ptr<MyStruct[]> myUniqueArray{new MyStruct[1]};
    MyStruct myStruct;
    myStruct= myUniqueArray[0];
  }

  std::cout << std::endl;

}
