//string compression - aabccccaaa becomes a2b1c5a3

#include <iostream>
#include <string>

using namespace std;

//O(1) memory, O(n) time
string compressString(string s)
{
	char current = s.at(0);
	int count = 0;
	string compressed;
	for (int i = 0; i <= s.length(); ++i)
	{
		if (i == s.length())
		{
			string num = to_string(count); //c++11
			compressed = compressed + current + num;
		}
		else if (current == s.at(i))
		{
			++count;
		}
		else
		{
			string num = to_string(count);
			compressed = compressed + current + num;
			current = s.at(i);

			count = 1;
		}
	}

	if (compressed.length() >= s.length())
	{
		return s;
	}
	return compressed;
}

int main()
{
	cout << "String is aabcccccaaa, compressed is " << compressString("aabcccccaaa") << endl;
	cout << "String is abcde, compressed is " << compressString("abcde") << endl;

	return 0;
}