#ifndef ___MD_FILE_PRINTER_HPP___
#define ___MD_FILE__PRINTER_HPP___

#include "printer.hpp"
#include <iostream>
#include <string>
#include "storage.hpp"
#include <fstream>

class MdFilePrinter : public Printer {

	public:
	void print(storage* curr){
		ofstream OPFS;
		OPFS.open("output.md");
		string hash = "#";
		if(OPFS.is_open()){
			printR(curr, hash, OPFS);
		}
		OPFS.close();
	}

	private:
        void printR(storage* curr, string hash, ofstream& OPFS){
                OPFS << (curr->getDate() == "" ? (hash+" ") : ("* "+curr->getDate()+"----"));

                OPFS << curr->getName() << (curr->getDescrip()=="" ? "" : ("\n\t- "+curr->getDescrip())) << std::endl;

		hash = hash+"#";
                vector<storage*> li = curr->getVector();
                for(storage* m : li){
                        printR(m,hash,OPFS);
                }
        }

};
#endif //___MD_FILE_PRINTER_HPP___
