#include <string>
#include <iostream>
#include "TStack.h"
#include "TCalculator.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	
	string ex;
	TCalculator cal;
	cout << "-------------------" << endl;
	cout << "Калькулятор" << endl;
	ex = "5+7*(sin(1)-8/4^2)";
	cal.SetExpr(ex);
	cal.ToPostfix();
	cal.CalcPostfix();
	cout<<cal.Calc();
	cout << endl;



}

