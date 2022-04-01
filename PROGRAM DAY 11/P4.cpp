#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
bool Extraction_of_String(string source);
string input;
void Reading_From_File()
{
    fstream file("data.txt", ios::in);
    bool flag = 1;
    while (!file.eof())
    {
        getline(file, input);
        if (flag == 1)
            flag = Extraction_of_String(input);
        else
        {

            Extraction_of_String(input);
        }
    }

    if (flag == 1)
        cout << "What... why did you make this?" << endl;
    file.close();
}
bool Extraction_of_String(string source)
{

    for (int i = 0; i < source.length(); i++)
    {

        if (source[i] == '"')
        {

            int j = i + 1;
            cout << "\"";
            while (source[j] != '"')
            {
                cout << source[j];
                j++;
            }
            cout << "\"" << endl;
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    Reading_From_File();

} //..End of main