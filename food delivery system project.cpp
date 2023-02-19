#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class MenuAndPrice{
	protected:
	int Fast_food_price[5]={200,260,290,300,1500};
	int Chicken_Pizza[4]={350,500,900,1180};
	int Vegetable_Pizza[4]={300,460,870,1100};
	int National_Food_price[8]={300,280,290,230,350,320,348,20};
    int Continental_food_price[10]={310,280,340,290,380,310,325,210,320,360};
	int Dessert_price[6]={150,1500,260,450,1000,1200};
	int Super_Deal_price[7]={450,380,1200,530,900,530,2300};
	friend void Deal_price(int a,int b,char c[80],int d);
		string Super_Deals[7]=
	{"         Deal 1:\t Spicy zinger burger, 6pc of Nuggets and regular fries                             450Rs",
	"         Deal 2:\t Two chicken burgers with fries                                                     380Rs",
	"         Deal 3:\t 2 zinger burger + 2chicken burger + 2regular fries + 4 Soft drinks 300ml           1200Rs",
	"         Deal 4:\t 2 zinger burger +2 Soft drinks 300ml                                               530Rs",
	"         Deal 5:\t 3 zinger burger +2 small chicken pizza                                             900Rs",
	"         Deal 6:\t 3 chicken burger+2 small chicken pizza + 1 medium vegetable pizza                  530Rs",
	"         Deal 7:\t 5chicken burger+2 medium Pizza + 4 Soft drinks 300ml + 1 regular fries            2300Rs"
	};
			 string Fast_foods[7]=
	{"         1.cheese sandwich      200Rs",
	 "         2.hamburgers           260Rs",
	 "         3.zinger burger        290Rs",
	 "         4.cheese burger        300Rs",
	 "         5.chicken sandwich     150Rs",
	 	 "\n\t6.chicken pizza\n\t\tsmall\t350Rs\n\t\tmedium\t500Rs\n\t\tlarge\t900Rs\n\t\tExtra\tlarge1180Rs",
	 "         7.vegetable pizza\n\t\tsmall\t300Rs\n\t\tmedium\t460Rs\n\t\tlarge\t870Rs\n\t\tExtra\tlarge1100Rs"
	}; 
			 string National_Food[8]=
	{"         1.Qurma                   300Rs",
	 "         2.Biryani                 280Rs",
	 "         3.Qeema                   290Rs",
	 "         4.anday chole             230Rs",
	 "         5.chicken Handi           350Rs",
	 "         6.chichen karhai          320Rs",
	 "         7.Chicken Tandori         348Rs",
	 "         8.Naan                     20Rs",
	};
				 string Continental_food[10]={
	"         1.Sweet Potato Pie                                  310Rs",
	"         2.Chicken And Cheese Salad                          280Rs",
	"         3.Batter Fried Fish with Cheese Sauce               340Rs",
	"         4.Baked Vegetables                                  290Rs",
	"         5.Honey Roast Chicken                               380Rs",
	"         6.Grilled Chicken                                   310Rs",
	"         7.Chicken Salad                                     325Rs",
	"         8.Fried Rice                                        210Rs",
	"         9.Fish Mayonnaise                                   320Rs",
	"         10.Grilled Vegetable Capachio                       360Rs"
	};
	string Dessert[6]=
	{
	"\t1.Onigiri                        150Rs",
	"\t2.Pecan Pie Cheesecake           1500Rs",
	"\t3.Sheer Qoorma                   260Rs",
	"\t4.Rabri                          450Rs",
	"\t5.Brownie                        1000Rs",
	"\t6.PineApple Cake                 1200Rs"
	};
};
void Deal_price(int a,int b,char c[80],int d){
	MenuAndPrice finalstage;
	
	if(a==3&&b>7){
	b=b-1;	
	cout<<endl<<endl<<c<<"! Thanks for placing you order, Your bill is:\t"<<finalstage.National_Food_price[b]*d<<" Rs";

	}
	else if(a==1&&b<6&&b>0){
		b=b-1;
	cout<<endl<<endl<<c<<"! Thanks for placing you order, Your bill is:\t"<<finalstage.Super_Deal_price[b]*d<<" Rs";
	}
	else if(a==2&&b<5&&b>0){
		b=b-1;
	cout<<endl<<endl<<c<<"! Thanks for placing you order, Your bill is:\t"<<finalstage.Fast_food_price[b]*d<<" Rs";
	}
	else if(a==2&&b==6){
		int f;
			cout<<"\n\n  Chicken Pizza:\n\n";
			cout<<"\t\t1. small\t350Rs\n\t\t2. medium\t500Rs\n\t\t3. large\t900Rs\n\t\t4. Extra large\t 1180Rs";
			cout<<"\n\n  Select the Size:\t";
			cin>>f;
			f=f-1;
			cout<<endl<<endl<<c<<"! Thanks for placing you order, Your bill is:\t"<<finalstage.Chicken_Pizza[f]*d<<" Rs";
	}
		else if(a==2&&b==7){
			int f;
			cout<<"\n\n  Vegetable Pizza:\n\n";
			cout<<"\t\t1. small\t300Rs\n\t\t2. medium\t460Rs\n\t\t3. large\t870Rs\n\t\t4. Extra large\t 1100Rs";
			cout<<"\n\n  Select the Size:\t";
			cin>>f;
			f=f-1;
			cout<<endl<<endl<<c<<"! Thanks for placing you order, Your bill is:\t"<<finalstage.Vegetable_Pizza[f]*d<<" Rs";
	} 
	else if(a==4&&b<10&&b>0){
		b=b-1;
	cout<<endl<<endl<<c<<"! Thanks for placing you order, Your bill is:\t"<<finalstage.Continental_food_price[b]*d<<" Rs";
	}
	else if(a==5&&b<6&&b>0){
		b=b-1;
	cout<<endl<<endl<<c<<"! Thanks for placing you order, Your bill is:\t"<<finalstage.Dessert_price[b-1]*d<<" Rs";
	}

	cout<<endl<<c<<" Your order will be deliveried to you in 45 minutes";
}

