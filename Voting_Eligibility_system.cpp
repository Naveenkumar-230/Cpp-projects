#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string Name,Gender;
    int age;
    cout << "Enter Your Name:";
    getline (cin,Name);

    cout << "Enter your Gender:";
    getline (cin,Gender);

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Eligible to vote";
    } else {
        cout << "Not eligible to vote\nbecause your under 18";
    }

    return 0;
}
