#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int  num=0;
	char Choice;
	bool Flag = true;
	int quiz[10],mid[10],final[10];
	do {
		cout<<"==================================="<<endl;
		cout<<"                 MENU             "<<endl; 
		cout<<"==================================="<<endl;
		cout << " 1. Input student records " << endl;
		cout << " 2. View all student records " << endl;
		cout << " 3. Exit " << endl;
		cout << " Select menu : ";
		cin >>Choice;
		////////////////////////////////////////

		
		if (Choice == '1')
		{	
			cout << " Input Number of student : ";
			cin >> num;
			int *score = new int[num];

			for(int i=0;i<num;i++)
			{   cout << "Number "<< i+1 << endl;
				cout << "Input Quiz  : ";
				cin >> quiz[i];
				cout << "Input Midterm  : ";
				cin >> mid[i];
				cout << "Input Final  : ";
				cin >> final[i];
		}

		
		}
		else if (Choice == '2'){
			cout << "--------------------------------------------" << endl;
			cout << "StdID" << setw(5) << "" << "Quiz" << setw(5) << "" << "Midterm" << setw(5) << "" << "Final " << "" << endl;
			for (int i = 0; i<num;i++)
			{cout << i+1 <<setw(10) << "" << quiz[i] << setw(10) << "" << mid[i] << setw(10) << ""  << final[i] << endl;
			}
		}
		else if (Choice == '3') {
			Flag = false;
		}
		else{
			cout << "not process.\n"<< endl;
		}
	}while (Flag);
	cout << "\n...Exit Program...\n";
	return 0;
}