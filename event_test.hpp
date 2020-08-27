#include "gtest/gtest.h"

#include "term.hpp"
#include "event.hpp"

TEST(eventConstructorTest, eventConstruct){

	//Create event
	event* b = new event("Planned Day", 1, 1, 2000);
	EXPECT_EQ(b-> getDay(), 1);
	EXPECT_EQ(b-> getMonth(), 1);
	EXPECT_EQ(b-> getYear(), 2000);
	EXPECT_EQ(b-> getDate(), "1/1/2000");
	EXPECT_EQ(b-> getName(), "Planned Day");
}


TEST (eventSetTest, eventDate){
		event* b = new event("Planned Day", 1, 1, 2000);
		b->setDate(2,2,2002);
		EXPECT_EQ(b-> getDay(), 2);
                EXPECT_EQ(b-> getMonth(), 2);
                EXPECT_EQ(b-> getYear(), 2002);
                EXPECT_EQ(b-> getDate(), "2/2/2002");
}





TEST (eventDescriptionTest, eventDescrip){

	event* b = new event("Planned Day", 1, 1, 2000);
	b->setDescrip("this is a planned event");
	EXPECT_EQ (b->getDescrip(), "this is a planned event");




}
