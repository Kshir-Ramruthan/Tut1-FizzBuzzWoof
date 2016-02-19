#include<iostream>

using namespace std;


int main()
{
	for (int i=1;i<=20;i++)
	{
		if(i%3==0 && i%5==0)
		{
			cout<<"Fizz Buzz"<< endl;
		}//End if
		else if (i%3==0)
		{
			cout<<"Fizz"<< endl;
		}//End 1st else if
		else if (i%5==0)
		{
			cout<<"Buzz"<< endl;
		}//End 2nd else if
		else
		{
			cout<<i<< endl;
		}//End else
	}//End for-loop
	
	return 0;
}//End main function
