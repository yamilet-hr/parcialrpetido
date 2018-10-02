#include<stdio.h>
int f,c;
int fila,columna,auxiliar,col,fil;
int auxiliar2;
int i,j, contador;
//int vector[(f*c)*2];


int main(){

//int matriz1[f][c];
//int matriz2[f][c];

printf("ingrese el numero de filas");
scanf("%d", &f);
printf("ingrese el numero de columnas");
scanf("%d", &c );
int matriz1[f][c];
int matriz2[f][c];

for (fila=0; fila<f;fila++){
for (columna=0; columna<c;columna++){
printf("ingrese los valores de matriz 1 %d%d-", fila+1,columna+1);
scanf("%d", &matriz1[fila][columna]);
}
printf("\n");
}
for (fila=0; fila<f;fila++){
for (columna=0; columna<c;columna++){
printf("ingrese los valores de matriz 2 %d%d -", fila+1,columna+1);
scanf("%d", &matriz2[fila][columna]);
}
printf("\n");
}

for (fila=0; fila<f;fila++){
for (columna=0; columna<c;columna++){

 for (fil=0; fil<f;fil++){
  for (col=0; col<c;col++){
    if(matriz1[fila][columna]<matriz1[fil][col]){
	auxiliar=matriz1[fil][col];
	matriz1[fil][col]=matriz1[fila][columna];
	matriz1[fila][columna]=auxiliar;
}
}

	}

}

}






 for (fil=0; fil<f;fil++){
  for (col=0; col<c;col++){
    if(matriz2[fila][columna]<matriz2[fil][col]){
	auxiliar=matriz2[fil][col];
	matriz2[fil][col]=matriz2[fila][columna];
	matriz2[fila][columna]=auxiliar;
	
	
	
}
}

	}





printf("matriz 1: \n");
for (fila=0; fila<=f-1;fila++){
for (columna=0; columna<=c-1;columna++){
printf("%d\t",matriz1[fila][columna]);
}
printf("\n");
}


printf("matriz 2: \n");
for (fila=0; fila<=f-1;fila++){
for (columna=0; columna<=c-1;columna++){
printf("%d\t",matriz2[fila][columna]);
}
printf("\n");
}


}
