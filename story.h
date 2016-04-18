#ifndef STORY_H
#define STORY_H

class Story{
	public:
		void Chapter(int,int );
		void Story();
		int getCM();
		int getCS();
		void setCM(int);
		void setCS(int);
	private:
		int CM;
		int CS;
		
		
};
#endif

