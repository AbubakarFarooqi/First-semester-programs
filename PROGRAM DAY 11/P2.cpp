#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
string input;
void Reading_From_File()
{
    fstream file("alphabets.txt", ios::in);
    getline(file, input);
    file.close();
}
string missingLetter()
{
    string missing = "";
    for (int i = 97; i <= 122; i++)
    {
        bool flag = 1;
        for (int j = 0; j < input.length(); j++)
        {
            int chk = input[j];

            if (chk == i)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            missing = missing + char(i);
    }
    return missing;
}
void writingToFile(string output)
{
    fstream file("alphabets.txt", ios ::app);
    file << output;
    file.close();
}
int main()
{
    Reading_From_File();
    writingToFile(missingLetter());

} //..End of main