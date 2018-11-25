#include<stdio.h>
int MAXSIZE= 8;
int pila[8];
int top=-1;

void cambio();
int nuevo,viejo;
int estaVacia();
int estaLlena();
int contar();
int pop();
int push();

int contar(){
	return pila[top];
	}
	

int estaLlena(){
  if (top==MAXSIZE)
  return 1;
  else 
  return 0;
}	

int estaVacia(){
  if (top == -1)
  return 1;
  else 
  return 0;
}


		
int pop(){
	int datos;
	if (!estaVacia())
	{    
		//Hace el cambio del valor viejo por el nuevo
		int cm=pila[top];
		if (cm==viejo)
		{
			pila[top]=nuevo;
		}
		
		datos=pila[top];
		top=top-1;
		return datos;
	}else{
		printf("\tLa pila esta vacia\n");
		}
	}


	
	int push(int datos){
		if (!estaLlena())
		{
			top=top+1;
			pila[top]=datos;
		}else{
			printf("\tLa pila esta llena\n");
			}
		}	



	int main(void){
	//Hace push a la pila 	
	push(3);
	push(1);
	push(5);
	push(7);
	push(2);
	push(10);
	push(4);
	push(9);	

	printf("\nInrese el valor nuevo :\n");
	scanf("%d",&nuevo);
	printf("\nInrese el valor viejo :\n");
	scanf("%d",&viejo);
	printf("\n\tElementos detro la pila :%d\n",contar());
	printf("Elementos: \n");
	//Imprimimos los elementos en el orden ingresados
	
	while (!estaVacia())
	{
   int datos=pop();
   printf("%d\n",datos);		
	}
      printf("\nPila llena: %s\n" , estaLlena()?"true":"false");
	  printf("Pila vacia: %s\n" , estaVacia()?"true":"false");

		}
