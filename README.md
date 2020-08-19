 > Remove prompt text (lines beginning with "\>") and replace with your project specifics (including this prompt)
 > Replace anything between \<...\> with your project specifics and remove angle brackets. 
# Calandar
 > Your author list below should include links to all members GitHub and should begin with a "\>"
 
 > Authors: [Sophie Si](https://github.com/sophie-si)  
 > Authors: [Erik Kanamori](https://github.com/erik-kan)  
 > Authors: [Jonathan Kim](https://github.com/jonathanykim)  

 > You will be forming a group of **TWO - THREE** students and work on an interesting project that you will propose yourself (in this `README.md` document). You can pick any project that you'd like, but it needs ot implement three design patterns. Each of the members in a group is expected to work on at least one design pattern and its test cases. You can, of course, help each other, but it needs to be clear who will be responsible for which pattern and for which general project features.
 
 > ## Expectations
 > * Incorporate **three** distinct design patterns, *two* of the design patterns need to be taught in this course:
 >   * Composite, Strategy, Abstract Factory, Visitor, Iterator
 > * All three design patterns need to be linked together (it can't be three distinct projects)
 > * You can pick any of the following languages:
 >   * C/C++, Java, Python
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
	

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include
 > * Why is it important or interesting to you?
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [toolname](link) - Short description
 > * What will be the input/output of your project?
 > * This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 

* Design patterns 
 	- Composite used to create an event storage
	- Strategy used to apply forms of printing
	- Singleton used in the formation ofthe menu
* Why is it important or interesting to you?
	- One of the things led to our decision of the project is that what we value most is the projects utility a well as its potential to be continuously improved upon
	- A calendar application can be made to become something that is functional to the everyday college student as a great way to study for various classes
	- Calendar would have to connect with the actual time and date to be accurate 
	- It can also be given a collaborative functionality so people and families can create schedules and plan projects or vacation trips together
	- Can be used to also set up reminders for birthdays, holidays, and other special events
	- Can set reminders or messages for certain individuals on a specific day
	- Can repeat specific schedules, reminders or events, daily/weekly/monthly/annually so user does not need to create it every time
	- Can provide the current date
	- Can look up specific dates and provide information such as any events, the day of the week, and numerical date
	- Can use either numerical date or day of the week based off of current date to determine which date to pull info of
	- Each day will need to have is own unique set of information that have similar foundations to each other but may contain different info as things are added or removed
* What languages/tools/technologies do you plan to use?
	- C++
	- Putty
	- Hammer remote servers
	- Git hub
* What will be the input/output of your project?
	- Input 
		+ Commands 
			+ Create event
			+ Add message
			+ Repeat schedules 
			+ Clear the day of all edits
			+ Get date

		+ Events
			+ Reminders
			+ Search
				+ By date
				+ By event/reminder
	- Output
		+ Information of created events/reminders etc
		+ Days, weeks, months, years
		+ Command help page

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member.
 > * Break down the first "Epic" into smaller user stories (issues) and assign them to the appropriate team member.
## Class Diagram
 > Include a class diagram and a description of the diagram. This should be in sufficient detail that another group could pick up the project this point and successfully complete it.
 
 ![resources](https://docs.google.com/drawings/d/e/2PACX-1vTdH7ktFnFE14cIfMWRMulRcdcmpVhsQiAIHfuYTgICW-Q4Bd_vNtbBDUaNnixaRclXstnm44kwcTEU/pub?w=960&h=720)
 * Description:
	- Contains an object for maintaining a menu, a tree of type storage for containing and organizing tasks and a printer class for showing tasks in different ways.
		+ Event and term classes inherit from the storage class where they will be involved with defining the event object and the time periods in which the events are contained
		+ Two types of printer classes (SimplePrinter and DetailedPrinter) allow for the user to specify the type of output they would like to produce. The varying outputs are an implementation of the strategy design pattern. 
		+ Menu class manages user input to perform operations with the other classes. 

 > ## Phase III
 > You will need to schedule two check-in's with the TA (during lab hours or office hours) where your entire group will meet with them and discuss:
 > * What you have each done up to this point
 > * What you plan to do until the next meeting (or until the final demo)
 > * If there is anything that is getting in your way
 
 > You may notice that this is effectively a "standup" meeting. We suggest that as a team you have a daily (or every other day) standup, but this will be a bit more formal with the TA. 
 
 > **Your meetings cannot be in the same week of the session so plan ahead**

 > ## Final deliverable
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
