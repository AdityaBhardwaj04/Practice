#include <iostream>
using namespace std;
inline int square(int s)
{
    return (s * s);
}
inline int cube(int s)
{
    return (s * s * s);
}
int main()
{
    int s;
    cout << "Enter number: ";
    cin >> s;
    cout << "Square of " << s << ": " << square(s) << endl;
    cout << "Cube of " << s << ": " << cube(s) << endl;
}