#include<iostream>
using namespace std;

class movie
{
	public:
		int ryear;
		string title,genre;
		
	setData()
	{
		cout<<"Enter the released year=";
		cin>>ryear;
		cout<<"Enter the title=";
		cin>>title;
		cout<<"Enter the genre=";
		cin>>genre;
	}	
	getData()
	{
		cout<<"released year:"<<ryear<<endl;
		cout<<"title:"<<title<<endl;
		cout<<"genre:"<<genre<<endl;
	}
};


int main()
{
	int i;
	movie m[1];
	
	m[i].setData();
	m[i].getData();
	return 0;
	
}
