#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main()
{
       

	int N;

	cout << "enter N: ";

	cin >> N;

	 int num_rows = N;
    	int num_cols = 3;
    	vector<vector<int>> arr(num_rows, vector<int>(num_cols, 0));

	int round = 0;

	for(int i=0; i < N;i++){

		
		round = 0;
		cin >> arr[i][0];
		cin >> arr[i][1];
		cin >> arr[i][2];

		if(arr[i][0] == arr[i][1] || arr[i][1] == arr[i][2] || arr[i][0] == arr[i][2]){

			cout << round << endl;
			cout << "===========" << endl;
			arr[i][0] = arr[i][1] = arr[i][2] = 0;
			continue;

		}

		do{


			sort(arr[i].begin(),arr[i].end());
			
			--arr[i][2];
			++arr[i][0];

			++round;


		}while(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] == arr[i][2]);

		cout << arr[i][0]  << " " << arr[i][1] << " " << arr[i][2] << endl;

		cout << round << endl;
		cout << "===========" << endl;
		

	} 


        


        return 0;
}
