//string Rotation - check if s2 is a rotation of s1, with only one call of isSubstring

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//Check if s2 is a substring of s1
bool isSubstring(string s1, string s2)
{
	return s1.find(s2) != -1;
}

//O(nlogn)
bool isRotation(string s1, string s2)
{
	if (s1.length() != s2.length())
	{
		return false;
	}
	sort(s2.begin(), s2.end());
	sort(s1.begin(), s1.end());

	return isSubstring(s1, s2);
}

int main()
{
	cout << "'oogly' and 'moogly' rotation: " << isRotation("oogly", "moogly") << endl;
	cout << "'waterbottle' and 'erbottlewar' rotation: " << isRotation("waterbottle", "erbottlewat") << endl;
	cout << "'erfallwate' and 'waterfall' rotation: " << isRotation("erfalwlat", "waterfall") << endl;

	return 0;
}