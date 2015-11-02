//one away - function that checks if 2 strings are 1 (insert/remove/repalce character) or 0 edits away

#include <iostream>
#include <string>

using namespace std;

//O(n) time
bool oneOrZeroAway(string s1, string s2)
{
	if (!(s1.length() + 1 == s2.length()) && !(s1.length() == s2.length() + 1 ) && !(s1.length() == s2.length())) //check lengths
	{
		return false;
	}

	if (s1 == s2) //same string, 0 away
	{
		return true;
	}

	bool different = false;
	for (int i = 0, j = 0; i < s1.length() && j < s2.length();)
	{
		//cout << "s1: " << s1.at(i) << " s2: " << s2.at(j) << endl;
		if (s1.at(i) != s2.at(j))
		{
			if (!different)
			{
				different = true;
				if (s1.length() > s2.length())
				{
					++i;
				}
				else if (s2.length() > s1.length())
				{
					++j;
				}
				else
				{
					++i;
					++j;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			++i;
			++j;
		}
	}
	return true;
}

int main()
{
	cout << "pale and ple are " << oneOrZeroAway("pale", "ple") << " one or zero away." << endl;
	cout << "pales and pale are " << oneOrZeroAway("pales", "pale") << " one or zero away." << endl;
	cout << "pale and bale are " << oneOrZeroAway("pale", "bale") << " one or zero away." << endl;
	cout << "pale and bake are " << oneOrZeroAway("pale", "bake") << " one or zero away." << endl;

	return 0;
}