// program to find countries in Pete's World
// date 10 November 2023
// author Pete Lowe
// Elisabeth Sykorova
// Aleksandra Skarzycka
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}

	std::cout << "Pick a letter from A to C or S to Z" << std::endl; // change this line each iteration

	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}

	if (letter == 'b' || letter == 'B')
	{
		if (region == 1)
		{
			std::cout << "Belize, Bermuda, Bolivia, Brazil" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Bhutan, Brunei Darussalam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Bahamas, Bahrain, Barbados" << std::endl;
		}
	}
	if (letter == 'c' || letter == 'C')
	{
		if (region == 1)
		{
			std::cout << "Canada, Chile, Colombia, Costa Rica" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Croatia, Czech Republic" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Democratic Republic of the Congo (Kinshasa), Congo, Republic of (Brazzaville), Côte D'ivoire (Ivory Coast)" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Christmas Island, Cocos (Keeling) Islands, Cyprus Mediterranean" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cayman Islands, Cook Islands, Cuba" << std::endl;
		}
	}
	if (letter == 'd' || letter == 'D')
	{
		if (region == 1)
		{
			std::cout << "There is no Ds in America" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Denmark" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Djibouti" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There is no Ds in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Dominica, Dominican Republic" << std::endl;
		}
	}
	if (letter == 's' || letter == 'S')
	{
		if (region == 1)
		{
			std::cout << "Suriname" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Slovakia" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Senegal" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "South Korea" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Solomon Islands" << std::endl;
		}
	}

	if (letter == 't' || letter == 'T')
	{
		if (region == 1)
		{
			std::cout << "Trinidad and Tobago" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Turkey" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Tanzania" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Thailand" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Tonga" << std::endl;
		}
	}
	if (letter == 'u' || letter == 'U')
	{
		if (region == 1)
		{
			std::cout << "United States" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "United Kingdom" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Uganda" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Uzbekistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Us in the rest of the world" << std::endl;
		}
	}
	if (letter == 'v' || letter == 'V')
	{
		if (region == 1)
		{
			std::cout << "Virgin Islands (U.S.) " << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Vatican City State (Holy See)" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Vs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuatu" << std::endl;
		}
	}

	if (letter == 'w' || letter == 'W')

	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western Sahara" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ws in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futuna Islands" << std::endl;
		}
	}
	if (letter == 'x' || letter == 'X')
	{
		std::cout << "There are no Xs anywhere" << std::endl;
	}
	if (letter == 'y' || letter == 'Y')
	{
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemen" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ys in the rest of the world" << std::endl;
		}
	}
	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	
	return 1;
}