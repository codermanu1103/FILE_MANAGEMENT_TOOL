#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeToFile(const string& filename) {
    ofstream file(filename); // opens in write mode (overwrites)
    if (file.is_open()) {
        string data;
        cout << "Enter text to write (end with '#'): ";
        getline(cin >> ws, data, '#');
        file << data;
        file.close();
        cout << "Data written to " << filename << endl;
    } else {
        cout << "Failed to open file for writing.\n";
    }
}

void appendToFile(const string& filename) {
    ofstream file(filename, ios::app); // opens in append mode
    if (file.is_open()) {
        string data;
        cout << "Enter text to append (end with '#'): ";
        getline(cin >> ws, data, '#');
        file << data;
        file.close();
        cout << "Data appended to " << filename << endl;
    } else {
        cout << "Failed to open file for appending.\n";
    }
}

void readFromFile(const string& filename) {
    ifstream file(filename); // opens in read mode
    if (file.is_open()) {
        string line;
        cout << "Contents of " << filename << ":\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Failed to open file for reading.\n";
    }
}

int main() {
    string filename;
    int choice;

    cout << "=== File Management Tool ===\n";
    cout << "Enter file name: ";
    cin >> filename;

    do {
        cout << "\nSelect an option:\n";
        cout << "1. Write to File (Overwrite)\n";
        cout << "2. Append to File\n";
        cout << "3. Read from File\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        cin.ignore(); // to consume leftover newline

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFromFile(filename);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid option.\n";
        }
    } while (choice != 4);

    return 0;
}
