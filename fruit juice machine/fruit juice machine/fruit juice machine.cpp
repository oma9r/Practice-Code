#include <iostream>
using namespace std;

class order
{
private: 
    int choose;
    double cost;
    double money;
public: 
    order() 
    {
        choose = cost = money = 0;
    };
    void message()
    {
        cout << "Welcome to our Machine juice!" << endl;
        cout << "1.Apple Juice" << endl 
            << "2.Orange Juice" << endl
            << "3.Mango Juice" << endl
            << "4.Fruit Juice" << endl
            << "5.Exit" << endl;
    };
    void decide()
    {
        int choose1;
        cout << "decide your order,please" << endl;
        cin >> choose1;
        if (choose1 == 5)
        {
            cout << "Thanks!" << endl;
            return;
        }
        else if (choose1 > 5)
        {
            cout << "Invalid order,try again" << endl;
            cout << "input your new decide" << endl;
            decide();
        }
        choose = choose1;
        show_cost(choose);
        
    };

    void show_cost(int choose)
    {
        switch (choose)
        {
        case 1: cout << "The cost is 1$" << endl;
            cost++;
            break;
        case 2: cout << "The cost is 1.2$" << endl;
            cost += 1.2;
            break;
        case 3: cout << "The cost is 0.9$" << endl;
            cost += 0.9;
            break;
        case 4: cout << "The cost is 1.3$" << endl;
            cost += 1.3;
            break;
        };
        accept();
    };

    void accept()
    {
        cout << "Please pay for this order" << endl;
        cout << "Input the money" << endl;
        cin >> money;
        
        if (money == cost)
        {
            cout << "Thanks for it!" << endl;
        }
        else if (money < cost)
        {
            cout << "Please check your money again" << endl;
            accept();
        }
        else if (money > cost)
        {
            money -= cost;
            cout << "Here's the rest: " << money << endl;
            cout << "Thanks for!" << endl;
        }
    };

    void release()
    {
        switch (choose)
        {
        case 1: cout << "Here's your order,Apple Juice.Enjoy it!" << endl; break;
        case 2: cout << "Here's your order,oRANGE Juice.Enjoy it!" << endl; break;
        case 3: cout << "Here's your order,Mango Lassi.Enjoy it!" << endl; break;
        case 4: cout << "Here's your order,Fruit punch.Enjoy it!" << endl; break;
        }
    }
};

int main()
{
    order o1;
    o1.message();
    o1.decide();
    o1.release();
    



    return 0;
};
 