#include "nodeType.h"



void nodeType::setInfo(int info)
{
	this->info = info;
};

int nodeType::getInfo()
{
	return this->info;
};

void nodeType::setLink(nodeType* link)
{
	this->link = link;
};

nodeType* nodeType::getLink()
{
	
	return this->link;
};

//=============================================

