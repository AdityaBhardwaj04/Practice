#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int roll;
    int marks[10];
    int sum = 0;

public:
    void input()
    {
        int i;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Marks: ";
        for (i = 0; i < 10; i++)
        {
            cin >> marks[i];
            sum += marks[i];
        }
    }
    void display()
    {
        int i;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << endl;
        for (i = 0; i < 10; i++)
        {
            cout << "Marks " << i + 1 << ": " << marks[i] << endl;
        }
        cout << "Percentage: " << float(sum) / 10;
    }
};
int main()
{
    student s1;
    s1.input();
    s1.display();
    return 0;
}