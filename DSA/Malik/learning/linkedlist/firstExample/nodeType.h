#include <iostream>
using namespace std;

class nodeType
{
	private:
	int info;
	nodeType *link;

	public: 
		void setInfo(int info);
		int getInfo();
		void setLink(nodeType *link);
		nodeType *getLink();
};


