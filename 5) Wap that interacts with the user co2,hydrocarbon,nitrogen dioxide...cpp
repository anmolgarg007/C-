/*
Write a program that interacts with the user like this:(1) Carbon monoxide(2) Hydrocarbons(3) Nitrogen oxides(4) Nonmethane hydrocarbonsEnter pollutant number>> 2Enter number of grams emitted per mile>> 0.35Enter odometer reading>> 40112Emissions exceed permitted level of 0.31 grams/mile.Use the table of emissions limits below to determine the appropriate message.First 50,000 MilesSecond 50,000 Milescarbon Monoxidemonoxide 3.4 grams/mile4.2 grams/milehydrocarbons 0.31 grams/mile 0.39 grams/milenitrogen oxides0.4 grams/mile 0.5 grams/mileNonmethanehydrocarbons0.25 grams/mile 0.31 grams/mile*/


#include <iostream>		// Preprocessor directives
using namespace std;

int main ()			// The program starts here
{
	// Declaring variables
	
	int pollutant_number(0);
	int odometer_reading(0);
	double grams_emitted_per_mile(0);

	//Information displayed to the user
	cout << "Input the number of the pollutant you want to choose." << endl;
	
	cout << "\n" << endl;
	
	cout << "(1) Carbon monoxide" << endl;
	cout << "(2) Hydrocarbons" << endl;
	cout << "(3) Nitrogen oxides" << endl;
	cout << "(4) Non-methane hydrocarbons" << endl;
	
	cout << "\n" << endl;

	cout << "Enter pollutant number=> " << pollutant_number << endl;
	cin >> pollutant_number;
	
	cout << "Enter number of grams emitted per mile=> " << grams_emitted_per_mile << endl;
	cin >> grams_emitted_per_mile;

	cout << "Enter odometer reading=> " << odometer_reading << endl;
	cin >> odometer_reading;

	cout << "Emissions";		// This line needs to be finished

	
	if (pollutant_number == 1)		// Supossed to confirm that user choose the correct pollutant
	{
		cout << "You have selected Carbon monoxide." << endl;
	}
		if (odometer_reading <= 50,000)		// Seperates odometer readiing values
		{
			switch ((int) grams_emitted_per_mile*100)
			{
			case 341:
				cout << "Emissions exceed permitted level of 3.4 grams/mile" << endl;
				break;
			case 1:
				cout << "Emissions do not exceed permitted level of 3.4 grams/mile" << endl;
				break;
			}
		}
		else if (odometer_reading > 50,000)		// Seperates odometer readiing values
		{
				switch ((int) grams_emitted_per_mile*100)
				{
				case 421:
					cout << "Emissions exceed permitted level of 4.2 grams/mile" << endl;
					break;
				case 1:
					cout << "Emissions do not exceed permitted level of 4.2 grams/mile" << endl;
					break;
				}
		}

		
	else if (pollutant_number == 2)		// Supossed to confirm that user choose the correct pollutant
	{
		cout << "You have selected Hydrocarbons." << endl;
	}
		if (odometer_reading <= 50,000)		// Seperates odometer readiing values
		{
			switch ((int) grams_emitted_per_mile*100)
			{
			case 32:
				cout << "Emissions exceed permitted level of 0.31 grams/mile" << endl;
				break;
			case 1:
				cout << "Emissions do not exceed permitted level of 0.31 grams/mile" << endl;
				break;
			}
		}
		else if (odometer_reading > 50,000)		// Seperates odometer readiing values
		{
				switch ((int) grams_emitted_per_mile*100)
				{
				case 40:
					cout << "Emissions exceed permitted level of 0.39 grams/mile" << endl;
					break;
				case 1:
					cout << "Emissions do not exceed permitted level of 0.39 grams/mile" << endl;
					break;
				}
		}
	

	else if (pollutant_number == 3)		// Supossed to confirm that user choose the correct pollutant
	{
		cout << "You have selected Nitrogen oxides." << endl;
	}
		if (odometer_reading <= 50,000)		// Seperates odometer readiing values
		{
			switch ((int) grams_emitted_per_mile*100)
			{
			case 41:
				cout << "Emissions exceed permitted level of 0.4 grams/mile" << endl;
				break;
			case 1:
				cout << "Emissions do not exceed permitted level of 0.4 grams/mile" << endl;
				break;
			}
		}
		else if (odometer_reading > 50,000)		// Seperates odometer readiing values
		{
				switch ((int) grams_emitted_per_mile*100)
				{
				case 51:
					cout << "Emissions exceed permitted level of 0.5 grams/mile" << endl;
					break;
				case 1:
					cout << "Emissions do not exceed permitted level of 0.5 grams/mile" << endl;
					break;
				}
		}
	
	
	else if (pollutant_number == 4)		// Supossed to confirm that user choose the correct pollutant
	{
		cout << "You have selected Carbon monoxide." << endl;
	}
		if (odometer_reading <= 50,000)		// Seperates odometer readiing values
		{
			switch ((int) grams_emitted_per_mile*100)
			{
			case 26:
				cout << "Emissions exceed permitted level of 0.25 grams/mile" << endl;
				break;
			case 1:
				cout << "Emissions do not exceed permitted level of 0.25 grams/mile" << endl;
				break;
			}
		}
		else if (odometer_reading > 50,000)		// Seperates odometer readiing values
		{
				switch ((int) grams_emitted_per_mile*100)
				{
				case 32:
					cout << "Emissions exceed permitted level of 0.31 grams/mile" << endl;
					break;
				case 1:
					cout << "Emissions do not exceed permitted level of 0.31 grams/mile" << endl;
					break;
				}
		}

return 0;	// Ends Program
}