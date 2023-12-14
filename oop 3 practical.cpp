#include<iostream>
#include<string>
using namespace std;

class Publication
{
	string title;
	float price;
	
	public:
		void accept()
		{
			cout<<"Enter the publication title: ";
			cin.get();
			getline(cin,title);
			cout<<"Enter the publication price: ";
			cin>>price;
		}
		void display()
		{
			cout<<"The publication title: "<<title<<endl;
			cout<<"The publication price: "<<price<<endl;
		}
};

class Book : public Publication
{
	int pages;
	
	public:
		void accept_book()
		{	
			try
			{
				accept();
				cout<<"Enter the pages of book: ";
				cin>>pages;
				if(pages<=0)
				
					throw pages;
			}
			catch(...)
			{
				cout<<"Invalid page count.";
				pages=0;
			}
			
		}
		void display_book()
		{
			display();
			cout<<"The book pages: "<<pages<<endl;
		}
};

class Tape : public Publication
{
	float time;
	
	public:
		void accept_tape()
		{
			try
			{
				accept();
				cout<<"Enter the time of book: ";
				cin>>time;
				if(time<=0)
				
					throw time;
			}	
				catch(...)
				{
					cout<<"Invalid tape time.";
					time=0;
				}
				
		} 
		display_tape()
		{
			display();
			cout<<"The time of book: "<<time<<" min "<<endl;
		}
};

int main()
{
	Book b1;
	Tape t1;
	
	b1.accept_book();
	cout<<endl;
	t1.accept_tape();
	cout<<endl;
	b1.display_book();
	cout<<endl;
	t1.display_tape();
	
	return 0;
}
