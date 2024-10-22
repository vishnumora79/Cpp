#include <iostream>
using namespace std;

class Shape {
    public:
      virtual void draw() = 0;
};

class Circle : public Shape {
    public:
      void draw() {
        cout << "Drawing a circle" << "\n";
      }
};

class Rectangle : public Shape {
    public:
      void draw() {
        cout << "Drawing a rectangle" << endl;
      }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1 -> draw();
    shape2 -> draw();

    delete shape1;
    delete shape2;

    return 0;
}

