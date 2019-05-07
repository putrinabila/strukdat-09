/*
Nama : Putri nabila
kelas : A
NPM : 140810180007
tanggal deksripsi : 07-05-2019
Deksripsi : Program Membalikkan Kata menggunakan stack Sigle Linked List
*/

#include<iostream>

using namespace std;

 struct Stack{
   char kata;
   Stack* next;
  };
  
typedef Stack* pointer;
typedef pointer List;

void createList (List& Top){
 Top=NULL;
}

void createElement(pointer& pBaru){
 pBaru=new Stack;
 cin>>pBaru->kata;
}

void pushStackL(List& Top,pointer pBaru){
 if(Top==NULL){
  Top=pBaru;
 }
 else {
  pBaru->next=Top;
  Top=pBaru;
 }
}

void popStackL(List& Top){
 pointer pHapus;
 cout << Top->kata;
 if(Top->next==NULL){
  Top=NULL;
 }
 else {
  pHapus=Top;
  Top=Top->next;
  pHapus->next=NULL;
 }
}

int main(){
  int x;
  pointer pBaru;
  List Top;
  cout << "Berapa banyak huruf : "; cin>>x;
   createList(Top);
   for (int i=0;i<x;i++){
    cout<<"Masukkan huruf  : "; //masukkan dengan mengenter setiap huruf yang dimasukkan
     createElement(pBaru);
    pushStackL(Top,pBaru);
    }
   for (int i=0;i<x;i++){
     popStackL(Top);
   }
 }
