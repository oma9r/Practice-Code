#include <iostream>
#include <vector>
using namespace std;

class MyCalendar {
public:
     vector <pair <int,int>> vt;
     int count;
    MyCalendar() {

       vt.resize(1000);
        count = 0;
        for(int i=0; i < vt.size();i++){
            vt[i].first = 0;
            vt[i].second = 0;
        }
        
    }
    
    bool book(int startTime, int endTime) {
	
	cout << "====================================" << endl;

        if(startTime > vt[count].first && startTime < vt[count].second && vt[count].first != 0){

		cout << "it will fail!" << endl;
		cout << "startTime = " << startTime << " endTime = " << endTime << endl;
		cout << "current startTime = " << vt[count].first << " current endTime = " << vt[count].second << endl;  
	 return false;
	}

        else if(startTime >= vt[count].second){
            ++count;
            vt[count].first = startTime;
            vt[count].second = endTime;

		
		cout << "it will success!" << endl;
		cout << "startTime = " << startTime << " endTime = " << endTime << endl;
		cout << "current startTime = " << vt[count].first << " current endTime = " << vt[count].second << endl;

            return true;
        }

		cout << "it will fail! - anyway" << endl;

        return false;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */

void printPairArray(vector <pair <int,int>> &vt){

	cout << "Pair: " << endl;

	for(int i=0; i < vt.size();i++){

		if(vt[i].first == 0) continue;
		cout << vt[i].first << " " << vt[i].second << endl;
	}

	cout << endl;

}











int main()
{
	MyCalendar mc;

	mc.book(10,20);
	mc.book(15,25);
	mc.book(20,30);
        
	printPairArray(mc.vt);

        


        return 0;
}
