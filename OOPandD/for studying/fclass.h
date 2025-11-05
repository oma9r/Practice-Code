#pragma once

class fclass {

private:
	int width, length;


public:
	fclass(); // width = length = 0;
	~fclass(); // width = 0 = length ; 
	void set_fun(int x, int y); // x = width , y = length
	int get_area(); // return length * width;
	int get_pri(); // return 2*(Length + width);

};


fclass::fclass()
{
    length = width = 0;
};
void fclass::set_fun(int x, int y)
{
    width = x;
    length = y;
};

int fclass::get_area()
{
    return length * width;
};
int fclass::get_pri()
{
    return 2 * (length + width);
};
fclass::~fclass()
{
    width = length = 0;
};
