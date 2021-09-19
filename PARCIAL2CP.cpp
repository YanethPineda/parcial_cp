#include<iostream>

#include<iostream>
#include<stdlib.h>

using namespace std;

struct empleado_datos{
	int codigo;
	char nombre[40];
	char apellido[40];
	char puesto[50];
	float sueldobase;
	float bonificacion;
}empleado[3];

void agregar(){
	

	int indice;
	for(indice=0; indice<3;indice++){
		printf("__________________________________________________\n");
		
		printf("INGRESA CODIGO #%d: ",(indice+1));
		scanf("%d", &empleado[indice].codigo);
		fflush(stdin);
		printf("INGRESA NOMBRE #%d: ",(indice+1));
		gets(empleado[indice].nombre);
		fflush(stdin);
		printf("INGRESA APELLIDO #%d: ",(indice+1));
		gets(empleado[indice].apellido);
		fflush(stdin);
		printf("INGRESA PUESTO #%d: ",(indice+1));
		gets(empleado[indice].puesto);
		fflush(stdin);
		printf("INGRESA SUELDO BASE #%d: ",(indice+1));
		scanf("%f", &empleado[indice].sueldobase);
		printf("INGRESA BONIFICACION #%d: ",(indice+1));
		scanf("%f", &empleado[indice].bonificacion);
		fflush(stdin);
	}
	
	}
	
void mostrartodos(){
	printf("MOSTRAR TODOS LOS DATOS \n");
	int indice;
	for(indice=0; indice<3;indice++){
		printf("__________________________________________________\n");
		printf("NUMERO DE EMPLEADO #%d\n",(indice+1));
		printf("CODIGO %d\n: ",empleado[indice].codigo);
		printf("NOMBRE %s\n",empleado[indice].nombre);
		printf("APELLIDO %s\n",empleado[indice].apellido);
		printf("PUESTO %s\n",empleado[indice].puesto);
		printf("SUELDO BASE %.2f\n",empleado[indice].sueldobase);
		printf("BONIFICACION %.2f\n",empleado[indice].bonificacion);
		printf("__________________________________________________\n");
	}
	
}

void buscarcodigo(){
	int cod_emp, indice, encontrar=0;
	printf("INGRESAR EL CODIGO QUE BUSCA: ");
	scanf("%d", &cod_emp);
	for(indice=0;indice<3;indice++){
		if(empleado[indice].codigo==cod_emp){
			encontrar=1;
		printf("NUMERO DE EMPLEADO #%d\n",(indice+1));
		printf("CODIGO %d\n:",empleado[indice].codigo);
		printf("NOMBRE %s\n",empleado[indice].nombre);
		printf("APELLIDO %s\n",empleado[indice].apellido);
		printf("PUESTO %s\n",empleado[indice].puesto);
		printf("SUELDO BASE %.2f",empleado[indice].sueldobase);
		printf("BONIFICACION %.2f",empleado[indice].bonificacion);
		}
	}
}


void menu(){
	
	int opcion;
	do{
	printf("__________________________________________________\n");
	cout<<"1. INGRESAR EMPLEADO \n";
	cout<<"2. MOSTRAR EMPLEADO \n";
	cout<<"3. BUSCAR EMPLEADO \n";
	cout<<"4. MODIFICAR EMPLEADO \n";
	cout<<"5. SALIR\n";
	cout<<"OPCION: ";
	cin>>opcion;
	switch(opcion){
		case 1 : 
			agregar();
			
			system("pause");
		break;
		case 2 : 
			mostrartodos();
		break;
		case 3 : 
			buscarcodigo();
		break;
		case 4 : 
		
		break;
		case 5 : 
			//salir();
		break;
		default:
			printf("OPCION INCORRECTA\n");
	}
}while(opcion!=5);
	}
	int main(){
	menu();
	system("pause");	
	return 0;
}































	
	
	


