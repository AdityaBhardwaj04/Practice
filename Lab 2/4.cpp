#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int roll;
    int marks;

public:
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    student s1;
    s1.input();
    s1.display();
    return 0;
}