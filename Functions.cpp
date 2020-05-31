#include <iostream>
#include <unistd.h>
using namespace std;

void deployMenu();	//declaring the function deployMenu()
void processSelection(); //declaring the function processSelection()


//MAIN FUNCTION
int main(){
	deployMenu();
	processSelection();
	
	cin.get();
	return 0;
}

void deployMenu(){	//defining the function depoyMenu()
	cout<<"1. Save Information"<<endl;
	cout<<"2, Delete Information"<<endl;
	cout<<"3. Edit Information"<<endl;
	cout<<"4. QUIT"<<endl;
}

void processSelection(){
	int option=0;
	do{
		cout<<"Press a number from 1 to 4"<<endl;
		cin>>option;
	}while(option!=1&&option!=2&&option!=3&&option!=4);
	
	cout<<"Processing..."<<endl;
	sleep(3);
	switch(option){
		case 1:
			cout<<"Information Saved"<<endl;
			break;
		case 2:
			cout<<"Information Deleted"<<endl;
			break;
		case 3:
			cout<<"Information Edited"<<endl;
			break;
		case 4:	
			cout<<"Quitting..."<<endl;
			break;
		default:
			cout<<"Unknow number entered"<<endl;
			break;
	}
}
