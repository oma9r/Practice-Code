#include "Video.h"

video::video()
{
	video::id = 0;
	video::prize = 0;
	video::name = "";
	video::duration_h = 0;
	video::check = false;
	video::next = NULL;
};

video::video(int id, string name, double duration_h, double prize,bool check)
{
	video::id = id;
	video::name = name;
	video::duration_h = duration_h;
	video::prize = prize;
	video::check = check;
};

double video::get_prize()
{
	return video::prize;
};

void video::set_prize(double prize)
{
	video::prize = prize;
};

void video::update(string name, double duration_h, double prize, bool check)
{
	video::name = name;
	video::duration_h = duration_h;
	video::prize = prize;
	video::check = check;
};
