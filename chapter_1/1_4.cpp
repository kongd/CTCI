//palindrome permutation - given a string, check if it is a permutation of a palindrome
//eg: Tact Coa is true: "tacocat"

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

//O(n) time
bool palindromePermutation(string s)
{
	unordered_map<char, int> map;
	for (int i = 0; i < s.length(); ++i) //change all to lower case, add to map
	{
		char c = tolower(s.at(i));
		++map[c];
	}

	bool single = false;
	for (auto itr = map.begin(); itr != map.end(); ++itr)
	{
		if (itr->second % 2 != 0)
		{
			if (!single)
			{
				single = true;
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	cout << "'TactCoa' palindrome: " << palindromePermutation("TactCoa") << endl;
	cout << "'abcabc' palindrome: " << palindromePermutation("abcabc") << endl;
	cout << "'abcdefg' palindrome: " << palindromePermutation("abcdefg") << endl;


	return 0;
}