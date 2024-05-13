#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
private:
    string filename;

public:
    FileHandler(const string& fname) : filename(fname) {}

    void writeToFile(const string& data) {
        ofstream outfile(filename);
        if (!outfile.is_open()) {
            cerr << "Failed to open the file for writing." << endl;
            return;
        }
        outfile << data << endl;
        cout << "Data written to file successfully." << endl;
        outfile.close();
    }

    void readFromFile() {
        ifstream infile(filename);
        if (!infile.is_open()) {
            cerr << "Failed to open the file for reading." << endl;
            return;
        }
        string line;
        while (getline(infile, line)) {
            cout << line << endl;
        }
        infile.close();
    }
};

int main() {
    FileHandler file("example.txt");
    file.writeToFile("Hello, File Handling in C++ using OOP!");
    file.readFromFile();

    return 0;
}
