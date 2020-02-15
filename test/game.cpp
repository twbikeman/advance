#include <iostream>


struct T {
  int x;
  float y;
  const char *z;
};

int main() {

  struct T i;
  i = {10, 11.0, "test"};
  std::cout << i.z << std::endl;
  return 0;
}
