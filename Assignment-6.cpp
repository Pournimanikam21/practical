#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
    string colour;   
public:
    Shape(string c) {
        colour = c;
    }
    string getcolour() const {
        return colour;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(string c, double r) : Shape(c), radius(r) {}

    double area() const {
        return 3.14159265358979323846 * radius * radius;
    }

    double circumference() const {
        return 2 * 3.14159265358979323846 * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(string c, double w, double h) : Shape(c), width(w), height(h) {}

    double area() const {
        return width * height;
    }

    double perimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    Circle c1("Red", 5.0);
    cout << "Circle color: " << c1.getcolour() << endl;
    cout << "Circle area: " << c1.area() << endl;
    cout << "Circle circumference: " << c1.circumference() << endl;

    cout << endl;

    Rectangle r1("Blue", 4.0, 6.0);
    cout << "Rectangle color: " << r1.getcolour() << endl;
    cout << "Rectangle area: " << r1.area() << endl;
    cout << "Rectangle perimeter: " << r1.perimeter() << endl;

    return 0;
}

