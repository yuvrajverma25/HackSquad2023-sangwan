#include<iostream>
using namespace std;

class Base1
{
  public:
  void hello(void)
  {
    cout << "Hello from Base1 class" << endl;
  }
};

class Base2
{
  public:
  void hello(void)
  {
    cout << "Namaskar from Base2 class " << endl;
  }
};

class Derived : public Base1, public Base2 
{
    public:
    void hello(void)
    {
    Base2::hello();
    }
};

// as you can see here there are two classes Base1 and Base2 both are having same function hello this create the ambiguity.

int main()
{
  Derived d;
  d.hello();
}
