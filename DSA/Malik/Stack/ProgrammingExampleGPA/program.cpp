#include "stackGPA.h"
using namespace std;

int main()
{
	double GPA;
	double highestGPA;
	string name;

	stackGPA stack(100);

	ifstream infile;

	infile.open("Grades.txt");

	if(!infile)
	{
		cout << "The file does'nt exist" << endl;
		return 1;
	}

	cout << fixed << showpoint;
	cout << setprecision(2);

	infile >> GPA >> name;

	highestGPA = 0;

	while (infile)
	{
		if(GPA > highestGPA)
		{
			stack.initilize(100);
			stack.push(name);

			highestGPA = GPA;
		}

		else if(GPA == highestGPA)
			stack.push(name);

		infile >> GPA >> name;
	}


	cout << "Highest GPA: " << highestGPA << endl;

	stack.printNames();

	cout << endl;

return 0;
};	
			

	








