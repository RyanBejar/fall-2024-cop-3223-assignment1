//********************************************************************
// fracturing.c
// Author: Ryan Bejar
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: This program calculates the area, circumference, width, and height 
// of a circle based on the given points of the diameter
// 
// Input: points from user input
// Output: (to the command line) points and calculations
//********************************************************************

//imports libraries
#include <stdio.h>
#include <math.h>

//Declares PI
#define PI 3.14159 

//function to calculate distance using the formula
double distanceFormula(double x1, double x2, double y1, double y2){
    double distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return distance;
}

//function that gets the input from the user
double askForUserInput(){
    double x1, x2, y1, y2;

    printf("Enter Point 1 x1: ");
    scanf("%lf", &x1);

    printf("Enter Point 1 y1: ");
    scanf("%lf", &y1);

    printf("Point #1 entered: x1 = %0.3f; y1 = %0.3f\n", x1, y1);

    printf("Enter Point 2 x2: ");
    scanf("%lf", &x2);

    printf("Enter Point 2 y2: ");
    scanf("%lf", &y2);

    printf("Point #1 entered: x2 = %0.3f; y2 = %0.3f\n", x2, y2);

    double userInput = distanceFormula(x1,x2,y1,y2);

    return userInput;
}

//function that calculates the distance for the points from the user (Also the diameter)
double calculateDistance(){

    double input = askForUserInput();
    printf("The distance between the points is %.3lf\n", input);
    return input;
}

//function to calculate the perimeter of the circle
double calculatePerimeter(){

    double input = askForUserInput();
    double perimeter = PI * input;

    printf("The perimeter of the city encompassed by your request is %0.3lf\n", perimeter);

    return 1.0;
}

//function to calculate the area of the circle
double calculateArea(){
    double input = askForUserInput();
    double radius = input/2;
    double radius2 = radius * radius;
    double area = PI * radius2;

    printf("The area of the city encompassed by your request is %0.3lf\n", area);

    return 3.0; 

}

//function to calculate the width of the circle
double calculateWidth(){
    double input = askForUserInput();
    double width = input;

    printf("The width of the city encompassed by your request is %0.3lf\n", width);

    return 1.0;
}

//function to calculate the height of the circle
double calculateHeight(){
    double input = askForUserInput();
    double height = input;

    printf("The height of the city encompassed by your request is %0.3lf\n", height);

    return 1.0;
}
//the main function that calls all other functions
int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}