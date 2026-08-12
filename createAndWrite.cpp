#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream outtFile;

    outtFile.open("mydata.txt");

    if (outtFile.is_open())
    {
        outtFile << "Hello, File Handling!" << endl;
        cout << "Successfully wrote data to mydata.txt";
    } else
    {
        cerr << "Unable to open file mydata.txt" << endl;
    }
    return 0;
}
