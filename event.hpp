#ifndef ___EVENT_HPP___
#define ___EVENT_HPP___

#include "storage.hpp"

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class event : public storage{
	private:
	string date;
	string descrip;
	vector<storage*> vect;
		
	public:
	event (string title, int Day, int Month, int Year){
		
		setDate(Day, Month, Year);
		setName(title);
		

	}

	void setDate(int d, int m, int y){
		day = d;
		month = m;
		year = y;
		date = to_string(m) + "/" + to_string(d) + "/" + to_string(y); 
	}
	
	int getYear(){
		return year;
	}
	
	int getMonth(){
		return month;
	}

	int getDay(){
		return day;
	}

	
	string getDate(){
		return date;
	}

	void setDescrip(string input){
		descrip = input;
        }

        string getDescrip(){
        	return descrip;
        }


	void setName(string title){
		name = title;
	}

	string getName(){
		return name;
	}
	
	vector<storage*> getVector(){
		return vect;
	}
	int search (string str){
		return -1;
	}

	void dummyAdd(storage* DMorY){}

	int  getNum(){ return 0;}

	void remove(int pos){}

	void storageSort(){}

};


#endif 
