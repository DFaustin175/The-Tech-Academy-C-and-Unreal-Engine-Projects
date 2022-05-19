#include <iostream>
using namespace std;



class Dog {
public:
    string breed;
    string color;
    string height;
    string weight;

    void Shake() {
        cout << "The " + breed + " does a shake \n";
    }
    void Sit() {
        cout << "The " + breed + " sits \n";
    }
    void LayDown() {
        cout << "The " + breed + " lies down \n";
    }
};

int main()
{
    Dog dog1;
    dog1.breed = "Hound";
    dog1.color = "Brown";
    dog1.height = "2 Feet";
    dog1.weight = "60 Pounds";

    dog1.Shake();
    dog1.Sit();
    dog1.LayDown();
}