#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual function
    virtual void makeSound() = 0;

    // Virtual destructor (good practice in abstract classes)
    virtual ~Animal() {}
};

// Derived class: Dog
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof! Woof!" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    // Animal a; ❌ Not allowed (abstract class cannot be instantiated)

    Animal* dog = new Dog();
    Animal* cat = new Cat();

    dog->makeSound();  // Output: Woof! Woof!
    cat->makeSound();  // Output: Meow! Meow!

    delete dog;
    delete cat;

    return 0;
}
