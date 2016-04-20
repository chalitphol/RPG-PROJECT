#ifndef STORY_H
#define STORY_H

class Story{
	public:
		void Walker();
		int Chapter(int,int);
		void Story();
		int getCM();
		int getCS();
		void setCM(int);
		void setCS(int);
		void nextCM();
		void nextCS();
		void clear();
	private:
		int CM;
		int CS;
		
		
};
#endif

