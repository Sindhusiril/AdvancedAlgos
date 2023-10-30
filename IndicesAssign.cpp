#include<iostream>
#include<array>
using namespace std;

void arrayinput(int sizeofarray, int inputarray[]){
	int x=0;
	while(x<sizeofarray){
		cin>>inputarray[x];
		x++;
	}
	
}

int main(){
	int sizeofarray;
	int inputarray[120];
	int targetnumber;
	int y=0;
	cout<<"Enter the size of array";
	cin>>sizeofarray;
	cout<<"Enter the elements of array";
	arrayinput(sizeofarray,inputarray);
	cout<<"Enter the target number";
	cin>>targetnumber;
	while(y<(sizeofarray-1)){
		int z=y+1;
		while(z<(sizeofarray)){
			if((inputarray[y]+inputarray[z])==targetnumber){
				cout<<y;
				cout<<z;
			}
			z++;
		}
		y++;
	}
	
	
}