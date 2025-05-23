#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows." << endl;
    }
};

// Derived class 3
class Cow : public Animal {
public:
    void moo() {
        cout << "The cow moos." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    Cow cow;

    cout << "Dog:" << endl;
    dog.eat();
    dog.bark();

    cout << "\nCat:" << endl;
    cat.eat();
    cat.meow();

    cout << "\nCow:" << endl;
    cow.eat();
    cow.moo();

    return 0;
}



