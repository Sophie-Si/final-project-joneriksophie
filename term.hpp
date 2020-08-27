#ifndef ___TERM_HPP___
#define ___TERM_HPP___

#include "storage.hpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class term : public storage{
        private:
        public:
	 vector<storage*> vect ;
        term (string Name, int d=0, int m=0, int y=0){
		name = Name;
		day = d;
		month = m;
		year = y;
        }
	
	vector<storage*> getVector(){
		return vect;
	}

        int  getNum(){
	       return vect.size(); 
        }
	
	string getName(){
                return name;
        }

	 string getDate(){
                return "";
        }

        string getDescrip(){
                return "";
        }

        int getYear(){
                return 0;
        }

        int getMonth(){
                return 0;
        }

        int getDay(){
                return 0;
        }

	void setDate(int d, int m, int y){
	
	}

        void setDescrip(string input){

	}

        void setName(string title){

	}


	int search(string str){
		for(int i =0;  i<vect.size(); i++){
			if(vect.at(i)->getName() == str){
				return i;
			}	


		}	
	return -1;
	}
	void dummyAdd(storage* DMorY){
		vect.push_back(DMorY);
	}	

	void remove(int pos){
		vect.erase(vect.begin()+pos);
	}



        

};


#endif
