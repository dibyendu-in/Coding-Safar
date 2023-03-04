#include<iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string : ";
    
    getline(cin, str);

    cout << "You have Entered : ";
    cout << str << endl;

    str.push_back('H');
    cout << "After using push_back " << str << endl;

    str.pop_back();
    cout << "After using pop_back " << str << endl;

    return 0; 
}
