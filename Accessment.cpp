#include<iostream>
using namespace std;

class management
{		
		string name;
		string subject;
		string course;
		int numlec;
		int i;
		public:
			management();
			
				void print_value()
			{
					for(int i=1;i<=5;i++)
			{
				
				cout<<"\n\n\t Lecturer :"<<name;
				cout<<"\n\n\t Subject :"<<subject;
				cout<<"\n\n\t Course :"<<course;
				cout<<"\n\n\t Lecturers :"<<numlec;
			}
			}
};
 management :: management()
{
	for(i=1;i<=5;i++)
		{
			cout<<"\n\n\t Lecturer : "<<i;
			
			cout<<"\n\n\t Enter Name of Lecturer :";
			cin>>name;
			cout<<"\n\n\t Enter Name of Subject :";
			cin>>subject;
			cout<<"\n\n\t Enter Name of Course :";
			cin>>course;
			cout<<"\n\n\t Enter Number of Lectures :";
			cin>>numlec;
		}	
}

main()
{
	management m;	
	m.print_value();
}
