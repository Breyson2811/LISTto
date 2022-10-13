#include <iostream>
class A{
  public:
    void foo(){
      std::cout << "B" << std::endl;
    } 
};
int main(){
  A a;
  a.foo();
}



