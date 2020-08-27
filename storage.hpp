#ifndef ___STORAGE_HPP___
#define ___STORAGE_HPP___
#include <string>
#include <vector>
using namespace std;

class storage{
	protected:
	string name;
	int year;
        int month;
        int day;

	public:
        virtual string getDate()=0;

        virtual string getName()=0;

        virtual string getDescrip()=0;

	virtual int getYear()=0;

        virtual int getMonth()=0;

        virtual int getDay()=0;

	virtual int search(string str)=0;

	virtual void setDate(int d, int m, int y)=0;

        virtual void setDescrip(string input)=0;
                
        virtual void setName(string title)=0;

        virtual vector<storage*> getVector()=0;

        virtual void dummyAdd(storage* DMory)=0;

        virtual int getNum() = 0;

	virtual void remove(int pos) =0;

	virtual void storageSort() =0;


};


#endif
