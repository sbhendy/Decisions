/* This program checks the temperature of water
	Notice the "else if" statement
*/

#include<iostream>
using namespace std;

int main() {

	double temp;
	cout << "Enter the temperature of water in degrees celcius ";
	cin >> temp;
	if (temp <= 0) {
		cout << "water is ice at this temperature" << endl;
	}
	//if the if condition above fails do this
	else if (temp > 0 && temp<=27) {
		if (temp <= 4) {
			cout << "At this temperature the volume of water increases as it turns to ice" << endl;
		}
		if (temp > 4 && temp < 27) {
			cout << "water is cool liquid" << endl;
		}
		if (temp >= 25 && temp <= 27) {
			cout << "Water is at room temperature" << endl;
		}
	
	}
	//if the if and the else if coditions fail do this
	else {
		cout << "Water is warm" << endl;
		if (temp > 40) {
			cout << "Water is hot" << endl;
		}
		if (temp > 97) {
			cout << "Water is boiling" << endl;
		}
	}
	
system		("pause");
	return 0;
}