/***********************************************************************************************************************************
Author: Matthew Goelzer
Date: 2/12/19
Description: Provides menu of different tissue culture dishes or plates and gets desired dish or plate and number needed. 
			 Then calcualtes the reagents amount needed for an RNAiMax Transfection Experiment
************************************************************************************************************************************/
#include "iMaxCalc.h"
#include <iostream>


int selection;

iMaxCalc::iMaxCalc()
{
	int numPlates = 1;
}

void iMaxCalc::setNumPlates(int platesNeeded)
{
	numPlates = platesNeeded;
}

int iMaxCalc::getNumPlates()
{
	return numPlates;
}


int iMaxCalc::plateMenu()
{
	//prints switch menu options and gets plate desired
	std::cout << "Dish options:\n"
		<< "1: 10cm Dish\n"
		<< "2: 6-well Plate\n"
		<< "3: 15cm Dish" << std::endl;
	std::cin >> selection;

	//input testing
	while (selection != 3 && selection != 2 && selection != 1)
	{
		std::cout << "Incorrect Input. Select one of the dish options between 1-3" << std::endl;
		std::cout << "Dish options:\n"
			<< "1: 10cm Dish\n"
			<< "2: 6-well Plate\n"
			<< "3: 15cm Dish" << std::endl;
		std::cin >> selection;
	}


	//gets number of plates 
	std::cout << "Enter the desired number of plates/dishes." << std::endl;
	std::cin >> numPlates;

return 0;
}

//calculates reagent amounts for type of dish and number of dishes
double iMaxCalc::reagentCalculater()
{
	switch (selection)
	{
	//10cm dish
	case 1:  
		std::cout << "RNA iMAx: " << numPlates * dish9cm * rnaIMax << std::endl;
		std::cout << "Alpha-Mem: " << numPlates * dish9cm * alphaMem << std::endl;
		std::cout << "FBS: " << numPlates * dish9cm * fbs << std::endl;
		std::cout << "PenStrep: " << numPlates * dish9cm * penStrep << std::endl;
		break;
	//6-well plate
	case 2:
		std::cout << "RNA iMAx per well: " << numPlates * well6 * rnaIMax << std::endl;
		std::cout << "Alpha-Mem per well: " << numPlates * well6 * alphaMem << std::endl;
		std::cout << "FBS per well: " << numPlates * well6 * fbs << std::endl;
		std::cout << "PenStrep per well: " << numPlates * well6 * penStrep << std::endl;
		
		//for total amount in 6-well plate
		std::cout << "Total RNA iMAx: " << numPlates * totalWell6 * rnaIMax << std::endl;
		std::cout << "Total Alpha-Mem: " << numPlates * totalWell6 * alphaMem << std::endl;
		std::cout << "Total FBS: " << numPlates * totalWell6 * fbs << std::endl;
		std::cout << "Total PenStrep: " << numPlates * totalWell6 * penStrep << std::endl;
		break;
	case 3:
		std::cout << "RNA iMAx: " << numPlates * dish9cm * rnaIMax << std::endl;
		std::cout << "Alpha-Mem: " << numPlates * dish9cm * alphaMem << std::endl;
		std::cout << "FBS: " << numPlates * dish9cm * fbs << std::endl;
		std::cout << "PenStrep: " << numPlates * dish9cm * penStrep << std::endl;
		break;
	}
	return 0.0;
}


int main()
{
	iMaxCalc dish;
	dish.plateMenu();
	dish.reagentCalculater();
	std::cin.ignore();
	std::cin.get();
	return 0;
}