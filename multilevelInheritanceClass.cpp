#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal() {
        cout << "Animal constructor called.\n";
    }
    
    ~Animal() {
    	cout<<"Destructor called for animal!\n";
	}

    void eat() {
        cout << "Animal eats food.\n";
    }

    void sleep() {
        cout << "Animal sleeps at night.\n";
    }
};

// Derived class from Animal
class Mammal : public Animal {
public:
    Mammal() {
        cout << "Mammal constructor called.\n";
    }
	
	~Mammal() {
    	cout<<"Destructor called for mammal!\n";
	}
	
    void walk() {
        cout << "Mammals walk using legs.\n";
    }

    void breathe() {
        cout << "Mammals breathe using lungs.\n";
    }
};

// Derived class from Mammal
class Dog : public Mammal {
public:
    Dog() {
        cout << "Dog constructor called.\n";
    }
    
    ~Dog() {
    	cout<<"Destructor called for dog!\n";
	}

    void bark() {
        cout << "Dog barks loudly.\n";
    }

    void fetch() {
        cout << "Dog fetches the ball.\n";
    }
};

int main() {
    cout << "Creating Dog object...\n\n";

    Dog myDog;

    cout << "\n--- Dog's Abilities ---\n";
    myDog.eat();      // Animal
    myDog.sleep();    // Animal
    myDog.walk();     // Mammal
    myDog.breathe();  // Mammal
    myDog.bark();     // Dog
    myDog.fetch();    // Dog
    
    cout <<"\nDestructor callings:\n";

    return 0;
}



