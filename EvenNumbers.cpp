#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream inputFile(argv[1]);

    if(inputFile.is_open())
    {
        int iInput;

        string sInput;

        // read the input file line by line
        while(getline(inputFile,sInput))
        {
            istringstream ssInput(sInput);

            ssInput >> iInput;

            if(iInput % 2 == 0)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }
    else
    {
        cout << "Error opening input file" << endl;
    }

    return 0;
}
