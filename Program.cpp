//Kshir Ramruthan (214502398)
//Tut 1 - Fizz, Buzz, Woof

#include<iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 50; i++)
	{
		if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
		{
			cout << "Fizz Buzz Woof" << endl;
		}//End if
		else if (i % 3 == 0 && i%5==0)
		{
			cout << "Fizz Buzz" << endl;
		}//End 1st else if
		else if (i % 3 == 0 && i % 7 == 0)
		{
			cout << "Fizz Woof" << endl;
		}//End 2nd else if
		else if (i % 5 == 0 && i % 7 == 0)
		{
			cout << "Buzz Woof" << endl;
		}//End 3rd else if
		else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}//End 4th else if
		else if (i % 5 == 0)
		{
			cout << "Buzz" << endl;
		}//End 5th else if
		else if (i % 7 == 0)
		{
			cout << "Woof" << endl;
		}//End 6th else if
		else
		{
			cout << i << endl;
		}//End else
	}//End for-loop
	return 0;
}//End main function