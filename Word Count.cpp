#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(){
	char ch;
	ifstream inFile;
	string filename;
	int count=0;
	
	cout<<"Please enter the file name\n";
	getline(cin,filename);
	
	inFile.open(filename.c_str());
	
	if(!inFile.is_open())
	{
		cout<<"Error in open the file,make sure file should exist!";
		return 1;
	}
	
	while((ch = inFile.get()) != EOF)
	{
		if(ch == ' '|| ch == '\n')
		count++;
	}
	
	count++; // Add one to count for the last word
	
	cout<<"Number of words in a file is "<<count;
	inFile.close();
	
	return 0;
}
