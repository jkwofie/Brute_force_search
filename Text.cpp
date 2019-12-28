#include "Text.h"

//setting the value of strig text
void Text::setText(){
	std::cout<<"please enter the text you want search pattern in  it ";
	std::getline(std::cin,text);
}

//setting the value of the string pattern
void Text::setPattern(){
		std::cout<<"please enter pattern ";
		std::getline(std::cin,pattern);

}


//searching if the pattern exists
int Text::searchText(){

	// getting the lenght of the string;
	int lengthOfText = text.length();
	int lengthOfPattern = pattern.length();

	for (int i = 1; i <= lengthOfText-lengthOfPattern +1; ++i)
	{
		//Flag it check if the pattern match with text
		bool flag=true;
		for(int j=1; j<=lengthOfPattern && flag==true; j++){
			if ((pattern.substr(j-1,1))!=text.substr(j+i-2,1))
			{
				flag=false;
			}
		}
		if (flag==true)
		{
			return i;
		}

	}
	return 0; 
}


void Text::getStartingpPositionOfThePattern()
	{
		StartingpPositionOfThePattern=searchText();
		if (StartingpPositionOfThePattern!=0)
		{
		std::cout<<"Starting Position of Pattern is : "<< StartingpPositionOfThePattern;
		}
		else{
		std::cout<<"pattern does not exist";
		}
	}
	