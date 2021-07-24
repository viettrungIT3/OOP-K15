#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    void display() {
        cout<<"My name is "<<name;
    }
};

int main(int argc, char const *argv[])
{
    Student sv;
    sv.name = "Trung";
    sv.display();
    return 0;
}
