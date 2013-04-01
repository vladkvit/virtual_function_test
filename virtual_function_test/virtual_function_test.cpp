// virtual_function_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Shape
{
public:
	virtual void printme()
	{
		printf( "v Shape\n" );
	}
	void non_virt_printme()
	{
		printf( "n Shape\n" );
	}
};

class Circle : Shape
{
public:
	virtual void printme()
	{
		printf( "v Circle\n" );
	}
	void non_virt_printme()
	{
		printf( "n Circle\n" );
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	Shape myshape;
	Circle mycircle;

	myshape.printme();
	myshape.non_virt_printme();

	mycircle.printme();
	mycircle.non_virt_printme();

	printf( "\n" );

	Shape* shp_ptr = &myshape;
	shp_ptr->printme();
	shp_ptr->non_virt_printme();

	Circle* cir_ptr = &mycircle;
	cir_ptr->printme();
	cir_ptr->non_virt_printme();

	printf( "\n" );

	shp_ptr = (Shape *)&mycircle;
	shp_ptr->printme();
	shp_ptr->non_virt_printme();

	cir_ptr = (Circle *)&myshape;
	cir_ptr->printme();
	cir_ptr->non_virt_printme();

	printf( "\n" );

	return 0;
}

