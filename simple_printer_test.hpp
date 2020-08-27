#ifndef ___SIMPLE_PRINTER_TESTER_HPP___
#define ___SIMPLE_PRINTER_TESTER_HPP___

#include "gtest/gtest.h"
#include "simple_printer.hpp"
#include "term.hpp"
#include "event.hpp"


TEST(SimpleTestSet, SingleLayerTree){
	//Create Tree
	term* a = new term("Month_Name");
	a->dummyAdd(new event("Planed Day",2,2,2));
        a->dummyAdd(new event("Another Planned Day",3,3,3));

	//Create Printer
	Printer* d = new SimplePrinter();
	std::cout << "Result:" << std::endl;	
	d->print(a);

	//Print Expected Result for comparison
	std::cout << "Expected:" << std::endl;
	std::cout << "Month_Name" << std::endl;
	std::cout << "2/2/2----Planned Day" << std::endl;
	std::cout << "3/3/3----Another Planned Day" << std::endl;
}

TEST(SimpleTestSet, PrintEvent){
	//Create Tree
	event* a = new event("Planed Day",2,2,2);

	//Create Printer
	Printer* d = new SimplePrinter();

        std::cout << "Result:" << std::endl;	
	d->print(a);

	//Print Expected Result for comparison
	std::cout << "Expected:" << std::endl;
	std::cout << "2/2/2----Planned Day" << std::endl;
}

TEST(SimpleTestSet, PrintTerm){
	//Create Tree
	term* a = new term("Month_Name");

	//Create Printer
	Printer* d = new SimplePrinter();

        std::cout << "Result:" << std::endl;	
	d->print(a);

	//Print Expected Result for comparison
	std::cout << "Expected:" << std::endl;
	std::cout << "Month_Name" << std::endl;
}

#endif //___SIMPLE_PRINTER_TESTER_HPP___
