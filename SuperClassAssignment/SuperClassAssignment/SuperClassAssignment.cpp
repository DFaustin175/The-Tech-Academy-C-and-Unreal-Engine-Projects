#include <iostream>

using namespace std;


class Shape {
public: 
    string color;
    int getArea() {
        
    }
};

class rectangle : public Shape {
public:
    int height;
    int width;
    int getArea() {
        int x = height;
        int y = width;
        return x * y;
    }
};

class triangle : public Shape {
public:
    int Base;
    int Height;
    int getArea() {
        int x = Base;
        int y = Height;
        return 0.5 * x * y;
    }
};

class Circle : public Shape {
public:
    int Radius;
    void getArea() {
        int x = Radius;
        const double pi = 3.14159265358979323846;
        cout << pi * (x * x);
    }
};

int main()
{
    rectangle rect1;
    rect1.color = "Brown";
    rect1.height = 12;
    rect1.width = 45;
    
    cout << "Rectangle 1: \n";
    cout << rect1.color << '\n';
    cout << rect1.height << '\n';
    cout << rect1.width << '\n';
    cout << rect1.getArea() << '\n';

    triangle tri1;
    tri1.color = "Yellow";
    tri1.Base = 45;
    tri1.Height = 90;

    cout << "Triangle 1: \n";
    cout << tri1.color << '\n';
    cout << tri1.Base << '\n';
    cout << tri1.Height << '\n';
    cout << tri1.getArea() << '\n';


    Circle cir1;
    cir1.color = "Yellow";
    cir1.Radius = 80;

    cout << "Circle 1: \n";
    cout << cir1.color << '\n';
    cout << cir1.Radius << '\n';
    cir1.getArea();

    return 0;

}

