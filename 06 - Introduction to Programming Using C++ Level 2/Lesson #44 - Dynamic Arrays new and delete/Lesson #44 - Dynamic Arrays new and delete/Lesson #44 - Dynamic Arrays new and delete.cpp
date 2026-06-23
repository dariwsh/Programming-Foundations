
#include <iostream>
using namespace std;
int main()
{
	// varible simple 1,2,3 
	//int *ptr = new int;
	//*ptr = 100;
	//cout<< *ptr;

	// varible 100 item
	//int num ;
	//float *ptrx;
	//cout << "Enter number : "<< endl;
	//cin >> num;
	//ptrx = new float [num];
	
	// app simple student
	/*
	* 	int NumberOfStudent;
	cout << "Enter total Number of Students: ";
	cin >> NumberOfStudent;

	float *ptr;
	ptr = new float[NumberOfStudent];
	cout<< "Enter Grades Of Students."<< endl;
	for (int i = 0; i < NumberOfStudent; i++)
	{
		cout << "Student " << i + 1 << " : " ;
		cin >> *(ptr + i );
		cout << endl;
	}

	cout << "\nDisplaying grades of students." << endl;

	for (int i = 0; i < NumberOfStudent; i++)
	{
		cout << "Student " << i + 1 << " : " << *(ptr + i)<<endl;
	}

	delete [] ptr;
	return 0;


	delete ptr;
	*/

	// app Calculate Average
	/*
	* 
	int NumberOfStudent;
	double Avg;
	int sum=0;
	cout << "Enter total Number of Students: ";
	cin >> NumberOfStudent;

	float* ptr;
	ptr = new float[NumberOfStudent];
	cout << "Enter Grades Of Students." << endl;
	for (int i = 0; i < NumberOfStudent; i++)
	{
		cout << "Student " << i + 1 << " : ";
		cin >> *(ptr + i);
		sum += *(ptr +i);
	}

	cout << "\nDisplaying grades of students." << endl;

	for (int i = 0; i < NumberOfStudent; i++)
	{
		cout << "Student " << i + 1 << " : " << *(ptr + i) << endl;
	}

	Avg = double(sum) / double(NumberOfStudent);
	cout << "Average = " << Avg;
	delete[] ptr;
	return 0;


	delete ptr;
	*/

	// app find maxnum
	int NumberOfStudent;
	
	cout << "Enter total Number of Students: ";
	cin >> NumberOfStudent;

	float* ptr;
	ptr = new float[NumberOfStudent];
	cout << "Enter Grades Of Students." << endl;
	for (int i = 0; i < NumberOfStudent; i++)
	{
		cout << "Student " << i + 1 << " : ";
		cin >> *(ptr + i);
	}
	// نفترض أن أول درجة هي الأكبر

	float max = ptr[0];
	for (int i = 1; i < NumberOfStudent; i++)
	{
		if (ptr[i] > max)
		{
			max = ptr[i];
		}
	}

	cout << "\nDisplaying grades of students." << endl;

	for (int i = 0; i < NumberOfStudent; i++)
	{
		cout << "Student " << i + 1 << " : " << *(ptr + i) << endl;
	}
	cout << max;
	delete[] ptr;
	return 0;


	delete ptr;

}


