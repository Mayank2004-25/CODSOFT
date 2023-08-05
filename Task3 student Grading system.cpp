#include<iostream>
using namespace std;
int main()
{
	int i;
	string Name;
	float ID,mark, sum=0, avg;
	cout<<"Enter the Name of the student:\n";
	cin>>Name;
	cout<<"Enter the student ID:\n";
	cin>>ID;
	cout<<"Enter the Marks of the student obtained in 5 subjects:\n";
	for(i=0;i<5;i++)
	{
		cin>>mark;
		sum+=mark;
	}
	avg=sum/5;
	cout<<"\nAverage Of Marks ="<<avg;
	cout<<"\nGrade = ";
	if(avg>=91 and avg<=100)
	    cout<<"A1";
	else if(avg>=81 and avg<91)
	    cout<<"A2";
	else if(avg>=71 and avg<81)
	    cout<<"B1";
	else if(avg>=61 and avg<71)
	    cout<<"B2";
	else if(avg>=51 and avg<61)
	    cout<<"C1";
	else if(avg>=41 and avg<51)
	    cout<<"C2";
	else if(avg>=33 and avg<41)
	    cout<<"D";
	else if(avg>=21 and avg<33)
	    cout<<"E1";
	else if(avg>=0 and avg<21)
	    cout<<"E2";
	else
	    cout<<"Invalid!";
	cout<<endl;
	return 0;
}
