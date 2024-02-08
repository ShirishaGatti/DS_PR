#include<iostream>
using namespace std;


void setStudent();
void setPerson();
void setEmployee();
void displayStudent(struct student,int);
void displayPerson(struct person);
void displayEmployee(struct employee);
int calculation(int[]);
struct student{
 char cls[20];
 char prn[10];
};
struct person{
	char name[20];
	char address[50];
	int phoneNo[15];
	char dob[10];
};
struct employee{
	int empId[4];
	char destignation[20];
	float salary;
};
int main(){
    student s;
    int marks[4]={90,67,93,89};
    
	setStudent();
	int avg=calculation(marks);
	displayStudent(s,avg);
    person p;
	setPerson();
	displayPerson(p);
	employee e;
	displayEmployee(e);
}
void displayStudent(student s,int avg){
	cout<<s.cls;
	cout<<"PRN="<<s.prn<<endl;
	cout<<avg<<endl;
}
void setStudent(){
	cout<<"Enter student details :"<<endl;
	struct student *s;
	cout<<"Enter class"<<endl;
	cin>>*s->cls;
	cout<<"Enter prn"<<endl;
	cin>>*s->prn;
	
}
void displayPerson(person s){
	cout<<"Name"<<s.name<<endl<<"Address"<<s.address<<endl<<"Phone no"<<s.phoneNo<<endl<<"DOB"<<s.dob<<endl;
}
void setPerson(){
	struct person *s;
	cout<<"Enter name";
	cin>>*s->name;
	cout<<"Enter address";
	cin>>*s->address;
	cout<<"Enter phone no";
	cin>>*s->phoneNo;
	cout<<"Enter dob";
	cin>>(*s).dob;
}
void displayEmployee(employee e){
	cout<<"EMP id"<<e.empId<<endl<<"Designation"<<e.destignation<<endl<<"salary"<<e.salary<<endl;
}
void setEmployee(){
	struct employee *e;
	cout<<"Enter Emp id"<<endl;
	cin>>*e->	empId;
	cout<<"Enter Designation"<<endl;
	cin>>*e->destignation;
	cout<<"Enter salary"<<endl;
	cin>>(*e).salary;
}
int calculation(int marks[4]){
	int avg;
	avg=(marks[0]+marks[1]+marks[2]+marks[3])/4;
	if(avg>=91&&avg<=100)
	 cout<<"A"<<endl;
	else if(avg>=81&&avg<=90)
	 cout<<"B"<<endl;
	else if(avg>=71&&avg<=80)
	 cout<<"C"<<endl;
	else if(avg>=61&&avg<=70)
	 cout<<"D"<<endl;
	else if(avg>=51&&avg<=60)
	 cout<<"E";
	else if(avg>=41 && avg<=50)
	cout<<"F"<<endl;
	else
	 cout<<"Fail"<<endl;
	return avg;
}
