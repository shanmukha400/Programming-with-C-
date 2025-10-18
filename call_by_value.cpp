#include<iostream>
using namespace std;
void swap(int x,int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"in swap:";
	cout<<x<<"\n"<<y<<"\n";
}
int main()
{
	int a=30;
	int b=20;
	cout<<"before swap:"<<a<<"\n"<<b<<"\n";
	swap(a,b);
	cout<<"after swap:"<<a<<"\n"<<b;
	return 0;
}
