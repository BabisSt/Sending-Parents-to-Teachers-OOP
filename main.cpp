#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Class.h"
using namespace std;
int main (void){

	int N;		//arithmos kathigitwn
	int K;		// arithmos gonewn
	int i,j,k;	// alles metablites
	List list;	//ÎDhmiourgia listas

///////////////////////////Epembasi tou xristi////////////////////////////////////////
	cout<< "Dwse arithmo kathigitwn: " ;
	cin >> N;

	cout << "Dwse arithmo gonewn: ";
	cin >> K;

	int* pin_kath = new int [N];
	int* pin_gonewn = new int [K];

/////////////////////////////////////////Kathigites ////////////////////////////////
	for (i=0;i<N;i++){	//Ekthpwsi kathigitwn

		pin_kath[i]=i;
		cout << " Kathigitis : " << pin_kath[i] << endl;
	}
	cout << endl;
///////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////Goneis////////////////////////////////////

	cout << "Sthn oura briskontai " << K << " goneis" << endl;
	for (i=0;i<K;i++){	//Ekthpwsh gonewn

		pin_gonewn[i]=i;
		cout << " Goneas : " << pin_gonewn[i] << endl;
	}
	cout << endl;

//////////////////////////////////////////////////////////////////////////////////


////////////////////Anathesi kathigitwn se goneis////////////////////////////////

	for(i=0; i <K ; i++)				//apo 0 mexri arithmo gonewn
	{
		int y = rand() % ((N/2)+1);		//tuxaios aritmos epilogis kathigitwn
		int*  pinakas_epilogwn = new int [y];	//pinakas me tous kathigites kathe goniou

		Point p1(i,0,y);
		p1.print_arithmo_kath();		// O goneas i thelei na paei se z kathigites

		cout << endl;

		for (j=0;j < y ; j++)			//apo 0 mexri mexri tuxaio arithmo epilogis kathigitwn
		{
			int x =  rand() % N;		// tuxaios arithmos metaksi 0 kai arithmo kathigitwn

			Point p1(i,x,0);
			pinakas_epilogwn[j]= x;		// topothetisi kathigiti ston pinaka

			if ( (pinakas_epilogwn[j-1] == pinakas_epilogwn [j]) && (x > 1) ) // Apagoreush gonea na episkeftei ton idio kathigiti deuterh fora
			{
				cout <<"O Goneas " << i <<  " epikseftike idi ton kathigiti"<< x  << endl;
				continue;
			}
			p1.print_epiloges();		// O goneas i paei ston kathigiti x
		}

		cout << endl;
		delete pinakas_epilogwn;		//apodesmeush mnhmhs
	}
	delete pin_kath;				//apodesmeush mnhmhs
	delete pin_gonewn;				//apodesmeush mnhmhs
	return 0;

}



