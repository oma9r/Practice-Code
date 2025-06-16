#pragma once
#include <string>
using namespace std;


class video
{
private: 
	double prize;                          //prize of video
	int id;
public: 
	video();
	video(int id,string name, double duration_h,double prize,bool check);
	double get_prize();
	void set_prize(double prize);
	string name;
	double duration_h;
	bool check;
	void update(string name, double duration_h, double prize, bool check);
	video* next;
};
