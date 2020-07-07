#include <iostream>
using namespace std;

int main(){
	cout<<"WELCOME! I'M STORY TELLER HERE.."<<endl;
	cout<<"WILL GUIDE YOU HOW TO CHOICE DESTINY OF THIS STORY.."<<endl<<endl;
	cout<<"SO?"<<endl<<endl<<endl;
	
	int pemain;
	char sure;
	
	cout<<"LET'S BEGIN"<<endl<<endl;
	cout<<"Pilih Pemain: "<<endl;
	cout<<"1. Rina"<<endl;
	cout<<"2. Doni"<<endl;
	cout<<"3. Putri"<<endl;
	cin>>pemain;
	
	string namapemain;
	if(pemain==1){
		namapemain = "rina";
	}else if (pemain==2){
		namapemain = "doni";
	}else if (pemain==3){
		namapemain = "putri";
	}else{
		namapemain ="blank";
	};
	
	anda:
		cout<<"\nAre you sure?(y/n)"<<endl;
		cin>>sure;
		
	if(sure=='y'){
		goto start;
	}else if (sure=='n'){
		goto anda;
	}else{
		cout<<"what do you mean?";
	};
	
	start:
		cout<<"YOU AS "<<namapemain<<" follow our story, and choice your rule.."<<endl;
	

	
	
	return 0;
}