void Signing(char name[100],char address[1000]){
			int k=0;
	char c;
int g;
	//Sing in/up
	string email;
	char Password[8];
	ofstream outfile;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"name:\t" << name << endl;
   cin.ignore();
   outfile <<"address:\t" << address << endl;
   outfile.close();
  
   do{
   	cout<<endl<<"Do you already have an account(y\\n):\t";
   	cin>>c;
   	if(c=='y'||c=='Y'){
   		cout<<endl<<"Enter your email please:\t";
   		cin>>email;
  	ofstream outfile;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"Email:\t" << email << endl;
 outfile.close();
 
    cout<<endl<<"Enter your Password please:\t";
   	cin>>Password;
   fstream file;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"Password:\t" << Password << endl;
    outfile.close();
    g=2;
	   }
   	else if(c=='n'||c=='N'){
	   
   		cout<<endl<<"Enter your email please:\t";
   		cin>>email;
  	ofstream outfile;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"Email:\t" << email << endl;
 outfile.close();
 

    cout<<endl<<"Enter your Password please:\t";
   	cin>>Password;
   fstream file;
   outfile.open("userdata.txt",ios::out | ios::in |ios::app);
   outfile <<"Password:\t" << Password << endl;
    outfile.close();
    g=2;

	}
	if(g!=2){
		cout<<endl<<"Invalid input!";
	}
   }while(g!=2);
void feedback();
	}
class SuperDealsList:public MenuAndPrice{
	
