#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

struct Registro {
	char agrupacion[30];
	int nroLista;
	char candidato[30];
	int cantVotos;
	
	
};

void m1(Registro m[]);
void m2(Registro m[]);
void m3(Registro m[]);
void m4(Registro m[]);
void m5(Registro m[]);
int main(int argc, char** argv) {
	Registro mesa4568[30];
	Registro mesa4569[30];
	Registro mesa4579[30];
	Registro mesa4580[30];
	Registro mesa4581[30];
	
	

	
	m1(mesa4568);
	m2(mesa4569);
	m3(mesa4579);
	m4(mesa4580);
	m5(mesa4581);
	
	return 0;
}
void m1(Registro m[]){
	ofstream ingresoDatos("mesa4568.txt", ios::app);
	
	ingresoDatos<<"\t \t Acta de la mesa 4568"<<endl;
	ingresoDatos<<"Senadores";
	ingresoDatos<<endl<<endl;
	for(int i = 0; i<15; i++){
		

		
		ingresoDatos<<"Agrupacion politica: ";
		ingresoDatos<<" - Numero de lista: ";
		ingresoDatos<<" - Nombre del candidato: ";
		ingresoDatos<<" - Cantidad de Votos "<<endl;
		
	}
		ingresoDatos<<"---"<<endl;
		ingresoDatos<<"Votos en blanco: 10"<<endl;
		ingresoDatos<<"Votos Impugnados: 13"<<endl;
		ingresoDatos<<"-----------------------------------------------"<<endl;
		ingresoDatos<<"Diputados"<<endl;
		
		
		for(int i = 0; i<15; i++){
	
		ingresoDatos<<"Agrupacion politica: ";
		ingresoDatos<<" - Numero de lista: ";
		ingresoDatos<<" - Nombre del candidato: ";
		ingresoDatos<<" - Cantidad de Votos "<<endl;
		
	}
		ingresoDatos<<"---"<<endl;
		ingresoDatos<<"Votos en blanco: 10"<<endl;
		ingresoDatos<<"Votos Impugnados: 13"<<endl;
		ingresoDatos<<"-----------------------------------------------"<<endl;

}
void m2(Registro m[]){
	ofstream ingresoDatos("mesa4569.txt", ios::app);
	
	ingresoDatos<<"\t \t Acta de la mesa 4569"<<endl;
	ingresoDatos<<"Senadores";
	ingresoDatos<<endl<<endl;
	for(int i = 0; i<15; i++){
		

		
		ingresoDatos<<"Agrupacion politica: ";
		ingresoDatos<<" - Numero de lista: ";
		ingresoDatos<<" - Nombre del candidato: ";
		ingresoDatos<<" - Cantidad de Votos "<<endl;
		
	}
		ingresoDatos<<"---"<<endl;
		ingresoDatos<<"Votos en blanco: 10"<<endl;
		ingresoDatos<<"Votos Impugnados: 13"<<endl;
		ingresoDatos<<"-----------------------------------------------"<<endl;
		ingresoDatos<<"Diputados"<<endl;
		
		
		for(int i = 0; i<15; i++){
	
		ingresoDatos<<"Agrupacion politica: ";
		ingresoDatos<<" - Numero de lista: ";
		ingresoDatos<<" - Nombre del candidato: ";
		ingresoDatos<<" - Cantidad de Votos "<<endl;
		
	}
		ingresoDatos<<"---"<<endl;
		ingresoDatos<<"Votos en blanco: 10"<<endl;
		ingresoDatos<<"Votos Impugnados: 13"<<endl;
		ingresoDatos<<"-----------------------------------------------"<<endl;

}
void m3(Registro m[]){
	ofstream ingresoDatos("mesa4579.txt", ios::app);
	
	ingresoDatos<<"\t \t Acta de la mesa 4579"<<endl;
	ingresoDatos<<"Senadores";
	ingresoDatos<<endl<<endl;
	for(int i = 0; i<15; i++){
		

		
		ingresoDatos<<"Agrupacion politica: ";
		ingresoDatos<<" - Numero de lista: ";
		ingresoDatos<<" - Nombre del candidato: ";
		ingresoDatos<<" - Cantidad de Votos "<<endl;
		
	}
		ingresoDatos<<"---"<<endl;
		ingresoDatos<<"Votos en blanco: 10"<<endl;
		ingresoDatos<<"Votos Impugnados: 13"<<endl;
		ingresoDatos<<"-----------------------------------------------"<<endl;
		ingresoDatos<<"Diputados"<<endl;
		
		
		for(int i = 0; i<15; i++){
	
		ingresoDatos<<"Agrupacion politica: ";
		ingresoDatos<<" - Numero de lista: ";
		ingresoDatos<<" - Nombre del candidato: ";
		ingresoDatos<<" - Cantidad de Votos "<<endl;
		
	}
		ingresoDatos<<"---"<<endl;
		ingresoDatos<<"Votos en blanco: 10"<<endl;
		ingresoDatos<<"Votos Impugnados: 13"<<endl;
		ingresoDatos<<"-----------------------------------------------"<<endl;

}
void m4(Registro m[]){
	ofstream ingresoDatos("mesa4580.txt", ios::app);
	
	ingresoDatos<<"\t \t Acta de la mesa 4580"<<endl;
	ingresoDatos<<"Senadores";
	ingresoDatos<<endl<<endl;
	for(int i = 0; i<15; i++){
		

		
		ingresoDatos<<"Agrupacion politica: ";
		ingresoDatos<<" - Numero de lista: ";
		ingresoDatos<<" - Nombre del candidato: ";
		ingresoDatos<<" - Cantidad de Votos "<<endl;
		
	}
		ingresoDatos<<"---"<<endl;
		ingresoDatos<<"Votos en blanco: 10"<<endl;
		ingresoDatos<<"Votos Impugnados: 13"<<endl;
		ingresoDatos<<"-----------------------------------------------"<<endl;
		ingresoDatos<<"Diputados"<<endl;
		
		
		for(int i = 0; i<15; i++){
	
		ingresoDatos<<"Agrupacion politica: ";
		ingresoDatos<<" - Numero de lista: ";
		ingresoDatos<<" - Nombre del candidato: ";
		ingresoDatos<<" - Cantidad de Votos "<<endl;
		
	}
		ingresoDatos<<"---"<<endl;
		ingresoDatos<<"Votos en blanco: 10"<<endl;
		ingresoDatos<<"Votos Impugnados: 13"<<endl;
		ingresoDatos<<"-----------------------------------------------"<<endl;

}
void m5(Registro m[]){
	ofstream ingresoDatos("mesa4581.txt", ios::app);
	
	ingresoDatos<<"\t \t Acta de la mesa 4581"<<endl;
	ingresoDatos<<"Senadores";
	ingresoDatos<<endl<<endl;
	for(int i = 0; i<15; i++){
		

		
		ingresoDatos<<"Agrupacion politica: ";
		ingresoDatos<<" - Numero de lista: ";
		ingresoDatos<<" - Nombre del candidato: ";
		ingresoDatos<<" - Cantidad de Votos "<<endl;
		
	}
		ingresoDatos<<"---"<<endl;
		ingresoDatos<<"Votos en blanco: 10"<<endl;
		ingresoDatos<<"Votos Impugnados: 13"<<endl;
		ingresoDatos<<"-----------------------------------------------"<<endl;
		ingresoDatos<<"Diputados"<<endl;
		
		
		for(int i = 0; i<15; i++){
	
		ingresoDatos<<"Agrupacion politica: ";
		ingresoDatos<<" - Numero de lista: ";
		ingresoDatos<<" - Nombre del candidato: ";
		ingresoDatos<<" - Cantidad de Votos "<<endl;
		
	}
		ingresoDatos<<"---"<<endl;
		ingresoDatos<<"Votos en blanco: 10"<<endl;
		ingresoDatos<<"Votos Impugnados: 13"<<endl;
		ingresoDatos<<"-----------------------------------------------"<<endl;

}







