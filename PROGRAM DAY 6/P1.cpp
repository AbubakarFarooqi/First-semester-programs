#include <iostream>
using namespace std;

// Function to find generation
string generation(int gen, char gender)
{

    //  First check on males
    if (gender == 'm' || gender == 'M')
    {

        if (gen == -3)
            return "Great Grandfather";
        else if (gen == -2)
            return "Grandfather";
        else if (gen == -1)
            return "Father";
        else if (gen == 0)
            return "Me !";
        else if (gen == 1)
            return "Son";
        else if (gen == 2)
            return "Grandson";
        else if (gen == 3)
            return "Great Grandson";

    } // End of gender == 'm' || gender == 'M'

    // check on Females
    if (gender == 'f' || gender == 'F')
    {

        if (gen == -3)
            return "Great Grandmother";
        else if (gen == -2)
            return "Grandmother";
        else if (gen == -1)
            return "mother";
        else if (gen == 0)
            return "Me !";
        else if (gen == 1)
            return "daughter";
        else if (gen == 2)
            return "Granddaughter";
        else if (gen == 3)
            return "Great Granddaughter";

    } //  end of gender == 'f' || gender == 'F'

} // end of generation

int main()
{

    int gen;     // Variable to store  genereation
    char gender; // Variable to store Gender

    // inputting generation
    cout << "Enter your Generation = ";
    cin >> gen;

    // inputting gender
    cout << "Enter Gender = ";
    cin >> gender;

    // Calling generation fucntion
    cout << generation(gen, gender);

} //..End of main