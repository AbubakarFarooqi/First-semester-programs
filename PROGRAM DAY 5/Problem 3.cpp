#include<iostream>
#include<string.h>
using namespace std;

/*Jack is a teacher who needs a program that helps him to compile 8th class results. He has five subjects
(English, Maths, Chemistry, Social Science, and Biology) marked in detail. Program asks the user to enter
five subjects' marks, including student name and displays the total marks, percentage, grade (by
percentage), and student name. Every subject has a total of 100 marks
*/

int main()
{
    string st_name; // variable to store student name
    
    // variable to store student marks in five subjects
    int st_english,st_math,st_chem,st_ss,st_bio;
    
    // input of students name
    cout << "Enter Student Name = ";
    cin >> st_name;
    
    // input of student marks
    
    cout << "Enter marks in English = ";
    cin >> st_english;
    
    cout << "Enter marks in Math = ";
    cin >> st_math;
    
    cout << "Enter marks in Social Science = ";
    cin >> st_ss;
    
    cout << "Enter marks in Chemistry = ";
    cin >> st_chem;
    
    cout << "Enter marks in Biology = ";
    cin >> st_bio;
    
    // finding total marks and percentage
    
    int total_marks; // variable to store Total marks
    float percentage; // variable to store percntage of marks
    
    total_marks = st_english + st_math + st_chem + st_ss + st_bio;
    percentage = (total_marks/500.0) * 100.0;
    
    // Selection of Grade
    
    string grade; // varaible to store grade
    
    if ( percentage > 90 && percentage <=100)
    	grade = "A+";
    	
    if ( percentage > 80 && percentage <=90)
    	grade = "A";
    	
    if ( percentage > 70 && percentage <=80)
    	grade = "B+";
    	
    if ( percentage > 60 && percentage <=70)
    	grade = "B";
    	
    if ( percentage > 50 && percentage <=60)
    	grade = "C";
    	
    if ( percentage >= 40 && percentage <=50)
    	grade = "D";
    	
    if ( percentage < 40)
    	grade = "F";
    	
    // Output on console
    
    system ("cls");
    
    cout << "Student Name: " << st_name << endl;
    cout << "Total Marks: " << total_marks << endl;
    cout << "Obtained Perventage: " << percentage<<"%" << endl;
    cout << "Obtained Grade: " << grade;
    	
    
}// End of main
