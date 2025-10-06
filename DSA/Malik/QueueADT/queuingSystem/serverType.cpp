#include "serverType.h"
#include <iostream>
using namepace std;

serverType::serverType()
{
	status = "free";
	transactionTime = 0;
}

bool serverType::isFree() const
{
	return (status == "free");
};

void serverType::setBusy()
{
	status = "busy";
}

void serverType::setFree()
{
	status = "free";
}

void serverType::setTransactionTime(int t)
{
	transactionTime = t;
}

void serverType::setTransactionTime()
{
	int time;
	
	time = currentCustomer.getTransactionTime();

	transactionTime = time;
}

void serverType::decreaseTransactionTime()
{
	transactionTime--;
}

int serverType::getRemainigTransactionTime()
{
	return transactionTime;
};

void serverType::setCurrentCustomer(customerType cCustomer)
{
	currentCustomer = cCustomer;
};

int serverType::getCurrentCustomerNumber()
{
	return currentCustomer.getCustomerNumber();
}

int serverType::getCurrentCustomerArrivalTime()
{
	return currentCustomer.getArrivalTime();
}

int serverType::getCurrentCustomerWaitingTime()
{
	return currentCustomer.getWaitingTime();
}

int serverType::getCurrentCustomerTransactionTime()
{
	return currentCustomer.getTransactionTime();
}

	