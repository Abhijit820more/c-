//program to encapsulation
//program to class and object

#include<iostream.h>
#include<conio.h>

class student
{
  private:
    int roll_no,m1,m2,m3,total;
    char sname[30];
    float percent;

   public:
     void  get()
      {
	 cout<<"Enter the roll_no:->";
	 cin>>roll_no;
	 cout<<"Enter the name:->";
	 cin>>sname;
	 cout<<"Enter the m1:->";
	 cin>>m1;
	 cout<<"enter the m2:->";
	 cin>>m2;
	 cout<<"Enter the m3:->";
	 cin>>m3;
	 cout<<"Enter the total:->";
	 cin>>total;
	 cout<<"Enter the percent:->";
	 cin>>percent;
      }
     void  put()
      {
	cout<<roll_no<<"\t\t";
	cout<<sname<<"\t\t";
	cout<<m1<<"\t\t";
	cout<<m2<<"\t\t";
	cout<<m3<<"\t\t";
	cout<<total<<"\t\t";
	cout<<percent<<"endl";
      }
};
 void main()
 {
   student s1,s2;
   clrscr();
     s1.get();
     s2.get();

    cout<<endl<<"Student information:->"<<endl;
    cout<<"_________________________"<<endl;
    cout<<"roll_no"<<"\t\t"<<"sname"<<"\t\t"
    <<"m1"<<"\t\t"<<"m2"<<"\t\t"<<"m3"<<"\t\t"
    <<"total"<<"\t\t"<<"percent"<<endl;
    cout<<"_________________________"<<endl;
     s1.put();
     s2.put();


   getch();
 }