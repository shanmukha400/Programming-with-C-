#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw(){
			cout<<"Drawing a Generic shape"<<endl;
		}
};
class circle:public shape
{
	public:
		void draw() override
		{
			cout<<"Drawing a Circle"<<endl;
		}
};
class rectangle:public shape{
	public:
		void draw() override
		{
			cout<<"Drawing a Rectangle"<<endl;
		}
};
class triangle:public shape{
	public:
		void draw() override
		{
			cout<<"Drawing a Triangle"<<endl;
		}
};
int main()
{
	shape* shapeptr;
	circle c;
	shapeptr=&c;
	shapeptr->draw();
    rectangle r;
    shapeptr=&r;
    shapeptr->draw();
    triangle t;
    shapeptr=&t;
    shapeptr->draw();
    shape s;
    shapeptr=&s;
    shapeptr->draw();
    return 0;
}
