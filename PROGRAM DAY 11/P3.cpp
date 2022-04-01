#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
char letter[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
string morseCode[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-.-.-.-"};
int Index_of_MorseCode_Array(char source)
{
    for (int i = 0; i < 27; i++)
    {
        if (source == letter[i])
            return i;
    }
}
void Convet_MorseCode(string source)
{
    int i = 0;
    fstream file("morsecode.txt", ios::app);
    while (source[i] != '\0')
    {
        int index;
        char temp =
            source[i];
        index = Index_of_MorseCode_Array(temp);
        file << morseCode[index];
        i++;
    }
    file.close();
}
int main()
{
    Convet_MorseCode("f mueller");
} //..End of main