	public:
	void printList(){
			cout<<endl<<"\tThanks for Selecting the Super Deals Category \n\n";
		for(int i=0;i<7;i++){
			cout<<Super_Deals[i];
			cout<<endl;
		}
	}
	
};
void feedback(char name[80]){
	char y;
cout<<endl<<endl<<"Dear "<<name<<"! do you have a suggestion for us!(y\\n):\t";
cin>>y;
if(y=='y'){
	string email;
	char feedback[100000];
	cout<<"\n\n\tEnter your email id:\t";
	cin>>email;
	cout<<endl<<endl<<"Please write down your suggestion:\t";
	cin.ignore();
	cin.getline(feedback,1000);
	ofstream outfile;
   outfile.open("Feedback.txt",ios::out | ios::in |ios::app);
   outfile <<"name:\t" << name <<endl<<"email:"<<email<<endl<<"Suggestion:\t"<<feedback<<endl<<endl;
   outfile.close();
   cout<<endl<<endl<<"Dear "<<name<<"! Thanks for your suggestion we will work on it soon";
}
else{

cout<<endl<<endl<<name<<"! Thanks for using our app\n\nwe are hoping to see you back soon";
}
}
class FastFood:public MenuAndPrice{
	public:
	void printList(){
		cout<<endl<<"\tThanks for Selecting the Fast Food Category \n\n";
		for(int i=0;i<7;i++){
			cout<<Fast_foods[i];
			cout<<endl;
		}
	}
};
class NationalFooD:public MenuAndPrice{
	public:
	void printList(){
		cout<<endl<<"\tThanks for Selecting the National Food Category \n\n";
		for(int i=0;i<8;i++){
			cout<<National_Food[i];
			cout<<endl;
		}
	}
};
class ContinentalFooD:public MenuAndPrice{
	public:
	void printList(){
		cout<<endl<<"\tThanks for Selecting the Continental Food Category \n\n";
		for(int i=0;i<10;i++){
			cout<<Continental_food[i];
			cout<<endl;
		}
	}
};
class DessertLIST:public MenuAndPrice{
	public:
	void printList(){
		cout<<endl<<"\tThanks for Selecting the Dessert Category \n\n";
		for(int i=0;i<6;i++){
			cout<<Dessert[i];
			cout<<endl;
		}
	}
};
void menu(char a[80]){
		cout<<endl<<"Dear "<<a<<"! Welcome to our restruant!";
	
	//menu display
	cout<<endl<<"We are having following Food Categories available for you Dear "<<a<<"!";
		cout<<endl<<endl<<"\t1. Super Deals!";
	cout<<endl<<"\t2. Fast food";
	cout<<endl<<"\t3. National food";
	cout<<endl<<"\t4. Continental food";
	cout<<endl<<"\t5. Desserts";
	cout<<endl<<"\t6. Exit from program";
}
void options (int a,char name[80]){
	SuperDealsList O1;
	FastFood O2;
	NationalFooD O3;
	ContinentalFooD O4;
	DessertLIST O5;
	
if(a==1){
	O1.printList();
}
else if(a==2){
	O2.printList();
}
else if(a==3){
	O3.printList();
}
else if(a==4){
	O4.printList();
}
else if(a==5){
	O5.printList();
}
else if(a==6){
cout<<endl<<name<<" You Have Successfully Exit\nWe hope to see you back soon "<<name;
	}
else{
	cout<<endl<<"invalid Selection";
}
}
int main(){
	char go='y';
	int option,selection;
	float number_of_items;
char name[100],address[1000];

	cout<<"Enter your name please:\t";
	cin.get(name,100);
	cin.ignore();
	cout<<"\nEnter your current address:";
	cin.get(address,1000);
//	cin.ignore();
//	MenuAndPrice a1;
	Signing(name,address);
	do{
	menu(name);
	cout<<endl<<"\tMake a Choose!:\t";
	cin>>option;
	
	cout<<endl<<endl;
	options(option,name);
	if(option<=5){
	
	cout<<endl<<"\tPlease Make Choose:\t";
	cin>>selection;
	cout<<endl<<"\t\t"<<name<<" Please enter the number of items required:\t";
	cin>>number_of_items;
	Deal_price(option,selection,name,number_of_items);
	
}
	cout<<endl<<endl<<"\tDo you wants to go back for making in other selection(y\\n):\t";
	cin>>go;
	;}while(go=='y'||go=='Y');
 feedback(name);
}
