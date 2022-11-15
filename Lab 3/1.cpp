#include <iostream>
using namespace std;
float area(int);
int area(int, int);
float area(int, float);
int main()
{
    int l, b, r, h;
    float base;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Enter length & breadth of rectangle: ";
    cin >> l >> b;
    cout << "Enter height & base of triangle: ";
    cin >> h >> base;
    cout << "Area of circle: " << area(r) << endl;
    cout << "Area of rectangle: " << area(l, b) << endl;
    cout << "Area of triangle: " << area(h, base) << endl;
}
float area(int r)
{
    return (3.14 * r * r);
}
int area(int l, int b)
{
    return (l * b);
}
float area(int h, float base)
{
    return (0.5 * h * base);
}