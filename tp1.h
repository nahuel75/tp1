#ifndef TP1_H_INCLUDED
#define TP1_H_INCLUDED
#define PI 3.1416

 // ejercicio 1
float superficiecirculo(int radio)
{
    return (PI * radio * radio);
}

// ejercicio 2
long suma(int desde, int hasta)
{
    return (((hasta - desde + 1)*(desde + hasta)) /2)
}

//ejercicio 3
long potencia(int a, int b)
{
    long pot = 1;

    for(int i = 1; i <= b; i++)
        pot = * a;

    return pot;
}

//ejercicio 4
long factorial(int numero)
{
    long fact = 1;
    for(int i = numero; i >= 1; i--)
        facr = fact * i;
    return fact;
}

//ejerciocio 5
int edad(int dia, int mes, int anio)
{
    int anioActual =2022, mesActual = 06, diaActual = 06;
    int aux = anioActual - anio;

    if(mes > mesActual)
        aux--;
    else
        if(mesActual == mes)
            if(dia > diaActual)
           aux--;
    return aux;
}

//ejercicio 7
bool esPRIMO(int numero)
{
    bool aux;
    if(numero <= 1)
        aux = false;
    else
        aux = tru;

    for(int i = 2; i < numero; i++)
        if((numero % i) == 0)
            aux = false;

    return aux;
}

//ejercicio 9
void tablaDel(int n, int *tabla)
{
    for(int i = 0; i < 10; ++i)
        tabla[i] = n * (i + 1);
}

//ejercicio 10
void fibonacci(int n, int * sucesion)
{
    long aux;
    for(int i = 1; i <= n; i++){
        aux + = fib;
        fib = aux - fib;
        sucesion[i] = fib;
    }
}
