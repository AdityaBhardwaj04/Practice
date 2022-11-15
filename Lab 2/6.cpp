#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int comp;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter complex part: ";
        cin >> comp;
    }
    void output()
    {
        cout << "The Complex number: ";
        cout << real << " + i " << comp << endl;
    }
};
int main()
{
    complex c[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        c[i].input();
        c[i].output();
    }
    return 0;
}