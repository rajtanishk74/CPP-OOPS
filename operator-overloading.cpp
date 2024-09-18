// plus operator overloading
#include <iostream>

using namespace std;
class rectangle
{
    int length, breadth;

public:
    rectangle()
    {

        length = 0; // default constructor
        breadth = 0;
    }
    rectangle(int a, int b)
    {
        length = a; // paramatrized constructor
        breadth = b;
    }
    rectangle operator+(rectangle r2);

    void display()
    {
        cout << "length=" << length << " "
             << "breadth=" << breadth; //  fuction to show operator overloading result
    }
};
rectangle rectangle::operator+(rectangle r2)
{
    rectangle R;
    R.length = length + r2.length; // operator overloading function
    R.breadth = breadth + r2.breadth;
    return R;
}
int main()
{
    rectangle r1(1, 4), r2(5, 8); // Object creation
    rectangle r3 = r1 + r2;       // using overload function
    r3.display();
}