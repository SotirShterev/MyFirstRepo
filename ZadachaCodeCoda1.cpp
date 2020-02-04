#include<bits/stdc++.h>
using namespace std;
const double pi = 3.14;
class Figure
{
public:
	virtual double getArea() = 0;	
};
class Perimeter
{
public:
     virtual double peri() = 0;
};
class Circle : public Perimeter,public Figure
{
public:
	double r;
    void setData()
    {
        cout<<"Input the radius of the circle: "<<endl;
        cin>>r;
    }
    virtual double peri()
    {
        return 2*pi*r;
    }
    virtual double getArea()
    {
    	cout<<"The area of the circle is: "<<pi*r*r<<endl;
	}
}cir;
class Rectangle : public Perimeter,public Figure
{
public:
	double a,b;
    void setData()
    {
        cout<<"Input the sides of the rectangle: "<<endl;
        cin>>a>>b;
    }
    virtual double peri()
    {
        return 2*(a+b);
    }
    virtual double getArea()
    {
    	cout<<"The area of the rectangle is: "<<a*b<<endl;
	}
}rec;
class Square : public Perimeter,public Figure
{
public:
	double a;
    void setData()
    {
        cout<<"Input the side of the square: "<<endl;
        cin>>a;
    }
    virtual double peri()
    {
        return 4*a;
    }
    virtual double getArea()
    {
    	cout<<"The area of the square is: "<<a*a<<endl;
	}
}sq;
int main()
{
	cout<<"How many shapes do you want to find the perimeter of?"<<endl;
	int n;
	cin>>n;
	double sum ;
	for(int i=0;i<n;i++)
	{
		cout<<"What shape's perimeter do you want to calculate?"<<endl;
		cout<<"1. Circle"<<endl;
		cout<<"2. Rectangle"<<endl;
		cout<<"3. Square"<<endl;
		int choice;
		cin>>choice;
		switch(choice) 
		{
			case 1:
			 cir.setData();
			 cout<<"The perimeter of the circle is: "<<cir.peri()<<endl;
                         cir.getArea();
                         sum += cir.peri();
			 break;
			case 2:
			 rec.setData();
			 cout<<"The perimeter of the rectangle is: "<<rec.peri()<<endl;
			 rec.getArea();
			 sum += rec.peri();
			 break;
			case 3:
			 sq.setData();
			 cout<<"The perimeter of the square is: "<<sq.peri()<<endl;
			 sq.getArea();
			 sum += sq.peri();
			 break;
		}
    }
    cout<<"The sum of the perimeters is: "<<sum<<endl;
    system("pause");
    return 0;
}
