// Experiment3 Problem no. 1 //

#include <iostream>

using namespace std;

int main()
{
	int NumOfElements = 10;
	int Smallest, Largest;
	double Average = 0.0;
	int num[num_of_elements];
	
	for(int i=0; i<NumOfElements; i++)
	{
		cout << "Enter value for number " << i+1 << ": "; 
		cin >> num[i];
		
		if(i == 0){
			Smallest = num[i];
			Largest = num[i];
			Average += num[i]/num_of_elements;
		}
		else
		{
			if(Smallest > num[i])
			{
				Smallest = num[i];
			}
			if(Largest < num[i] )
			{
				Largest = num[i];
			}
			Average += num[i]/num_of_elements;
		}
	}
	
	cout << "The Smallest Number is: " << smallest << endl;
	cout << "The Largest Number is: " << largest << endl;
	cout << "The Average Number is: " << average << endl;
	
	return 0;
}

