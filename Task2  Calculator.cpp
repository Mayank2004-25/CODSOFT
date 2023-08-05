#include<iostream>
using namespace std;
int main()
{
	float num1,num2;
	cout<< "---------------Calculator made by Mayank!---------------\n";
	cout<<"Enter the value of num1";
	cin>>num1;
	cout<<"Enter the value of num2";
	cin>>num2;
	char op;
	cout<<"Enter the operation which you want to perform (+,-,*,/,%)";
	cin>>op;
	switch(op){
		case '+':
			cout<<num1 + num2;
			break;
		case '-':
		    cout<<num1 - num2;
		    break;
		case '*':
		    cout<<num1 * num2;
		    break;
		case '/':
		    cout<<num1/num2;
		    break;
		    
		default:
			cout<<"Error! operation is not valid";
		    
	}
	return 0;
}
