#include <iostream>
#include <fstream> // Required for file output stream
#include <string>
using namespace std;
int main() {
    int id;
    string title;
    char choice;
    // Logic: Opening file in Append mode so old data is not deleted
    ofstream out("book_records.txt", ios::app); 
    if (!out) {
        cout << "File opening failed!" << endl;
        return 0;
    }
    do {
        // Step: Get data from user (RAM)
        cout << "\nEnter Book ID: "; 
        cin >> id;
        cout << "Enter Book Title: "; 
        getline(cin, title);
        // Step: Write data out from RAM to Hard Disk using << operator
        out << id << " " << title << endl; 
        cout << "Record saved permanently! Add another? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y'); // Loop for multiple records
    // Step: Always close the file to release allocated memory
    out.close();   
    cout << "\nAll records saved successfully to 'book_records.txt'." << endl;
    return 0;
}
