#include <iostream>

using namespace std;

int main()
{
    string entry;

    while ( getline(cin, entry)) printf("%s\n", entry.c_str());
}