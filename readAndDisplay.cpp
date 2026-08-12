#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile("mydata.txt");
    string fileline;

    if (inFile.is_open())
    {
        cout << "--- Content of mydata.txt ---" << endl;

        while (getline(inFile, fileline))
        {
            cout << fileline << endl;
        }

        inFile.close();
    } else
    {
        cerr << "Error: Unable to open file mydata.txt for reading." << std::endl;
    }
    return 0;
}
