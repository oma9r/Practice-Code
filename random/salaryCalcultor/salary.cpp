#include <iostream>
using namespace std;

class Salary
{
private:
    double selfRatio;
    double saveRatio;
    double familyRatio;
    double salary;
    double baseSalary;
    double restSalary;
    double reader;

public:
    Salary()
    {
        saveRatio = 0.0;
        familyRatio = 0.0;
        salary = 0;
        restSalary = 0;
        reader = 0;
    };

    void setSaveRatio(double save)
    {
        if (this->getSalary() < save)
        {
            cout << "try to enter lower input" << endl;
        }
        else
        {
            this->saveRatio = save;
        }
    }

    void setFamilyRatio(double family)
    {
        if (this->getSalary() < family)
        {
            cout << "try to enter lower input" << endl;
        }
        else
        {
            this->familyRatio = family;
        }
    }

    void setSalary(int salary)
    {
        this->salary = salary;
    }

    void setRestSalary(int restSalary)
    {
        this->restSalary = restSalary;
    }

    void setSelfRatio(double selfRatio)
    {
       
            this->selfRatio = selfRatio;
        
    }

    double getSaveRatio()
    {
        return this->saveRatio;
    }

    double getFamilyRatio()
    {
        return this->familyRatio;
    }

    double getSalary()
    {
        return this->salary;
    }

    double getRestSalary()
    {
        return this->restSalary;
    }

    double getSelfRatio()
    {
        return this->selfRatio;
    }

    void main(double inputSalary)
    {
        this->setSalary(inputSalary);

        this->baseSalary = inputSalary;

        this->readerData();

        this->printResult(this->calculate());
    }

    void readerData()
    {
        cout << "Enter the self money: ";
        cin >> reader;
        this->setSelfRatio(reader);
        cout << endl;

	reader = 0;

        cout << "Enter the family ratio: ";
        cin >> reader;
        this->setFamilyRatio(reader);
        cout << endl;

	reader = 0;

        // cout << "Enter the save ratio: ";
        // cin >> reader;
        // this->setSaveRatio(reader);
        // cout << endl;
    }

    bool calculate()
    {
	//cout << "Before do anything: " << this->getSalary() << endl;
        this->setSalary(this->getSalary() - this->getSelfRatio());
	//cout << "Before save the family: " << this->getSalary() << endl;

	//cout << "Family Money: " << this->getFamilyRatio() << endl;
        this->setSalary(this->getSalary() - this->getFamilyRatio());
	//cout << "Family Money: " << this->getFamilyRatio() << endl;

	//cout << "Before save the rest: " << this->getSalary() << endl;
        this->setSaveRatio(this->getSalary());
	//cout << "The rest after: " << this->getSaveRatio() << endl;
	//cout << "The salary after: " << this->getSalary() << endl;
        this->setSalary(this->getSalary() - this->getSaveRatio());
	//cout << "The salary after the rest sub: " << this->getSalary() << endl;

        if (this->getSalary() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    void printResult(bool result)
    {
        if (result)
        {
            cout << "Your Salary: " << this->baseSalary << endl;
            cout << "Your Self Money: " << this->getSelfRatio() << " -- Ratio: " << this->getSelfRatio() / this->baseSalary << "%"  << endl;
            //cout << "Rest: " << this->baseSalary - this->getSelfRatio()  << endl;
            cout << "Your Family Money: " << this->getFamilyRatio() << " -- Ratio: " << this->getFamilyRatio() / this->baseSalary << "%" << endl;
            //cout << "Rest: " << this->baseSalary - this->getFamilyRatio() << endl;
            cout << "Rest Money of the Salary: " << this->getSaveRatio() << " -- Ratio: " << this->getSaveRatio() / this->baseSalary << "%" << endl;
        }

        else
        {
            cout << "Sorry, we got a wrong data..." << endl;
        }
    };
};

int main()
{

    Salary s1;

    double salary = 0;

    cout << "Enter the salary: ";
    cin >> salary;
    cout << endl;

    s1.main(salary);

    return 0;
}