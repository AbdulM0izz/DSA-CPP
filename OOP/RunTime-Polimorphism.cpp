#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { // virtual keyword enables runtime polymorphism
        cout << "Some generic animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof Woof!\n";
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow Meow!\n";
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->sound(); // Woof Woof! (Dog version called)
    a2->sound(); // Meow Meow! (Cat version called)

    delete a1;
    delete a2;
}
