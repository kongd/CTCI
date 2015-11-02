//isunique - determine if a string has all unique characters, with no extra memory

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isUnique (string s)
{
	sort(s.begin(), s.end());
	char c = s.at(0);
	for (int i = 1; i < s.length(); ++i)
	{
		if (c == s.at(i))
			return false;
		c = s.at(i);
	}
	return true;
}

int main()
{
	cout << "dog " << isUnique("dog") << endl;
	cout << "doggy " << isUnique("doggy") << endl;
	cout << "foxxy " << isUnique("foxxy") << endl;
	return 0;
}