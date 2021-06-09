//******************************************************************************
//* FileName	: NewHead.h
//* Author   	: Me
//* 
//* ClassName	: CDate
//* Version		: 1
//* Description : Noddy class declaration. Code is pretty useless used for
//*               DIM POC to have a source file with some code in it.
//*
//*
//*
//*
//*
//*
//*
//*
//*
//******************************************************************************

#include <stdlib>

Class CDate 
{
 
public:
	void CDate(int day, int month, int year);
	static void SetDefaultDate(int day, int month, int year)
	void AddYears(int years);
	void AddMonth(int month);
	void AddDay(int days);
	
	int GetDay();
	int GetMonth();
	int GetYear();
	
private:
	int CurrentDay;
	int CurrentMonth;
	int CurrentYear;
	static CDate DefaultDate;
};
