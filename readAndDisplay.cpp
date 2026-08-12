#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ifstream inFile("mydata.txt");
    string fileline;
    int lineCount = 0;

    if (inFile.is_open())
    {
        cout << "--- Content of mydata.txt ---" << endl;

        while (getline(inFile, fileline))
        {
            lineCount++;
        }
        cout << lineCount;
        inFile.close();
    } else
    {
        cerr << "Error: Unable to open file mydata.txt for reading." << std::endl;
    }
    return 0;
}
