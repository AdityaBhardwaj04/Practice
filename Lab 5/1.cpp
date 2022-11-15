#include <iostream>
using namespace std;
class C;
class B;
class A
{
    int a;

public:
    void getdata(int n)
    {
        a = n;
    }
    friend void largest(A &, B &, C &);
};
class B
{
    int b;

public:
    void getdata(int n)
    {
        b = n;
    }
    friend void largest(A &, B &, C &);
};
class C
{
    int c;

public:
    void getdata(int n)
    {
        c = n;
    }
    friend void largest(A &, B &, C &);
};
void largest(A &n1, B &n2, C &n3)
{
    int large;
    if (n1.a > n2.b && n1.a > n3.c)
    {
        large = n1.a;
    }
    else if (n2.b > n1.a && n2.b > n3.c)
    {
        large = n2.b;
    }
    else
    {
        large = n3.c;
    }
    cout << "Largest among the classes = " << large << endl;
}
int main()
{
    A i1;
    B i2;
    C i3;
    int x, y, z;
    cout << "Enter data: ";
    cin >> x >> y >> z;
    i1.getdata(x);
    i2.getdata(y);
    i3.getdata(z);
    largest(i1, i2, i3);
    return 0;
}