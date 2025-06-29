#include <iostream>
#include <iomanip>
#include "GradeBook.h"
using namespace std;


GradeBook::GradeBook(string name, const int gradesArray[])
 {
	setCourseName(name);

	for(int grade=0;grade < students;++grade)
	{
		grades[grade] = gradesArray[grade];
	}
}

void GradeBook::setCourseName(string name)
{
	courseName = name;
}

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}

void GradeBook::processGrades()
{
	outputGrades();
	
	cout << "\nClass average is " << setprecision(2) << fixed << getAverage() << "\nLowest grade is " << getMinimum() << "\nHighest grade is " << getMaximum() << endl;

	outputBarChart();
}

int GradeBook::getMinimum()
{
		int lowGrade = 100;

		for(int grade = 0; grade < students;++grade)
		{
			if(grades[grade] < lowGrade)
						lowGrade = grades[grade];
		}

	return lowGrade
}

int GradeBook::getMaximum()
{
		int highGrade = 0;
	
		for(int grade = 0; grade < students; ++grade)
		{
			if(grades[grade] > highGrade)
						highGrade = grades[grade];
		}

	return highGrade;
}

double GradeBook::getAverage()
{
		int total = 0;

		for(int grade = 0; grade < students; ++grade)
		{
			total += grades[grade];
		}
	return static_cast <double> (total)/students;
}

void GradeBook::outputBarChart()
{
	cout << "\nGrade distribution:" << endl;

	const int frequencySize = 11;
	int frequency[frequencySize] = {};

	
	for(int grade = 0; grade < students; ++grade)
	{
		++frequency[grades[grade]/students];

		for(int count = 0; count < frequencySize ; ++count)
			{
				if(count == 0)
						cout << " 0-9: ";
				else if(count == 10)
						cout << " 100: ";
				else
					cout << count * 10 << "-" << (count *10) + 9 << ": ";

					for(int stars = 0; stars < frequency[count]; ++stars)
					{
						cout << '*';
					}
				cout << endl;
			}	
	}
}

void GradeBook::outputGrades()
{
	cout << "\nThe grades are:\n\n";

	for(int student = 0; student < students; ++student)
	{
		cout << "Student " << setw(2) << student + 1 << ": " << setw(3) << grades[student] << endl;
}

		
	
