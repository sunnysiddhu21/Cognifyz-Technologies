#include <bits/stdc++.h>

using namespace std;

int main() {
    string sourceFileName, destinationFileName;
    cout << "Enter the name of the source file: ";
    cin >> sourceFileName;
    cout << "Enter the name of the destination file: ";
    cin >> destinationFileName;

    
    ifstream sourceFile(sourceFileName);
    if (!sourceFile.is_open()) {
        cerr << "Error: Unable to open source file '" << sourceFileName << "' for reading.\n";
        return 1;
    }

    
    ofstream destinationFile(destinationFileName);
    if (!destinationFile.is_open()) {
        cerr << "Error: Unable to open destination file '" << destinationFileName << "' for writing.\n";
        sourceFile.close();  
        return 1;
    }

    
    char ch;
    while (sourceFile.get(ch)) {
        destinationFile.put(ch);
    }

   
    sourceFile.close();
    destinationFile.close();

    cout << "File copy successful!\n";

    return 0;
}
