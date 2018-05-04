#include<iostream>
#include<string>
#include<stdlib.h>
#include<math.h>

using std::cout;
using std::cin;
using std::endl;

int menu();
void ejercicio1();
void ejercicio2();
void circulos_coordenadas(int x1,int y1,int x2, int y2,int x3, int y3, int x4, int y4);



	int main(){
		char res='s';
		do{
		   switch (menu()){
		       case 1:
			  ejercicio1();
		          break;
		       case 2:				
			  ejercicio2();																		 break;
                       case 3:
			  //ejercicio3();
			  break;																              Default:
		           cout<<"Opcion invalida"<<endl;	
	 		   break;																	  }//fin del switch	
	         cout<<"\n Desea continuar?(s/n)"<<endl;														cin>>res;
		}while(res=='s' || res=='S');//fin del do 
	
	}//fin del main

	int menu(){
		int opcion=0;
	            cout<<"--Menu--"<<endl;	
		    cout<<"1. Triangulos"<<endl;
	            cout<<"2. Distancia entre 2  Circulos"<<endl;	
		    cout<<"3. numero de Harshad"<<endl;
		    cout<<"--------------------"<<endl;
		    cout<<"Ingrese una opcion"<<endl;           			
		    cin>>opcion;
	return opcion;	    							
	}//fin del menu
	 


        void ejercicio1(){	
            	
	}//fin de ejercicio1

	
	void ejercicio2(){
		int x1, x2, x3, x4;
		int y1, y2, y3, y4;	
		cout<<"Ingrese x1 del centro del circulo 1"<<endl;
		cin>>x1;
		cout<<"Ingrese y1 del centro del circulo 1"<<endl;	
	        cin>>y1;
		cout<<"-------------------------------"<<endl;
		cout<<"Ingrese x2 del extremo del circulo 1"<<endl;
		cin>>x2;
		cout<<"Ingrese y2 del extremo del circulo 1"<<endl;
	        cin>>y2;
		cout<<"_______________________________"<<endl;
		cout<<"Ingrese x1 del centro del circulo 2 "<<endl;
		cin>>x3;
		cout<<"Ingrese y1 del centro del circulo 2"<<endl;
	        cin>>y3;
		cout<<"-------------------------------"<<endl;
		cout<<"Ingrese x2 del extremo del circulo 2"<<endl;
		cin>>x4;
		cout<<"Ingrese y2 del extremo del circulo 2"<<endl;
		cin>>y4;
	        cout<<"_______________________________"<<endl;
		circulos_coordenadas(x1,y1,x2,y2,x3,y3,x4,y4);
	}//fin de ejercicio2


	void circulos_coordenadas(int x1,int y1,int x2, int y2,int x3, int y3, int x4, int y4){
             int circulo1_x1= x1;
	     int circulo1_y1=y1;
	     /////////////
	     int circulo1_x2=x2;
	     int circulo1_y2=y2;
	     /////////////
	     int circulo2_x3=x3;
	     int circulo2_y3=y3;
	     ////////////
	     int circulo2_x4=x4;
	     int circulo2_y4=y4;
	     //////
	     int centinela = 0;
	     //
	     int radio_1 = sqrt((circulo1_x2 - circulo1_x1)*(circulo1_x2 -circulo1_x1 ) + (circulo1_y2 - circulo1_y1)*(circulo1_y2 - circulo1_y1));
	     int radio_2 = sqrt((circulo2_x4 - circulo2_x3)*(circulo2_x4 -circulo2_x3 ) + (circulo2_y4 - circulo2_y3)*(circulo2_y4 - circulo2_y3));
	     //
	     int distancia_centro = sqrt((circulo2_x3 - circulo1_x1)*(circulo2_x3 -circulo1_x1 ) + (circulo2_y3 - circulo1_y1)*(circulo2_y3 - circulo1_y1));	    
	     int suma_radios = radio_1 + radio_2;

	     
                   if(suma_radios > distancia_centro){
			   cout<<"Los circulos chocan"<<endl;
		   }else{
			  cout<<"Los circulos no chocan"<<endl;
		   }
		
			    

	}//fin de metodo de coordenadas	
