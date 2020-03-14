#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class student
{
    int rollno;
    char name[20];
    char course[20];

       public:
           student(int r,char n[],char c[]="computer")
           {
               rollno=r;
               strcpy(name,n);
               strcpy(course,c);
           }
           void showdata()
           {
               cout<<"\nrollno="<<rollno;
               cout<<"\nname="<<name;
               cout<<"\ncourse="<<course;
           }
};
int main()
{
    student s(101,"parth","electrical");
    student s1(102,"gita");
    s.showdata();
    s1.showdata();
    getch();
    return 0;
}