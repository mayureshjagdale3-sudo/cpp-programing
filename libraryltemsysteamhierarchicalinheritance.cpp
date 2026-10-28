#include<iostream>
using namespace std;

class Libraryitem
{
protected:
int id;
string title;

public:
void get()
{
cout<<"Enter the ID:";
cin>>id;

cout<<"Enter the Title:";
cin>>title;
}

void display()
{
cout<<"ID:"<<id<<endl;
cout<<"Title:"<<title<<endl;
}
};

class Book:public Libraryitem
{
protected:
string variation;
int duration;

public:
void get1()
{
cout<<"Enter the type of book:";
cin>>variation;

cout<<"Enter the no. of days you want to borrow the book:";
cin>>duration;
}

void display1()
{
cout<<"Type:"<<variation<<endl;
cout<<"Days:"<<duration<<endl;
}
};

class Magzine:public Libraryitem
{
protected:
string type;
int days;

public:
void get2()
{
cout<<"Enter the type of Magzine:";
cin>>type;

cout<<"Enter the no. of days you want to borrow the Magzine:";
cin>>days;
}

void display2()
{
cout<<"Type:"<<type<<endl;
cout<<"Days:"<<days<<endl;
}
};

int main()
{
Book b;
Magzine m;

cout<<"--- Enter Book Details ---"<<endl;
b.get();
b.get1();

cout<<"\n--- Enter Magzine Details ---"<<endl;
m.get();
m.get2();

cout<<"\n\n===== LIBRARY DETAILS ====="<<endl;

cout<<"\n--- Book Details ---"<<endl;
b.display();
b.display1();

cout<<"\n--- Magzine Details ---"<<endl;
m.display();
m.display2();

return 0;
}