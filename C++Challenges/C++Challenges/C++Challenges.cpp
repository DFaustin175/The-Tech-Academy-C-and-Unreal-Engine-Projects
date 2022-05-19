#include <iostream>
using namespace std; //either or works if only using cout
//using std::cout;

void myFunction() {
    cout << "Function executed\n";
}

int abcde(int x, int y) {
    return x + y;
}

class MyClass {
    public:
        int myNum;
        string myString;
};

class ClassMethod {
public:
    void CMethod() {
        cout << "Hello world \n";
    }
};


int main()
{
    cout << "Hello World! \n";
    cout << 32 << '\n';

    int myNum = 42;
    cout << myNum << '\n';
    const int myNum2 = 50;
    6 + myNum2;
    cout << myNum2 << '\n';

    int x;
    cin >> x;
    cout << "Input equals " << x << '\n';

    string firstName = "John";
    string lastName = "Doe";

    string fullName = firstName + " " + lastName;
    cout << fullName << '\n';
    cout << fullName.length() << '\n';

    cout << 6 + 10 << '\n';
    cout << 6 - 10 << '\n';
    cout << 6 * 10 << '\n';
    cout << 6 / 10 << '\n';
    cout << ++myNum << '\n';

    cout << (6 > 10) << '\n';
    cout << (6 == 10) << '\n';
    cout << (6 != 10) << '\n';
    cout << (6 <= 10) << '\n';
    //0 for false, 1 for true

    int y = 5;
    cout << (y = 5) << '\n';
    cout << (y += 5) << '\n';
    cout << (y &= 5) << '\n';
    cout << (y <<= 5) << '\n';

    string food = "Pizza";
    string* ptr = &food;
    string &meal = food;
    cout << food << '\n';
    cout << meal << '\n';
    cout << '\n';

    cout << food << '\n';
    cout << &food << '\n';
    cout << ptr << '\n';
    cout << *ptr << '\n';

    abcde(12, 90);
    myFunction();

    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    obj1.myNum = 12;
    obj1.myString = "Text1";
    obj2.myNum = 13;
    obj2.myString = "Text2";
    obj3.myNum = 14;
    obj3.myString = "Text3";

    cout << obj1.myNum << " ";
    cout << obj1.myString << '\n';
    cout << obj2.myNum << " ";
    cout << obj2.myString << '\n';
    cout << obj3.myNum << " ";
    cout << obj3.myString << '\n';

    ClassMethod obj4;
    obj4.CMethod();

    return 0;
}