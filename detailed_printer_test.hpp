#ifndef ___DETAILED_PRINTER_TESTER_HPP___
#define ___DETAILED_PRINTER_TESTER_HPP___

#include "gtest/gtest.h"
#include "detailed_printer.hpp"
#include "term.hpp"
#include "event.hpp"


TEST(DetailedTestSet, MultiLayerTree){
	//Create Tree
	term* a = new term("Year_Name");
        a->dummyAdd(new term("Month_Name"));
	a->getVector().at(0)->dummyAdd(new event("Planed Day",2,2,2));
        a->getVector().at(0)->dummyAdd(new event("Another Planned Day",3,3,3));

	a->getVector().at(0)->getVector().at(0)->setDescrip("Description Is Here");

	//Create Printer
	Printer* d = new DetailedPrinter();
	std::cout << "Result:" << std::endl;	
	d->print(a);

	//Print Expected Result for comparison
	std::cout << "Expected:" << std::endl;
        std::cout << "# Year_Name" << std::endl;
	std::cout << "## Month_Name" << std::endl;
	std::cout << "* 2/2/2----Planned Day" << std::endl;
        std::cout << "\t- Description Is Here" << std::endl;
	std::cout << "* 3/3/3----Another Planned Day" << std::endl;
}

TEST(DetailedTestSet, PrintEvent){
	//Create Tree
	event* a = new event("Planed Day",2,2,2);
	a->setDescrip("Description Is Here");
	//Create Printer
	Printer* d = new DetailedPrinter();

        std::cout << "Result:" << std::endl;	
	d->print(a);

	//Print Expected Result for comparison
	std::cout << "Expected:" << std::endl;
	std::cout << "* 2/2/2----Planned Day" << std::endl;
        std::cout << "\t- Description Is Here" << std::endl;
}

TEST(DetailedTestSet, PrintTerm){
	//Create Tree
	term* a = new term("Month_Name");

	//Create Printer
	Printer* d = new DetailedPrinter();

        std::cout << "Result:" << std::endl;	
	d->print(a);

	//Print Expected Result for comparison
	std::cout << "Expected:" << std::endl;
	std::cout << "# Month_Name" << std::endl;
}

#endif //___DETAILED_PRINTER_TESTER_HPP___
