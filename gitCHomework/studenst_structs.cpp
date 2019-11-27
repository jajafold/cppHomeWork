#include <stdio.h>
#include <string>

using namespace std;

struct Student
	{
	 
	string name;
        string surname;
        int* dateOfBirth;
        int* grades;

        
        Student(){
		~Student();
        }

        Student(string name, string surname, int* dateOfBirth, int* grades){
            name = name;
            surname = surname;
            dateOfBirth = dateOfBirth;
            grades = grades;
        }
	}

int main(){

	Student student_1("Alex", "Butler", {12, 6, 2002}, {4, 4, 5, 3, 4});

}
