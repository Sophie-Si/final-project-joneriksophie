#ifndef ___SIMPLE_PRINTER___
#define ___SIMPLE_PRINTER___

#include "printer.hpp"
#include <iostream>
#include <string>
#include "storage.hpp"

class SimplePrinter : public Printer {

	public:
	void print(storage* curr){
		std::cout << curr->getDate();
                std::cout << (curr->getDate() == "" ? "" : "----");

                std::cout << curr->getName();

		std::cout << std::endl;
		vector<storage*> li = curr->getVector();
		for(storage* m : li){
			print(m);
		}
	}
};
#endif
