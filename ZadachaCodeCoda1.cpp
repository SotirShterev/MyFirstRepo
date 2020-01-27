#include<bits/stdc++.h>
using namespace std;
const double pi = 3.14;
class Perimeter
{
public:
     virtual double peri() = 0;
};
class Circle : public Perimeter
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
        cout<<"The perimeter of the circle is: "<<2*pi*r<<endl;
    }
}cir;
class Rectangle : public Perimeter
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
        cout<<"The perimeter of the rectangle is: "<<2*(a+b)<<endl;
    }
}rec;
class Square : public Perimeter
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
        cout<<"The perimeter of the square is: "<<4*a<<endl;
    }
}sq;
int main()
{
	cout<<"How many shapes do you want to find the perimeter of?"<<endl;
	int n;
	cin>>n;
	double sum = 0;
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
                         cir.peri();
                         sum+=2*cir.r*pi;
			 break;
			case 2:
			 rec.setData();
			 rec.peri();
			 sum+=2*(rec.a + rec.b);
			 break;
			case 3:
			 sq.setData();
			 sq.peri();
			 sum+=4*sq.a;
			 break;
		}
    }
    cout<<"The sum of the perimeters is: "<<sum<<endl;
    system("pause");
    return 0;
}
