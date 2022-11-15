#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int a, b, sum;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    sum = a + b;
    cout << "Sum: " << sum;
    return 0;
}