#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Studentname;
    int age,Tamil,English,Maths,Science,Social,Total;
    cout << "Student name:";
    getline (cin, Studentname);
    cout << "age";
    cin >> age;
    cout << "Tamil:";
    cin >>Tamil;
    cout << "English:";
    cin >> English;
    cout << "Maths:";
    cin >> Maths;
    cout << "Science:";
    cin >> Science;
    cout << "Social:";
    cin >> Social;
    Total = Tamil+English+Maths+Science+Social;
    cout << "Total mark:"<< Total;
    return 0;
}