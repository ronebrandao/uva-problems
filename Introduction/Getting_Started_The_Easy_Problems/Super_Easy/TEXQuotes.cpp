#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string entry, output;
	bool first = true;

	while (getline(cin, entry))
	{
		output = "";

		for (int i = 0; i < entry.size(); i++)
		{

			if (entry[i] == '"')
			{

				if (first)
				{
					output += "``";
					first = false;
				}
				else
				{
					output += "''";
					first = true;
				}
			}
			else
			{
				output += entry[i];
			}
		}

		printf("%s\n", output.c_str());
	}
}