#include <atomic>
#include <iostream>
#include <thread>

std::atomic_int x;
std::atomic_int y;
int r1;
int r2;

void writeX(){
  x.store(1);
  r1= y.load();
}

void writeY(){
  y.store(1);
  r2=x.load();
}

int main(){

  std::cout << std::endl;

  x= 0;
  y= 0;
  std::thread a(writeX);
  std::thread b(writeY);
  a.join();
  b.join();
  std::cout << "(r1, r2)= " << "(" << r1 << ", " << r2 << ")" << std::endl;

  std::cout << std::endl;

}

