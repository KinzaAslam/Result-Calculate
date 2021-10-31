//*********************PROJECT SUBMISSION**************************************
//*********************PROGRAMMING LAB ASSISSMENT********************************
//************TO FIND THE RESULT OF FINAL YEAR STUDENT***************
#include<iostream>
#include<conio.h>
using namespace std;
class result{
	public:
		void menu();
		void per();
		void gpa();
		void cgpa();
};


void result :: menu(){
	p:

	system("cls");
	int x;
	cout<<"\n\n\t\t\t****** KINZA ASLAM *******";
	cout<<"\n\n\t\t\t****ROLL NO # 20SW071****";
    cout<<"\n\n\t**********PROJECT:TO FIND THE RESULT OF THE UNIVERSITY STUDENT*******";
	cout<<"\n\n\n\t\t\tCONTROL PANEL ";
	cout<<"\n\n\n 1. Percentage % ";
	cout<<"\n 2. GPA ";
	cout<<"\n 3. CGPA ";
	cout<<"\n 4. Exit ";
	cout<<"\n\n 5. Enter your choice :";
	cin>>x;
	switch(x){
		case 1:
		per();
		break;
		case 2:
		gpa();
		break;
		case 3:
		cgpa();
		break;
		case 4:
		exit(0);
		default:
		cout<<"\n\n\n\t\tInvalid Value...PLZ TRY AGAIN:\n\t\t\t***THANKU***...";	
	}
		getch();
		goto p;	
}
 void result::per(){
 	system("cls");
 	float obt_marks,tot_marks,per;
 	cout<<"\n\n\n\t\t\t\tPercentage %";
 	cout<<"\n\nObtain Marks = ";
 	cin>>obt_marks;
 	cout<<"\n\nTotal Marks = ";
 	cin>>tot_marks;
 	per=obt_marks/tot_marks*100;
 	
 	cout<<"\n\n\n\t\t\tYOUR PERCENTAGE % IS = "<<per;
 }
 void result::gpa(){
 	system("cls");
 	int s,m,c_h;
 	float grade ,tot_grade,tot_c;
   cout<<"\n\n\n\t\t\t\tFind GPA";
   cout<<"\n\n\No Of Subjects = ";
   cin>>s;
   for(int i=1;i<=s;i++){
   	cout<<"\n\nEnter Marks = ";
   	cin>>m;
   	cout<<"\n\nCredit Hour = ";
   	cin>>c_h;
   	if(m >=85)
   	grade= 4.00;
   	else if(m >=80)
   	grade= 3.70;
   	else if(m >=75)
   	grade= 3.30;
   	else if(m >=72)
   	grade= 3.00;
   	else if(m >=68)
   	grade= 2.70;
   	else if(m >=64)
   	grade= 2.50;
   	else if(m >=61)
   	grade= 2.30;
   	else if(m >=58)
   	grade= 2.00;
   	else if(m >=55)
   	grade= 1.70;
   	else if(m >=52)
   	grade= 1.50;
   	else if(m >=50)
   	grade= 1.00;
   	else 
   	grade= 0.00;
   	tot_grade +=grade*c_h;
   	tot_c +=c_h;
    
}

cout<<"\n\n\n\t\t\tYOUR GPA IS = "<<tot_grade/tot_c;
 
 }
  void result::cgpa(){
  
  	system("cls");
  	float o,c,g;
  	cout<<"\n\n\n\t\t\tFind CGPA";
  	cout<<"\n\nOld Semister GPA = ";
  	cin>>o;
  	cout<<"\n\nCurrent Semister GPA = ";
  	cin>>c;
  	g=(o+c)/2;
    cout<<"\n\n\t\t\t\tYOUR CGPA = : "<<g<<endl;
    if(g>3.00){
    	cout<<"\n\t\t\t ***CONGRATULATIONS*** "<<endl;
	}
	else
	cout<<"\t\t\t\t ***WORK HARD*** "<<endl;
  }


int main(){
	result r;
	r.menu();
}
