class judge
{
public:
	void swap(int array1[],int i,int j);//swap the order
	void InsertSort(int array1[],int n);//change the order from the smallest to the biggest
	int Countsuit(int n1,int n2,int n3,int n4,int n5,int n6);//count the largest number of suit in six cards
	int judge1(int n1,int n2,int n3,int n4,int n5,int n6);//Judge Rule 1 for six cards
	int judge2(int n1,int n2,int n3,int n4,int n5,int n6);//Judge Rule 2 for six cards
	int judge3(int n1,int n2,int n3,int n4,int n5,int n6);//Judge Rule 3 for six cards
	int judge4(int n1,int n2,int n3,int n4,int n5,int n6);//Judge Rule 4 for six cards
	int judge5(int n1,int n2,int n3,int n4,int n5,int n6);//Judge Rule 5 for six cards
	int judge6(int n1,int n2,int n3,int n4,int n5,int n6);//Judge Rule 6 for six cards
	int judge7(int n1,int n2,int n3,int n4,int n5,int n6);//Judge Rule 7 for six cards
	int judge8(int n1,int n2,int n3,int n4,int n5,int n6);//Judge Rule 8 for six cards
	int judge9(int n1,int n2,int n3,int n4,int n5,int n6);//Judge Rule 9 for six cards
	int Ccredit(int n1,int n2,int n3,int n4,int n5,int n6);//get the credit of the six cards
	int joker(int n1,int n2,int n3,int n4,int n5,int n6);//judge if there is a joker in the six cards
	int Fcredit(int n1,int n2,int n3,int n4,int n5,int n6);//Judge the final credit for user
private:
	int n1;
	int n2;
	int n3;
	int n4;
	int n5;
	int n6;
};