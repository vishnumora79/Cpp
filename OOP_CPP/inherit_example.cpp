// Simple Inheritence
// #include <iostream>
// using namespace std;
// class Animal {
//     public:
//       void eat() {
//           cout << "Animal is eating" << endl;
//       }
// };

// class Dog : public Animal {
//     public:
//       void eat() {
//         cout << "Dog is eating" << endl;
//       }
// };

// int main() {
//     Animal animal;
//     animal.eat();
//     Dog dog;
//     dog.eat();

//     return 0;
// }

// // Multiple inheritence
// #include<iostream>
// using namespace std;

// class Class1 {
//   public:
//       int publicVar;
//       void function() {
//         cout << publicVar << endl;
//       }
//   public:
//       int protectedVar;
//   private:
//       int privateVar;  

// };

// class Class2 {
//   public:
//     int a;
//     void function() {
//       cout << a << endl;
//     }  
// };

// class Derived : public Class1, public Class2 {
//   public:
//       void display() {
//         cout << "public value is " << publicVar << endl;
//         cout << "protected value is " << protectedVar << endl;
//         // cout << privateVar;
//       }
// };

// int main() {
//    Derived obj;
//    obj.display();
   
// }

// Constructors in inheritence
#include<iostream>
using namespace std;
class Base {
  public:
    int a;
    Base() {
      cout << "Base class constructor is called" << endl;
    }  

    ~Base() {
      cout << "Base class destructor is called" << endl;
    }
};

class Derived : public Base {
  public:
      Derived() {
        cout << "Derived class contructor is called" << endl;
      }

      ~Derived() {
        cout << "Derived class destructor is called" << endl;
      }
};

int main() {
  Derived obj;
  return 0;
}