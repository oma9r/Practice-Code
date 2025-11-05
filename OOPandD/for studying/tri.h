#include <iostream> 
using namespace std;
#include <string.h> 

class tri{

 private: 
 int l1,l2,l3;
 public: 
 tri();
 ~tri();
 void set_length(int x, int y, int z);
 void get_answer();

};

tri::tri() { l1 = l2 = l3 = 0; };
tri::~tri(){ l1 = l2 = l3 = 0; };
void tri::set_length(int x,int y,int z){
    l1 = x;
    l2 = y;
    l3 = z;

}
void tri::get_answer(){
    int xy,yz,zx;
    xy = l1 - l2;
    abs(xy);
    yz = l2 - l3;
    abs(yz);
    zx = l3 - l1;
    abs(zx);

if((xy == yz) && (yz == zx)) { cout << "Eq";}

else if((xy==yz)&&(yz!=zx)) { cout << "Is";}
else if((yz==zx)&&(zx!=xy)) { cout << "Is";}
else if((zx==xy)&&(xy!=yz)) { cout << "Is";}

else {cout << "Sca";};

}

