
#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdlib.h>

using namespace std;
int n = -1;
int p12=0;
struct lista{ //declaracion de la struct de la lista
	int num;
	struct lista *sig;
};

typedef struct lista *nodo; // definicion del tipo "nodo"

nodo fina;// auxiliar por las dudas
int program=0;
int cantidad(nodo &listt){
        while(listt!=NULL){

        }
};
void encontrar(nodo &listt,int valor1, struct lista *valor2) {
	nodo q= listt;
	int i=0;
	int found = 0;
	while (found=1) {
		if (q->num == valor1&&q->sig==valor2) {
                listt=q;
			q = q->sig;
			found = 1;
		}
		else {
			i += 1;
			q = q->sig;
		}
	}
};

void imprimir(nodo &listt) {
	int i=1;
	nodo liste=listt;
	cout<<"position | number"<<"\n";
	while(liste!=NULL){
    cout<<i<<" | "<<liste->num<<"\n";
    liste=liste->sig;
    i+=1;
	}

};
    void ordenarl(nodo &listt,nodo &t){
        nodo aux1=listt;
        nodo aux2=listt;
        aux2=aux2->sig;
        int a =0;
        while(a!=1){
            if(aux1->num>t->num&&aux2->num<t->num){
                t->sig=aux2;
                aux1->sig=t;
                a=1;
            }else{
            aux2=aux2->sig;
            aux1=aux1->sig;
            }
        }
    encontrar(t,aux2->num,aux2->sig);
    encontrar(t,aux1->num,aux1->sig);
    };
void insertarelemento(nodo &listt,int valor){
    n+=1;
    nodo t;
    t= new(struct lista);

    t->num=valor;
    if(n>=1){
    ordenarl(listt,t);}
    if(n=0){
        t->sig=NULL;
    }
    t->sig=listt;
    listt=t;
};
void ingreso(nodo &listt,int valor){
    bool terminado= true;
    char resp;
    while(terminado){
    system("cls");
    cout<<"\t ingrese un numero: ";
    cin>>valor;
    insertarelemento(listt,valor);
    system("cls");
    cout<<"desea ingresar otro numero? y/n \n";
    cin>>resp;
    if(resp=='n'||resp=='N')terminado = !terminado;
    }
}


int main()
{
    nodo listt;
    int valor=0;
    ingreso(listt,valor);
    imprimir(listt);

}



