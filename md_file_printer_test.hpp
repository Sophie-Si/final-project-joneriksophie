#ifndef ___MD_FILE_PRINTER_TESTER_HPP___
#define ___MD_FILE_PRINTER_TESTER_HPP___

#include "gtest/gtest.h"
#include "md_file_printer.hpp"
#include "term.hpp"
#include "event.hpp"
#include <fstream>

TEST(MdFileTestSet, MultiLayerTree){
	//Create Tree
	term* a = new term("Year_Name");
        a->dummyAdd(new term("Month_Name"));
	a->getVector().at(0)->dummyAdd(new event("Planed Day",2,2,2));
        a->getVector().at(0)->dummyAdd(new event("Another Planned Day",3,3,3));

	a->getVector().at(0)->getVector().at(0)->setDescrip("Description Is Here");

	//Create Printer
	Printer* d = new MdFilePrinter();
	d->print(a);

        std::cout << "Result:" << std::endl;
	ifstream INFS;
	INFS.open("output.md");
	if(INFS.is_open()){
		std::cout << INFS.rdbuf();
	}

	//Print Expected Result for comparison
	std::cout << "Expected:" << std::endl;
        std::cout << "# Year_Name" << std::endl;
	std::cout << "## Month_Name" << std::endl;
	std::cout << "* 2/2/2----Planned Day" << std::endl;
        std::cout << "\t- Description Is Here" << std::endl;
	std::cout << "* 3/3/3----Another Planned Day" << std::endl;
}

TEST(MdFileTestSet, PrintEvent){
	//Create Tree
	event* a = new event("Planed Day",2,2,2);
	a->setDescrip("Description Is Here");
	//Create Printer
	Printer* d = new MdFilePrinter();
	d->print(a);

        std::cout << "Result:" << std::endl;
	ifstream INFS;
	INFS.open("output.md");
	if(INFS.is_open()){
		std::cout << INFS.rdbuf();
	}

	//Print Expected Result for comparison
	std::cout << "Expected:" << std::endl;
	std::cout << "* 2/2/2----Planned Day" << std::endl;
        std::cout << "\t- Description Is Here" << std::endl;
}

TEST(MdFileTestSet, PrintTerm){
	//Create Tree
	term* a = new term("Month_Name");

	//Create Printer
	Printer* d = new MdFilePrinter();
	d->print(a);

        std::cout << "Result:" << std::endl;
	ifstream INFS;
	INFS.open("output.md");
	if(INFS.is_open()){
		std::cout << INFS.rdbuf();
	}


	//Print Expected Result for comparison
	std::cout << "Expected:" << std::endl;
	std::cout << "# Month_Name" << std::endl;
}

#endif //___MD_FILE_PRINTER_TESTER_HPP___
