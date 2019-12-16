#include <cstring>
#include <cassert>
#include <iostream>

class MyString {

private:
  char *m_data;
  int m_length;

public:

  MyString(const char *source="") {
    assert(source);
    m_length = std::strlen(source) + 1;
    m_data = new char[m_length];
    for (int i = 0; i < m_length; ++i)
      m_data[i] = source[i];
    m_data[m_length -1] = '\0';
  }


  MyString(const MyString &source) : m_length{source.m_length}, m_data{source.m_data} {}


  ~MyString() {
    delete[] m_data;
  }

  char* getString() {return m_data;}
  int getLine() {return m_length;}


  void deepCopy(const MyString& source);
};


void MyString::deepCopy(const MyString& source) {
  delete[] m_data;


}


int main() {
  MyString hello("Hello, world");

  MyString copy{hello};

  std::cout << hello.getString() << '\n';

  return 0;
}
