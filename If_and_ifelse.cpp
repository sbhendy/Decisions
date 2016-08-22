/*
In programming, sometimes we may want our program to behave or respond in a certain way based on a 
specific condition or input. There are 2 main ways of doing this:

1. If statements
3. If_else statements
2. Switch_case statements.

In this example we explore the "if" statements.

*/

#include<iostream> //include the iostream library
#include<string> //inlude the string library 
using namespace std; // use the std namespace

int main() {

	const string myIPAddress = "127.0.0.1"; //the ip adress of your local machine
	string ipAddress;
	cout << "Enter the ip address of the server you would like to connect to: " << endl;
	cin>>ipAddress;
	cout << "You are connected to: " << ipAddress << endl;
	if (ipAddress == myIPAddress)
		{
			cout << "This is your local ip address" << endl;
		}
	system("pause");
	return 0;

}