#include <iostream>
using namespace std;

class Animal {
    public:
      virtual void makeSound() {
        cout << "This animal is making some sound" << endl;
      }
};

class Dog : public Animal {
   public:
      void makeSound() {
        cout << "Dog is barking" << endl;
      }
};

class StreetDog : public Dog {
   public:
     void makeSound() {
        cout << "Dog is barking on everyone" << endl;
     }
};

class Cow : public Animal {
    public:
     void makeSound() {
        cout << "Cow's are making sound while eating gross" << endl;
     }
};

int main() {
    Animal* a1 = new Animal();
    Animal* a2 = new Dog();
    Animal* d1 = new StreetDog();
    Animal* a3 = new Cow();

    a1->makeSound();
    a2->makeSound();
    a3->makeSound();
    d1->makeSound();

    delete a1;
    delete a2;
    delete a3;
    delete d1;

    return 0;
}