#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;



class list
{
public:
	int  convert(char array0[6]);
	void transfer(char String2[6],int credit);
	void gg(char name[20],int credit);
private:
	char buffer[280];
	char whole[260];
	int credit;
	char name[20];
	char array0[6];
};