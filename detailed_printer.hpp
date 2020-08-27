#ifndef ___SIMPLE_PRINTER___
#define ___SIMPLE_PRINTER___

#include "printer.hpp"
#include <iostream>
#include <string>
#include "storage.hpp"

class DetailedPrinter : public Printer {

	public:
	void print(storage* curr){
		string hash = "#";
		printR(curr, hash);
	}

	private:
        void printR(storage* curr, string hash){
                std::cout << (curr->getDate() == "" ? (hash+" ") : ("* "+curr->getDate()+"----"));

                std::cout << curr->getName() << (curr->getDescrip()=="" ? "" : ("\n\t- "+curr->getDescrip())) << std::endl;

		hash = hash+"#";
                vector<storage*> li = curr->getVector();
                for(storage* m : li){
                        printR(m,hash);
                }
        }

};
#endif
