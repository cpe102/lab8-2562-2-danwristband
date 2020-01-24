#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;


int main(){	
	int EndOfYear=1;
	float PrevBalance, Interest,Total,Payment,NewBalance,Interes;
	cout<<"Enter initial loan";
	cin>>PrevBalance;
	
	cout<<"Enter interest rate per year(%):";
	cin>>Interes;

	cout<<"Enter amount you can pay per year:";
	cin>>Payment;

	

	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	do
	{	
		Interest=(PrevBalance*Interes)/100;
		Total=PrevBalance+Interest;
		NewBalance=Total-Payment;
		
		/* code */cout << fixed << setprecision(2); 
	cout << setw(13) << left << EndOfYear; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	if(Payment>Total){
		Payment=Total;
	}
	cout << setw(13) << left << Payment;
		if(NewBalance<=0){
		NewBalance=0;}
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
		EndOfYear++;
		NewBalance=Total-Payment;
		
		PrevBalance=NewBalance;
		
	
	if(NewBalance<=0)
	{
		break;}
	} while (1);
	

	
	
	return 0;
}
