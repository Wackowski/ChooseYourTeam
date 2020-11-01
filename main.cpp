#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <list>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
char przycisk;
int x;
int main(int argc, char** argv) {
	system("CLS");
	setlocale (LC_ALL, "");
	HANDLE hOut;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );
  
      
    SetConsoleTextAttribute( hOut, BACKGROUND_GREEN );
    cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " <<  endl;
	cout << "                                                                                                                        " <<  endl;
	cout << "                                                                                                                        " <<  endl;
	cout << "                                                                                                                        " <<  endl;
	cout << "                                         ____                     _______                                               " <<  endl;
	cout << "                                        /    \\    |        |         |                                                 " <<  endl;
	cout << "                                       /          |        |         |                                                  " <<  endl;
	cout << "                                      |           |        |         |                                                  " <<  endl;
	cout << "                                      |           |        |         |                                                  " <<  endl;
	cout << "                                      |           |        |         |                                                  " <<  endl;
	cout << "                                       \\           \\      /          |                                                " <<  endl;
	cout << "                                        \\____/      \\____/           |                                                " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                            <PRESS SPACE TO START>                                                      " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	cout << "                                                                                                                        " << endl;
	przycisk=getch();
	
	if(przycisk == 32){
		system("CLS");
		cout << "                                                                                                                        " << endl;
		cout << "                                                                                                                        " << endl;
		cout << "                                                                                                                        " << endl;
		cout << "                                                                                                                        " << endl;
		cout << "                                                                                                                        " << endl;
		cout << "                                         ____                     _______                                               " << endl;
		cout << "                                        /    \\    |        |         |                                                 " << endl;
		cout << "                                       /          |        |         |                                                  " << endl;
		cout << "                                      |           |        |         |                                                  " << endl;
		cout << "                                      |           |        |         |                                                  " << endl;
		cout << "                                      |           |        |         |                                                  " << endl;
		cout << "                                       \\           \\      /          |                                                " << endl;
		cout << "                                        \\____/      \\____/           |                                                " << endl;
		cout << "                                                                                                                        " << endl;
		cout << "                                                                                                                        " << endl;
		cout << "                                                                                                                        " << endl;
		cout << "                                                 Podaj nazwy 10 zawodników                                              " << endl;
	list <string> A;
	list <string> B;
	
	for(int i=1; i<=10; i++){
		setlocale (LC_ALL, "");
		string gracz;
		cout<<"Podaj nazwê gracza nr "<<i<<endl;
    	cin>>gracz;
    	srand(time(NULL));
    	int fgh=rand()% 2;
		if(fgh%2==1){
			if(A.size()<5){
				A.push_front(gracz);
			}
			else{
				B.push_front(gracz);
			}
			
		}
		if(fgh%2==0){
			if(B.size()<5){
				B.push_front(gracz);
			}
			else{
				A.push_front(gracz);
			}
			
		}
		
	}
			system("CLS");
			ofstream k;
			k.open("druzyna1.txt");
			cout<< "Dru¿yna 1"<<endl;
			for(list<string>::iterator i=A.begin(); i!= A.end(); ++i){
	
       			cout<<*i<<" "<<endl;
       			k<<*i<<endl;
	   
	   		}
	   		cout<<endl;
	   		k.close();
	   		cout<< "********************" <<endl;
	   		k.open("druzyna2.txt");
	   		cout<< "Dru¿yna 2"<<endl;
			for(list<string>::iterator i=B.begin(); i!= B.end(); ++i){
	
       			cout<<*i<<" "<<endl;
	   			k<<*i<<endl;
	   		}	
			k.close();
	
		}
		  system ("Pause");
		return 0;
	}
