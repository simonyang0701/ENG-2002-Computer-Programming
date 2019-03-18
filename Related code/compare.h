#include<iostream>
using namespace std;
#include<fstream>
#include"string"

class namepassword
{
public: namepassword(char*a,char*b);//store two characters a,b to the charaters one and two.
		void initial(char*a,char*b);//creat an new txt file whose naem is the username(a), the first 20 characters are the password.(b)
		bool compare(char*a,char*b);//compare the password to the txt file.
		char* getname();//get the name from the file.
		int getscore();//get the score from the file.

private: char one[20];//the username
		 char two[20];//the password
		char ch[20];//get the password from the file
};