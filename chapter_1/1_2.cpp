//isPermutation - determine if 2 strings are permutations of each other

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPermutation (string s1, string s2)
{
	if (s1.size() != s2.size())
		return false;

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	for (int i = 0; i < s1.length(); ++i)
	{
		if (s1.at(i) != s2.at(i))
		{
			return false;
		}
	}
	return true;
}

int main()
{
	cout << "dog and god " << isPermutation("dog", "god") << endl;
	cout << "nilay and layin " << isPermutation("nilay", "layin") << endl;
	cout << "doggy and dog " << isPermutation("doggy", "dog") << endl;
	cout << "spice and pumpkins " << isPermutation("spice", "pumpkings") << endl;

	return 0;
}