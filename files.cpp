#include <fstream>
#include <iostream>

using namespace std;

int main() { string filename = "mytextfile.txt";
    ofstream textfile(filename);
    textfile << "hello Ysn-Linux\n1\n\n\n\n2\n";
    textfile.close();

    ifstream readstream(filename);

    string buffer;
    while (getline(readstream, buffer)) {
        cout << buffer << endl;
    }

    readstream.close();
}
