#ifndef IMAXCALC_H
#define IMAXCALC_H
#include <string>

class iMaxCalc
{
private:
	double well6 = 1.0;       //one well in 6-well plate 
	double totalWell6 = 6.0; //conversion rate for total 6-well plate
	double dish9cm = 6.0; //conversion rate from one well in 6-well to 9cm dish
	double rnaIMax = 3;      //3ul of RNAiMax reagent for one well in 6-well
	double alphaMem = 150;   //150ul of aplpha-MEM for one well in 6-well
	double fbs = 100;        //100ul of FBS for one well in 6-well
	double penStrep = 10;    //10ul of Penicillin/Streptomycin for one well in 6-well
	int numPlates;
	
	

public:
	iMaxCalc();
	iMaxCalc(int platesNeeded);
	int plateMenu();
	double reagentCalculater();
	void setNumPlates(int);
	int getNumPlates();
	void setDish9Cm(double);
	double getDish9Cm();

};
#endif 
