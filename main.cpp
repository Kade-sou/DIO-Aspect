#include <iostream>
#include <aspect.h>

aspect MyAspect {
    advice execution(".* MyClass::foo()") : before() {
        std::cout << "Before MyClass::foo()" << std::endl;
    }

    advice execution(".* MyClass::bar()") : after() {
        std::cout << "After MyClass::bar()" << std::endl;
    }
};

class MyClass {
public:
    void foo() {
        std::cout << "Inside MyClass::foo()" << std::endl;
    }

    void bar() {
        std::cout << "Inside MyClass::bar()" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.foo();
    obj.bar();

    return 0;
}

