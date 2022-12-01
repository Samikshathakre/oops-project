#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class welcome
{
	string name;
	public:
	  void  wel()
		{
			cout<<"--------------------------------------------------------------"<<endl;
			cout<<"=============================================================="<<endl;
			cout<<"--------------------------------------------------------------"<<endl;
			cout<<"******************WELCOME TO \3 KS \3 CAFE******************"<<endl;
			cout<<"--------------------------------------------------------------"<<endl;
			cout<<"=============================================================="<<endl;
			cout<<"--------------------------------------------------------------\n"<<endl;
			cout<<"Enter your name : ";
			cin>>name;
			cout<<"\n\nHELLO"<<"   "<<name<<endl;
			cout<<"\nWHAT WOULD YOU LIKE TO ORDER ?\n\n";
		}
};
class menu_card:public welcome
{
	int choice=0,pchoice,pchoice1, quantity;
	public:
      void order()
      {
		cout<<"\t\t\t\t-------------MENU CARD-------------\n\n";

	cout<<"1) Pizzas\n";
	cout<<"2) Burgers\n";
	cout<<"3) Sandwich\n";
	cout<<"4) Momos\n";
	cout<<"5) Drinks\n\n";
	
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"\n1) "<<"MARGHERITA PIZZA "<<"\n";
		cout<<"2) "<<"CHICAGO STYLE PIZZA \n";
		cout<<"3) "<<"BBQ CHICKEN PIZZA"<<"\n";
		
		cout<<"\nPlease Enter which Flavour would you like to have?:";
		cin>>pchoice;
		
		if(pchoice>=1 && pchoice<=5)
		{
			cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 250*quantity;
			break;

			case 2: choice = 500*quantity;
			break;

			case 3: choice = 900*quantity;
			break;
			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<" MARGHERITA PIZZA ";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From KS CAFE\n";
             cout<<"\nHAVE A NICE DAY \n";
			 break;
			 
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<"CHICAGO STYLE PIZZA";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE\n";
            cout<<"\nHAVE A NICE DAY";

			 break;
			 
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"BBQ CHICKEN PIZZA";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE \n";
             cout<<"\nHAVE A NICE DAY";
			 break;
			}
		}
	 }
  else if(choice==2)
	 {
		cout<<"\n1 "<<"ALOO TIKKI BURGER"<<" Rs.50"<<"\n";
		cout<<"2 "<<"CHICKEN BURGER"<<" Rs.70"<<"\n";
		cout<<"3 "<<"CHEESE BURGER"<<" Rs.60"<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 50*quantity;
			break;

			case 2: choice = 70*quantity;
			break;

			case 3: choice = 60*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"ALOO TIKKI BURGER";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE \n";
             cout<<"\nHAVE A NICE DAY";	
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<"CHICKEN BURGER";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From  KS CAFE\n";
             cout<<"\nHAVE A NICE DAY";				
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"CHEESE BURGER";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE\n";
             cout<<"HAVE A NICE DAY";
			 break;
			}
		}
     }
     else if(choice==3)
	 {
		cout<<"\n1  "<<"VEG GRILLED SANDWICH"<<" Rs.40"<<"\n";
		cout<<"2  "<<"EGG SANDWICH "<<" Rs.60"<<"\n";
		cout<<"3  "<<"CHEESE SANDWICH"<<" Rs.50"<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 40*quantity;
			break;

			case 2: choice = 60*quantity;
			break;

			case 3: choice = 50*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"VEG GRILLED SANDWICH";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE\n";
             cout<<"\nHAVE A NICE DAY";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<"EGG SANDWICH" ;
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE \n";
             cout<<"\nHAVE A NICE DAY";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"CHEESE SANDWICH";
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From  KS CAFE\n";
             cout<<"\nHAVE A NICE DAY";
			 break;
			}
			}
			}
else if(choice==4)
	 {
		cout<<"\n1 "<<"VEG FRIED MOMOS"<<" Rs.70"<<"\n";
		cout<<"2 "<<"VEG STEAM MOMOS"<<" Rs.50"<<"\n";
		cout<<"3 "<<"TANDOORI MOMOS"<<" Rs.100"<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nHow Much Momos Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 70*quantity;
			break;
			case 2: choice = 50*quantity;
	        break;
			case 3: choice = 100*quantity;
	        break;
			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"VEG FRIED MOMOS";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE\n";
             cout<<"\nHAVE A NICE DAY";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<"VEG STEAM MOMOS";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE\n";
             cout<<"\nHAVE A NICE DAY";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"TANDOORI MOMOS";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE\n";
             cout<<"\nHAVE A NICE DAY";
			 break;
			}
        }
 }
 else if(choice==5)
	 {
		cout<<"\n1 "<<"COLD COFFEE"<<" Rs.60"<<"\n";
		cout<<"2 "<<"HOT COFFEE"<<" Rs.50"<<"\n";
		cout<<"3 "<<"MOJITO"<<" Rs.100"<<"\n";
		cout<<"\nPlease Enter which drink you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 60*quantity;
			break;

			case 2: choice = 50*quantity;
			break;

			case 3: choice = 100*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"COLD COFFEE";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE \n";
             cout<<"\nHAVE A NICE DAY";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<"HOT COFFEE";
			 cout<<"\nYour Total Bill is : "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE\n";
             cout<<"\nHAVE A NICE DAY";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"MOJITO";
			 cout<<"\nYour Total Bill is: "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From KS CAFE\n";
            cout<<"\nHAVE A NICE DAY";
			 break;
			}
		
			}
			}
			else
			{
				system("CLS");
				cout<<"Please Select Right Option: \n";
			}
}
};
int main()
{
	menu_card m;
	m.wel();
	m.order();
}
