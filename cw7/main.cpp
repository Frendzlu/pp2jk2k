#include <iostream>

using namespace std;

class Base {
public:
    virtual void method() {
        cout << "Base method" << endl;
    }
    virtual void abstract() = 0;
};

class Derived : public Base {
public:
    void method() override {
        Base::method();
        cout << "Derived method" << endl;
    }
    void abstract() override {

    };
};


int main() {
    std::cout << "Hello, World!" << std::endl;

    Derived d;
    d.method();

    //Base b = Base();
    Base& br = d;

    return 0;
}
