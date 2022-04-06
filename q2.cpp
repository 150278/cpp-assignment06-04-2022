/***************
Q2: The given code has a base class charInput, it has member methods add() and getvalue(). The class  numInput inherits charInput. You need to implement: 
add(): it should be inside charInput, this adds the given character to the current value getValue(): it should be inside numInput, it returns the current value 
add(): it should be inside numInput, this must override the base class method so that each  non-numeric char is ignored.



****************/
//Abhishek sahu

#include <iostream>
#include <cstring>

using namespace std;

class charInput             //base class defination
{
	public:
	    char curr_val;

  //member functions
	void add(char ch)           //add character 'ch' to current value
	{ 
		curr_val = curr_val + ch;
	}

	string getValue()           //returns current value
	{ 
		return NULL; 
	}

};  //end of parent class



class numInput : public charInput           //child class defination
{ 
	public:
		int curr_val = 0;

    //member functions
		void add(int n)         //overrides add() of parent class to add only integers
		{
		    n = n - '0';

			  if(n >= 0 && n <= 9)      //checking for numeric value only	
				  curr_val = curr_val*10 + n;	
		}

		int getValue()      //returns current value 
		{
			return curr_val;
		}

};  //end of child class



//main function
int main()
{
	charInput* charIn = new charInput();
	numInput* numIn = new numInput();

	//manually giving the values to class variables
	numIn->add('1');
	numIn->add('a');
	numIn->add('0');



    //output printing the added value
	cout << numIn->getValue() << endl;
	//the output should be 10


	return 0;
}