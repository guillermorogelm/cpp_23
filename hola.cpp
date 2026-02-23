#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    string city;

    cout << "Hello! Welcome!" << endl;
    cout << "What is your name? ";
    getline(cin, name);

    cout << "How old are you? ";
    cin >> age;
    cin.ignore();

    cout << "What city are you from? ";
    getline(cin, city);

    cout << "\n--- Greeting Summary ---" << endl;
    cout << "Hello " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;
    cout << "You are from " << city << "." << endl;
    cout << "Nice to meet you!" << endl;

    return 0;
}