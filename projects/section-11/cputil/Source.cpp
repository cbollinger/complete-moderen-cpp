#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;
using namespace filesystem;

int main() {
    path current(current_path());
    current /= "../projects/section-11/cputil";
    current_path(current);

    path source(current_path());
    source /= "Source.cpp";

    path dest(current_path());
    dest /= "Copy.cpp";

    ifstream input{ source };
    if(!input) {
	cout << "Source file not found" << endl;
    }

    ofstream output { dest };
    string line;
    while(!getline(input, line).eof()) {
	output << line << endl;
    }
    input.close();
    output.close();

    cout << "all file operations done..." << endl;
    return 0;
}
