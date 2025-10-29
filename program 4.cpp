#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    do {
        cout << "\n=== Simple Calculator Menu ===" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3):";
        cin >> choice;
	 switch (choice) {
	 case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
		  case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
		  case 3:
	     cout << "Exiting program... Goodbye!" << endl;
		  break;
		  default:
	     cout << "Invalid choice! Please select a valid option." << endl;
        }

    } while (choice != 5);
    return 0;
}

