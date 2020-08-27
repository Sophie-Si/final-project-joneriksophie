#include "gtest/gtest.h"

#include "term.hpp"
#include "event.hpp"


TEST(termConstructorTest, termConstruct){
// Create term
//
	term* b = new term("2000", 0, 0, 2000 );
        EXPECT_EQ(b-> getName(), "2000");
}



TEST(termSizeTest, termSize){
	term* b = new term("2000", 0 , 0, 2000);
        EXPECT_EQ(b-> getNum(), 0);
}

TEST(termSearchTest, termSearch){
	term* b = new term("2000", 0 , 0, 2000);
	term* c = new term("january", 0 , 1, 0);
	term* d = new term("feburary", 0 , 2, 0);
	term* e = new term("march", 0 , 3, 0);
	term* f = new term("first", 1 , 0, 0);

	b->dummyAdd(c);
	b->dummyAdd(d);
	b->dummyAdd(e);
	d->dummyAdd(f);
	/*for (int i =0; i<b->getNum(); i++){
 * 	cout << b->getVector().at(i)->getName()<< endl;
 * 		}*/
	
	EXPECT_EQ(b->search("january"), 0);
	EXPECT_EQ(b->getVector().at(1)->search("first"), 0);
	EXPECT_EQ(b->search("march"), 2);

	
// add the function that is adding to the private vector then search it
}

TEST(termRemoveTest, termRemove){
        term* b = new term("2000", 0 , 0, 2000);
        term* c = new term("january", 0 , 1, 0);
        term* d = new term("feburary", 0 , 2, 0);
        term* e = new term("march", 0 , 3, 0);
        term* f = new term("first", 1 , 0, 0);

        b->dummyAdd(c);
        b->dummyAdd(d);
        b->dummyAdd(e);
        d->dummyAdd(f);
        /*for (int i =0; i<b->getNum(); i++){
 *  *      cout << b->getVector().at(i)->getName()<< endl;
 *   *              }*/

        EXPECT_EQ(b->search("january"), 0);
        b->remove(b->search("feburary"));
        EXPECT_EQ(b->search("march"), 1);


// add the function that is adding to the private vector then search it
}

TEST(termSortTest, termSort){
        term* b = new term("2000", 0 , 0, 2000);
        term* c = new term("january", 0 , 1, 0);
        term* d = new term("feburary", 0 , 2, 0);
        term* e = new term("march", 0 , 3, 0);
        term* f = new term("first", 1 , 0, 0);

        b->dummyAdd(c);
        b->dummyAdd(e);
        d->dummyAdd(f);
	b->dummyAdd(d);
        /*for (int i =0; i<b->getNum(); i++){
 *  *      cout << b->getVector().at(i)->getName()<< endl;
 *   *              }*/

        EXPECT_EQ(b->search("feburary"), 2);
	b->storageSort();
        EXPECT_EQ(b->getVector().at(1)->search("first"), 0);
        EXPECT_EQ(b->search("feburary"), 1);


// add the function that is adding to the private vector then search it
 }
//








