//urlIFY - replace spaces in a string with "%20"

#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

//O(n) time, O(1) memory
void urlIFY (char* s, int size)
{
	//count number of spaces
	int numSpaces = 0;
	for (int i = 0; i < size; ++i)
	{
		if (s[i] == ' ')
		{
			++numSpaces;
		}
	}

	//shift over characters from the back
	int back = size + numSpaces * 2;
	for (int i = size - 1; back >= 0; --i)
	{
		if (s[i] != ' ')
		{
			s[back] = s[i];
			--back;
		}
		else
		{
			s[back] = '0';
			--back;
			s[back] = '2';
			--back;
			s[back] = '%';
			--back;
		}
	}

	/////Test
	cout << "URLified: ";
	for (int i = 0; i <= size + numSpaces * 2; ++i)
	{
		cout << s[i];
	}
	cout << endl;
}

int main()
{
	cout << "Before: 'Mr. John Smith    '" <<  endl;
	char name[] = "Mr. John Smith    ";
	urlIFY(name, 14);
	
	return 0;
}