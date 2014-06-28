

# include <iostream>
# include <conio>
# include <fstream>
# include <stdio>
# include <time.h>
#include <stdlib.h>

  struct nuevoevento
{
   char descripcion[100], nombre[30],ianio[4],imes[2],idia[2],fanio[4],fmes[2],fdia[2],horai[2],minui[2],horaf[2],minuf[2];
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

    ofstream miarchivo("C:/Users/Core 2 Duo/Documents/GitHub/ProyLPEquipo5/eventos/eventos.txt",ios::app);
    nuevoevento carlos;
   cout<<"\n\n		NOMBRE PARA EL EVENTO:     ";
   gets(carlos.nombre);
   miarchivo<<carlos.nombre<<"\n";
   i=0;
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


   cout<<"\n		FECHA DE INICIO: \n\t  anio:       ";

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
      }
    }
   miarchivo<<carlos.ianio<<"\n";
   int anio_inicio;
   anio_inicio = atoi(carlos.ianio);
   cout<<"\t  mes:        ";
   gets(carlos.imes);
      i=0;
      while (i==0)
    {
      if (strlen(carlos.imes)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.imes);
         miarchivo<<carlos.imes;
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



   cout<<"\t  dia:        ";

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


   cout<<"\n		HORA DE INICIO:  \n\t HORA:          ";
   gets(carlos.horai);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.horai)==0)
   	{
    		cout<<" Ingrese el dato porfavor   ";
          gets(carlos.horai);
         miarchivo<<carlos.horai<<"\n";
   	}
   	else
   	{
   		i=1;
      }
   }
    miarchivo<<carlos.horai<<"\n";
   int hora_inicio;
   hora_inicio = atoi(carlos.horai);



   cout<<"\t MINUTOS:       ";
   gets(carlos.minui);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.minui)==0)
   	{
    		cout<<" Ingrese el dato porfavor   ";
          gets(carlos.minui);
         miarchivo<<carlos.minui<<"\n";
   	}
   	else
   	{
   		i=1;
      }
   }


   miarchivo<<carlos.minui<<"\n";
   int minu_inicio;
   minu_inicio = atoi(carlos.minui);

   cout<<"\n		FECHA DE FIN: \n\t  anio:       ";

   gets(carlos.fanio);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.fanio)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.fanio);
         miarchivo<<carlos.fanio<<"\n";
   	}
   	else
   	{
   		i=1;
      }
    }
   miarchivo<<carlos.fanio<<"\n";
   int anio_fin;
   anio_fin = atoi(carlos.fanio);
   cout<<"\t  mes:        ";
   gets(carlos.fmes);
      i=0;
      while (i==0)
    {
      if (strlen(carlos.fmes)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.fmes);
         miarchivo<<carlos.fmes;
   	}
   	else
   	{
   		i=1;
         endl;
      }
      }
   miarchivo<<carlos.fmes<<"\n";
   int mes_fin;
   mes_fin = atoi(carlos.fmes);



   cout<<"\t  dia:        ";

   gets(carlos.fdia);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.fdia)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.fdia);
         miarchivo<<carlos.fdia<<"\n";
   	}
   	else
   	{
   		i=1;
         endl;
      }
      }
   miarchivo<<carlos.fdia<<"\n";
   int dia_fin;
   dia_fin = atoi(carlos.fdia);


   cout<<"\n		HORA DE FIN:  \n\t HORA:          ";
   gets(carlos.horaf);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.horaf)==0)
   	{
    		cout<<" Ingrese el dato porfavor   ";
          gets(carlos.horaf);
         miarchivo<<carlos.horaf<<"\n";
   	}
   	else
   	{
   		i=1;
      }
   }
    miarchivo<<carlos.horaf<<"\n";
   int hora_fin;
   hora_fin = atoi(carlos.horaf);



   cout<<"\t MINUTOS:       ";
   gets(carlos.minuf);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.minuf)==0)
   	{
    		cout<<" Ingrese el dato porfavor   ";
          gets(carlos.minuf);
         miarchivo<<carlos.minuf<<"\n";
   	}
   	else
   	{
   		i=1;
      }
   }


   miarchivo<<carlos.minuf<<"\n";
   int minu_fin;
   minu_fin = atoi(carlos.minuf);



   miarchivo.close();
   cout<<"\n\n\t Desde\t"<<anio_inicio<<"/"<<mes_inicio<<"/"<<dia_inicio<<"   "<<hora_inicio<<":"<<minu_inicio<<"\t Hasta\t"<<anio_fin<<"/"<<mes_fin<<"/"<<dia_fin<<"   "<<hora_fin<<":"<<minu_fin<<endl;
   cout<<"\t"<<carlos.nombre<<endl;
   cout<<"\t"<<carlos.descripcion<<endl<<endl;




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

