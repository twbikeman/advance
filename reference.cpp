#include <iostream>



class My {
public:
  int a;
  int b;
  int geta() {return a;}
  My(): a(1), b(2){}
};


int main() {
  My my;
   int (My::*b)() = &My::geta;
  std::cout << (my.*b)() << std::endl;

}
