#include<stdio.h>
#include<stdlib.h>


struct nodo {
    int info;
    struct nodo *sig;
};

//variable global que apunta al primer nodo de la lista
struct nodo *raiz=NULL;

void insertar(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->info = x;
    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void imprimir()
{
    struct nodo *reco=raiz;
    printf("Lista completa.\n");
    while (reco!=NULL)
    {
        printf("%i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}

int extraer()
{
    if (raiz != NULL)
    {
        int informacion = raiz->info;
        struct nodo *bor = raiz;
        raiz = raiz->sig;
        free(bor);
        return informacion;
    }
    else
    {
        return -1;
    }
}

void liberar()
{
    struct nodo *reco = raiz;
    struct nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}

int cantidad()
{
    struct nodo *reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco->sig;
    }
    return cant;
}

int vacia()
{
    if (raiz == NULL)
        return 1;
    else
        return 0;
}



int main()
{
    insertar(2);
    insertar(12);
    insertar(6);
    imprimir();
    printf("Extraemos de la pila:%i\n",extraer());
    imprimir();
    printf("La cantidad de nodos es:%i\n",cantidad());
    while (vacia() == 0)
    {
        printf("Extraemos de la pila:%i\n",extraer());
    }
    liberar();
    getch();
    return 0;
}
