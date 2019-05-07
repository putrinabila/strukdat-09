/*
Nama : Putri nabila
kelas : A
NPM : 140810180007
tanggal deksripsi : 07-05-2019
Deksripsi : Program Membalikkan Kata menggunakan stack Array 
*/

#include <iostream>
#include <stdlib.h>
#include<string.h>

using namespace std; 

const int maxElmt = 255;
typedef char isi[maxElmt];

struct stack{
	isi kata;
	int top;
};

void createStack(stack& s);

void push(stack& s, isi newElmt);

void pop(stack& s);
	
main(){
	stack rev;
	isi k;
	createStack(rev);
	cout<<"\n\t\tMembuat Program Membalikkan Kata"<<endl<<endl;
	
	cout<<"\tMasukkan kalimat : ";
	cin.getline(k,maxElmt);
	
	system("cls");
	cout<<"\n\t\t\tHASIL"<<endl<<endl;
	cout<<"\tKalimat yang dimasukkan : "<<k<<endl;
	push(rev,k);
	cout<<"\tKalimat setelah dibalik : ";
	pop(rev);
}

void createStack(stack& s){
	s.top = -1;
}
void push(stack& s, isi newElmt){
	if(s.top == maxElmt-1){
        cout<<"Stack sudah penuh!";
    }
    else{
        for(int i=0; newElmt[i]; i++){
            s.top = s.top+1;
        }
        strcpy(s.kata,newElmt);
    }
}

void pop(stack& s){
	while(s.top != -1){
		cout<<s.kata[s.top];
		s.top--;
	}
}




