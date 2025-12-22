#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a, b;

    const char* appName = getenv("APP_NAME");

    if (appName != nullptr) {
        cout << "Application Name: " << appName << endl;
    } else {
        cout << "Application Name not set" << endl;
    }

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int sum = a + b;

    cout << "Sum = " << sum << endl;

    return 0;
}
