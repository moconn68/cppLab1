//Matthew O'Connell
//ECE 2620-001
//

#include <iostream>
#include <cmath>
#define PI 4*(atan(1))
using namespace std;

double distance(double x1, double y1, double x2, double y2);
double radius(double x1, double y1, double x2, double y2);
double circumference(double radius);
double area(double radius);

int main()
{
	double x1, y1, x2, y2;
	int menuChoice;
	cout << "Enter the coordinates of the center of a cirlce separated by whitespace:" << endl;
	cin >> x1 >> y1;
	cout << "Enter the coordinates of a point on the circle separated by whitespace:" << endl;
	cin >> x2 >> y2;
	while(menuChoice != 4){ //allows the menu option to loop until the user wishes to exit the program
		cout << "(1) Compute the radius of the circle" << endl << "(2) Compute the circumference of the circle" << endl << "(3) Compute the area of the circle" << endl << "(4) Exit" << endl;
		cin >> menuChoice;
		if(menuChoice != 4){
			switch(menuChoice){ //calculates certain desired values based on user input i.e. radius, circumference, area
				case 1:
					cout << "The radius of the circle is: " << radius(x1, y1, x2, y2) << endl;
					break;

				case 2:
					cout << "The circumference of the circle is: " << circumference(radius(x1, y1, x2, y2)) << endl;
					break;

				case 3:
					cout << "The area of the circle is: " << area(radius(x1,y1,x2,y2)) << endl;
					break;
				
				default: //triggers if the user enters a number that is not 1,2,3, or 4
					cout << "Please choose a valid option." << endl;
					break;
			}
		}
	}
	return 0;
}

//function to calculate the distance between the center of a circle and a point on the circle
double distance(double x1, double y1, double x2, double y2){
	return sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
}

//function to calculate the radius of the circle
double radius(double x1, double y1, double x2, double y2){
	return distance(x1,y1,x2,y2);
}

//function to calculate the circumference of the circle
double circumference(double radius){
	return PI * pow(radius, 2);
}

//function to calculate the area of the circle
double area(double radius){
	return 2 * PI * radius;
}


