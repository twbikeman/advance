#include <iostream>

using namespace std;

class T {
public:
  T() : x(5) {};
  
  T& operator=(T& t){
    cout << "assignment copy" << endl;
    this->x += 3 * t.x;
    return *this;
  }
  
  int x;

};


int main() {
  T t;
  T tt;
  tt = t;
  cout << tt.x << endl;
  return 0;
}
