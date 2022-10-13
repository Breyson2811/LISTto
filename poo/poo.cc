#include <iostream>
class A{
  public:
    void foo(){
      std::cout << "A" << std::endl;
    } 
};
class B: public A{
  public:
    void foo(){
      std::cout << "B" << std::endl;
    }
};
class C: public A{
  public:
    void goo(){
      std::cout << "C" << std::endl; 
    }
};
class D: public B{
  public:
    void goo(){
      std::cout << "D" << std::endl;
    }
};
class E: public C{
  public:
    void foo(){
      std::cout << "E" << std::endl;
    }
};
int main(){
  E e;
  e.goo();

  A *a = new C();
  a->foo();

  D d;
  d.foo();
}



