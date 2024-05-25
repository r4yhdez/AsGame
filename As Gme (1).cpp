#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
 using namespace std;
  int main () {
  	system("cls");
  	system("color E1");
  	 int a;
  	 int b;
  	 int c;
  	 int d;
  
    cout<<"      ====================================="<<endl;
	cout<<"        game tebak angka by caitroniadev"<<endl;
    cout<<"      ====================================="<<endl;
    cout<<endl;
     cout<<" masukan anka awal :"<<endl;
     cin>> a;
     
     cout<<endl;
     
    cout<<" masukan anka akhir :"<<endl;
     cin>> b;
  	 
  	cout<<endl;
  	cout<<"loading";
  	for (int h = 0; h < 3; h++) {
  		cout<<".";
  		sleep(1);
  	  }   
	    srand(time(0)); 
        c = a + (rand() % (b - a + 1)); 
    
	   system("cls");
	     
    cout<<"      ====================================="<<endl;
	cout<<"        game tebak angka by caitroniadev"<<endl;
    cout<<"      ====================================="<<endl;
    cout<<endl;
	   
    srand(time(0)); 
    c = a + (rand() % (b - a + 1));
  	cout<<"         masukan tebakan anka dari "<< a << " sampai " <<b<<endl;
  	cin>> d;
  	
  	for (int  k = 0; k < 3; k++) {
	cout<<".";
  		sleep(1);
	  }
		if ( d == c) {
  	   	  system("cls");
    cout<<"      ====================================="<<endl;
	cout<<"        game tebak angka by caitroniadev"<<endl;
    cout<<"      ====================================="<<endl;
    cout<<endl;
	    cout<<"       anda benar jawban nya adalah "<< c <<endl;
	    
	    
	    cout<<"-------------------------------------------------"<<endl;
	    
		 } else if( d != c) {
		 	 system("cls");
    cout<<"      ====================================="<<endl;
	cout<<"        game tebak angka by caitroniadev"<<endl;
    cout<<"      ====================================="<<endl;
    cout<<endl;
	    cout<<"       anda salah jawaban yang benar adalah  "<< c <<endl;
	    
	    
	    cout<<"-------------------------------------------------"<<endl;
		 }  else if ( d == "system//go//fn") {
		 	
		 	system("cls");
    cout<<"      ====================================="<<endl;
	cout<<"               system jawaban "<<endl;
    cout<<"      ====================================="<<endl;
      cout<<"            hasil: "<< c <<endl;
    cout<<endl;
		 }
  	 return 0;
  	 
  }