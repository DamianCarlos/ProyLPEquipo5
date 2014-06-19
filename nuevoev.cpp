#include<iostream>
#include<conio>
#include<stdio>
struct nuevoevento
{
   char descripcion[100], nombre[30],fechahorainicio[25],fechahorafin[25];
};
main()
{
	nuevoevento carlos;
   cout<<"ingrese un nombre corto del evento: ";
   gets(carlos.nombre);
   cout<<"ingrese la descripcion del evento: ";
   gets(carlos.descripcion);
   cout<<"ingrese la fecha y hora de inicio: ";
   gets(carlos.fechahorainicio);
   cout<<"ingrese la fecha y hora de finalizacion: ";
   gets(carlos.fechahorafin);
   
	getch();
}
