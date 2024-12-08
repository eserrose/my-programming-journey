#include <string>
#include <iostream>
using namespace std;

class TwoDShape {
public:
   TwoDShape(string n, double e): 
   name(n), edge1(e) {
   }

   virtual double perimeter(){return 0;}

   virtual double area(){return 0;}

   string getName(){
       return name;
   }

protected:
   string name;
   int edge1;
};

class circle : public TwoDShape {
    public:
   circle(double r, string inName): TwoDShape(inName,r) {
   }

    double perimeter(){
        return edge1*2*3.14;
    }

   double area(){
       return edge1*edge1*3.14;
   }
};

class rectangle : public TwoDShape {
public:
   rectangle(double a, double b, string inName): TwoDShape(inName,a), edge2(b) {
   }

    double perimeter(){
        return 2*(edge1 + edge2);
    }

   double area(){
       return edge1*edge2;
   }

private:
    int edge2;
};

int main()
{
	TwoDShape * shapePtr;

	shapePtr = new circle(3,"newCircle");
	cout<<"The perimeter of the "<<shapePtr->getName()<<" is: "<<shapePtr->perimeter()
		<<"\n and its area is "<<shapePtr->area()<<endl;
	delete shapePtr;

	shapePtr = new rectangle(2,3,"newRectangle");
	cout<<"The perimeter of the "<<shapePtr->getName()<<" is: "<<shapePtr->perimeter()
		<<"\n and its area is "<<shapePtr->area()<<endl;
	delete shapePtr;
	return 0;
}
