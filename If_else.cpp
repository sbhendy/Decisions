/*
In programming, sometimes we may want our program to behave or respond in a certain way based on a
specific condition or input. There are 2 main ways of doing this:

1. If statements
3. If_else statements
2. Switch_case statements.

In this example we explore the "if else" statement.

*/

#include<iostream> //include the iostream library
#include<string> //inlude the string library 
using namespace std; // use the std namespace

int main() {

	const string serverIPAddress = "192.168.8.1"; //this string is declared constant, hence it can never be changed throughout the program
	string ipAddress;
	cout << "Enter the IP address of the server: " << endl;
	cout << "Waiting for connection..." << endl;
	cin >> ipAddress;

	if (ipAddress == serverIPAddress)
	{
		cout << "You are now connected" << endl; //this code will only be run if the ip address inputted is the same as your local ip address
	}
	else
	{
		cout << "Connection error. Enter correct IP address" << endl;
	}
	system("pause");
	return 0;

}