#include <iostream>

using namespace std;

int main()
{
    // this is part of the ASCII table 
    char var1 = 'A'; // 65
    char var2 = 'R'; // 82
    char var3 = 'T'; // 84
    char var4 = 'Y'; // 89

    cout << var1 + var2 + var3 + var4; // should show the total sum of the four characters in the ASCII table

    char var5 = '\n'; // this creates a new line in the output
    char var6 = 'A';
    char var7 = 'R';
    char var8 = 'T';
    char var9 = 'Y';

    cout << var5 << var6 << var7 << var8 << var9; // should show the four characters in the ASCII table
        return 0; // end of the program
}