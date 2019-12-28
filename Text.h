#ifndef TEXT_H
#define TEXT_H
#include <string>
#include <cctype>
#include <iostream>
class Text
{
  std::string text;
  std::string pattern;
  int StartingpPositionOfThePattern ;
public:
	void setText();
	std::string getText();

	void setPattern();
	std::string getPattern();
	
	int searchText();
	void getStartingpPositionOfThePattern();

};

#endif