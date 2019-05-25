// Experiment3 Problem no. 2 //

#include <iostream>

using namespace std;

int main()
{
	int ProvinceA[7];
	int ProvinceB[7];
	int ProvinceC[7];
	
	for(int i =0; i<7; i++)
	{
		cout << "Province A, Day " << i+1 << ": "; 
		cin >> ProvinceA[i];
	}
	for(int i =0; i<7; i++)
	{
		cout << "Province B, Day " << i+1 << ": "; 
		cin >> ProvinceB[i];
	}
	for(int i =0; i<7; i++)
	{
		cout << "Province C, Day " << i+1 << ": "; 
		cin >> ProvinceC[i];
	}
	
	
	for(int i=0; i<7; i++)
	{
		cout << "Province A, Day 1 = " << ProvinceA[i] << endl;
	}
	for(int i=0; i<7; i++)
	{
		cout << "Province B, Day 1 = " << ProvinceB[i] << endl;
	}
	for(int i=0; i<7; i++)
	{
		cout << "Province C, Day 1 = " << ProvinceC[i] << endl;
	}
	
	
	return 0;
}

