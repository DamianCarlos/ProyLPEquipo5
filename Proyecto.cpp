
   
# include <iostream>
# include <conio>
# include <fstream>
# include <stdio>
# include <time.h>
#include <stdlib.h>

  struct nuevoevento
{
   char descripcion[100],horainicio[2],horafin[2],fechafin[2], nombre[30],ianio[4],imes[2],idia[2],fanio[4],fmes[2],fdia[2],horai[2],minui[2],horaf[2],minuf[2];
};
main()
{

  int x,i;
 cout<<" \n\t\t\t CALENDARIO DE EVENTOS \n\n";
 cout<<"\n\t\t 1. INGRESAR NUEVO EVENTO\n";
 cout<<"\n\t\t 2. VER MIS EVENTOS PARA HOY\n";
 cout<<"\n\t\t 3. VER MIS EVENTOS PARA TODA LA SEMANA\n";
 cin>>x;
 switch(x)
 {
   case 1:
    {

    ofstream miarchivo("C:/Users/SHAW_/Documents/GitHub/ProyLPEquipo5/eventos/eventos.txt",ios::app);
    nuevoevento carlos;
   cout<<"\n\n		NOMBRE PARA EL EVENTO:     ";
   gets(carlos.nombre);
   miarchivo<<carlos.nombre<<"\n";
    while ( i==0)
    {
      if (strlen(carlos.nombre)==0)
   	{
    		cout<<" Ingrese el dato porfavor		     ";
         gets(carlos.nombre);
         miarchivo<<carlos.nombre;
   	}
   	else
   	{
   		i=1;
      }
   }
   cout<<"\n		DESCRIPCION DEL EVENTO:    ";

 	gets(carlos.descripcion);
 	miarchivo<<carlos.descripcion<<"\n";


   cout<<"\n		FECHA DE INICIO: \n\t\t  anio:        ";

   gets(carlos.ianio);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.ianio)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.ianio);
         miarchivo<<carlos.ianio<<"\n";
   	}
   	else
   	{
   		i=1;
         endl;
      }
      }
   miarchivo<<carlos.ianio<<"\n";
   int anio_inicio;
   anio_inicio = atoi(carlos.ianio);
   cout<<"\n	 \n\t\t  mes:        ";
   gets(carlos.imes);
      i=0;
      while (i==0)
    {
      if (strlen(carlos.imes)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.imes);
         miarchivo<<carlos.imes<<"\n";
   	}
   	else
   	{
   		i=1;
         endl;
      }
      }
   miarchivo<<carlos.imes<<"\n";
   int mes_inicio;
   mes_inicio = atoi(carlos.imes);



   cout<<"\n	   \n\t\t  dia:        ";

   gets(carlos.idia);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.idia)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.idia);
         miarchivo<<carlos.idia<<"\n";
   	}
   	else
   	{
   		i=1;
         endl;
      }
      }
   miarchivo<<carlos.idia<<"\n";
   int dia_inicio;
   dia_inicio = atoi(carlos.idia);


   cout<<"\n		HORA DE INICIO:            ";
   gets(carlos.horainicio);
   miarchivo<<carlos.horainicio<<"\n";
   i=0;
   while (i==0)
    {
      if (strlen(carlos.horainicio)==0)
   	{
    		cout<<" Ingrese el dato porfavor   ";
          gets(carlos.horainicio);
         miarchivo<<carlos.horainicio<<"\n";
   	}
   	else
   	{
   		i=1;
      }
   }
   cout<<"\n		FECHA DE FINALIZACION:      ";
   gets(carlos.fechafin);
   miarchivo<<carlos.fechafin<<"\n";
   i=0;
   while (i==0)
    {
      if (strlen(carlos.fechafin)==0)
   	{
    		cout<<" Ingrese el dato porfavor";
         gets(carlos.fechafin);
         miarchivo<<carlos.fechafin<<"\n";
   	}
   	else
   	{
   		i=1;
      }
   }

   cout<<"\n		HORA DE FINALIZACION:     ";
   gets(carlos.horafin);
   miarchivo<<carlos.horafin<<"\n";
   i=0;
   while (i==0)
    {
      if (strlen(carlos.horafin)==0)
   	{
    		cout<<" Ingrese el dato porfavor";
         gets(carlos.horafin);
         miarchivo<<carlos.horafin<<"\n";
   	}


   	else
   	{
   		i=1;
      }
   }


   miarchivo.close();
   break;
   }
   case 2:

   char* dS[7] = {"Domingo","Lunes","Martes","Miercoles",
                  "Jueves","Viernes","Sabado"};
   time_t tSac = time(NULL);
   struct tm* tmP = localtime(&tSac);


   cout<< "hh:mm:ss " << tmP->tm_hour << ":" << tmP->tm_min << ":"<< tmP->tm_sec << endl;
   cout<< "dd-mm-aaaa: " <<(tmP->tm_mday)<<"-"<<(tmP->tm_mon+1)<<"-"<<(tmP->tm_year+1900)<<endl;
   cout<< "Dia de semana: " << dS[tmP->tm_wday] << endl;
   cout<<tmP;
	break;
 }
getch();
}

