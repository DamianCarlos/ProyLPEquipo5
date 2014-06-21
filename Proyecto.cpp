
   
# include <iostream>
# include <conio>
# include <fstream>
# include <stdio>

  struct nuevoevento
{
   char descripcion[100], nombre[30],fecha[25],horainicio[25],fechafin[25],horafin[25];
};
main()
{
   	
  int x,i=0;
 cout<<" \n\t\t\t CALENDARIO DE EVENTOS \n\n";
 cout<<"\n\t\t 1. INGRESAR NUEVO EVENTO\n";
 cout<<"\n\t\t 2. VER MIS EVENTOS PARA HOY\n";
 cout<<"\n\t\t 3. VER MIS EVENTOS PARA TODA LA SEMANA\n";
 cin>>x;
 switch(x)
 {
   case 1:
    nuevoevento carlos;
   cout<<"\n\n		NOMBRE PARA EL EVENTO:     ";
   gets(carlos.nombre);
    while (i==0)
    {
      if (strlen(carlos.nombre)==0)
   	{
    		cout<<" Ingrese el dato porfavor		     ";
         gets(carlos.nombre);
   	}
   	else
   	{
   		i=1;
      }
   }
   cout<<"\n		DESCRIPCION DEL EVENTO:    ";
   gets(carlos.descripcion);
   cout<<"\n		FECHA DE INICIO:           ";
   gets(carlos.fecha);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.fecha)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.fecha);
   	}
   	else
   	{
   		i=1;
         endl;
      }
   }
   cout<<"\n		HORA DE INICIO:            ";
   gets(carlos.horainicio);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.horainicio)==0)
   	{
    		cout<<" Ingrese el dato porfavor   ";
         gets(carlos.horainicio);
   	}
   	else
   	{
   		i=1;
      }
   }
   cout<<"\n		FECHA DE FINALIZACION:      ";
   gets(carlos.fechafin);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.fechafin)==0)
   	{
    		cout<<" Ingrese el dato porfavor";
         gets(carlos.fechafin);
   	}
   	else
   	{
   		i=1;
      }
   }

   cout<<"\n		HORA DE FINALIZACION:     ";
   gets(carlos.horafin);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.horafin)==0)
   	{
    		cout<<" Ingrese el dato porfavor";
         gets(carlos.horafin);
   	}
   	else
   	{
   		i=1;
      }
   }
   break;



   case 2:
   break;




   case 3:
   break;


 }




getch();
}

