#include <iostream>


using namespace std;

class Stooge  {
  public:
  static Stooge * make(int choice);
  virtual void slapstick() = 0;
};

class Larry : public Stooge {
  void slapstick() {
    cout << "Larry" << endl;
  }
};

class Moe : public Stooge {
  void slapstick() {
    cout << "Moe" << endl;
  }
};


Stooge * Stooge::make(int choice) {
  if (choice == 1)
    return new Larry();
  else
    return new Moe();
}

int main(int argc, char *argv[]) {
  Stooge * p1 = Stooge::make(0);
  Stooge * p2 = Stooge::make(1);
  p1->slapstick();
  p2->slapstick();




}
