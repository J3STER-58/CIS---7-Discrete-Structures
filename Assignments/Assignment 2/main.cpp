// Justin Teeter
// ID: 2574746
// CIS-7 | WWF String Input (Updated)

#include<iostream>
#include<string>
#include<regex>
using namespace std;

int getCounter(string input);

int main()
{
	string input;
	cout << "Enter a well formed formula: " << endl;
	cout << "Type q to exit" << endl;
	cout << "Valid Connectors: ^ V ! -> " << endl;
	cout << "Enter input: ";

	regex reg("^\\s*!?\\(?*\\s*[A-UW-Z]\\s*\\)?*\\s*((\\^|V|->)\\s*!?\\)?*\\s*[A-UW-Z]\\s*\\)?*\\s*)*$");

	do
	{
		getline(cin, input);
		int counter = getCounter(input);
		if (counter != 0)
		{
			cout << "Syntax Error.\n\n";
		}
		else
		{
			if (regex_match(input, reg))
			{
				cout << input << " : Is a valid WFF." << endl;
			}
			else if (input != "q")
			{
				cout << input << " : Is NOT a valid WFF." << endl;
			}
		}

	} while (input != "q");

	return 0;
}

int getCounter(string input)
{
	int counter = 0;
	for (int i = 0; i < input.size(); i++)
	{
		if (input.at(i) == '(')
			counter++;
		if (input.at(i) == ')')
			counter--;
		if (counter < 0)
			return counter;
	}
	return counter;
}
