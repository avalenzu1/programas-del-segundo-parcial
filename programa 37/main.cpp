#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct emple
{
    char nombre[30];
    int ventas[3];
    double total, comis;
};

emple empleado[5];

/*Procedimiento de ingreso del nombre y las ventas
 de todos los empleados*/

 void ingreso(emple empleado[])
 {
     int i,k;
     for(i=0;i<5;i++)
     {
         cout<<"Ingresar nombre: ";
         cin>>empleado[i].nombre,30;
         for(k=0;k<3;k++)
         {
             cout<<"Ingresar ventas "<<k<<": ";
             cin>>(empleado[i].ventas[k]);
         }
     }
     cout<<"\n";
 }

 /*Elaborar un procedimiento para calcular el total de las
  ventas, la comisión que es el 5% del total de ventas*/

  void totalcomis(emple empleado[])
  {
      int i,k;
      for(i=0;i<5;i++)
      {
          empleado[i].total=0, empleado[i].comis=0;
          for(k=0;k<3;k++)
          {
              empleado[i].total=empleado[i].ventas[k]+total;
          }
          empleado[i].comis=total*0.05;
          cout<<"Pago total de "<<(empleado[i].nombre)<<": "<<empleado[i].total<<"\n";
          cout<<"Comision de "<<(empleado[i].nombre)<<": "<<empleado[i].comis<<"\n\n";
      }
  }

int main()
{
    ingreso(empleado);
    totalcomis(empleado);

    return 0;
}
