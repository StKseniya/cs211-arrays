#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

/* count digits, white space, others */

/* TODO: (1) fix all errors; 
 *       (2) add code for painting histogram in console,
 *           cf. picture in https://en.wikipedia.org/wiki/Histogram
 * 
 */

int main()
{
	string src = "12 plus 45 minus 39 is 18\n";
	int i, nwhite, nother;
	const int size = 10;
	int ndigit[size] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	i = nwhite = nother = 0;

	char c;
	while (c = src[i++])
		if ('0' <= c && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	
	cout << "source string: " << src << endl << "digits =";
	for (int i = 0; i < size; ++i)
		cout << " " << ndigit[i];
	
	cout << ", white space = " << nwhite 
		 << ", other = " << nother << endl;


    int max = nwhite > nother ? nwhite : nother;
    int max_copy = max;
    for (int i = 0; i < 10; ++i)
        if  (max < ndigit[i])
            max = ndigit[i];

    for(int i = 0; i < max_copy; ++i)
    {
        for(int j = 0; j < 10; ++j)
            cout << (ndigit[j] >= max ? " # " : "   ");
        cout << (nwhite >= max ? " # " : "   ");  
        cout << (nother >= max ? " # " : "   "); 
        --max;
        cout << endl;
    }
    for(int j = 0; j < 10; ++j)
            cout << " " << j << " ";
    cout << " w ";
    cout << " o " << endl << endl;
}
         