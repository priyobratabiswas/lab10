//Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.

#include <iostream>

using namespace std;

class rectangle {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box

		void getlength(void);// to get the length
		void getbreadth(void);// to get the breadth
		double getarea(void);//to get area
		double getperimeter(void);// to get perimeter

};
void rectangle::getlength(void){
	double len;
	cout<<"enter your length-"<<endl;
	cin>>len;
	length=len;
}
void rectangle::getbreadth(void){
	double bre;
	cout<<"enter your breadth-"<<endl;
	cin>>bre;
	breadth=bre;
}
double rectangle::getarea(void){
	return length*breadth;
}
double rectangle::getperimeter(void){
	return 2*(length+breadth);
}


int main() {
   rectangle rect1; //declare rect1 of type rectangle
   rectangle rect2; //declare rect2 of type rectangle
   double area = 0.0;// Store the volume of a box here
   double perimeter = 0.0;// Store the volume of a box here
 
   // rect1 specification
   cout<<"enter the specifications of first rectangle"<<endl;
	rect1.getlength();
	rect1.getbreadth();

   // rect2 specification
   cout<<"enter the specifications of second rectangle"<<endl;
	rect2.getlength();
	rect2.getbreadth();
   
   // area of rect1
   area = rect1.getarea();
   cout << "area of rectangle 1 is: " << area <<endl;

   // perimeter of rect1
   perimeter = rect1.getperimeter();
   cout << "perimeter of rectangle 1 is: " << perimeter <<endl;


	// area of rect2
   area = rect2.getarea();
   cout << "area of rectangle 2 is: " << area <<endl;

   // perimeter of rect2
   perimeter = rect2.getperimeter();
   cout << "perimeter of rectangle 2 is: " << perimeter <<endl;


   return 0;
}

