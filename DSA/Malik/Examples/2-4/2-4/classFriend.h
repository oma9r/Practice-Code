#pragma once

class classFriend
{
    public: 
		void print();
		void setX(int a);
		friend void friendFunc(classFriend object1);
    private:
		int x;

};
