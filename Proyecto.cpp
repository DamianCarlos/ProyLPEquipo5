# include <iostream>
# include <conio>
# include <fstream>
# include <stdio>
# include <time.h>
# include <stdlib.h>

  struct nuevoevento
{
   char descripcion[100], nombre[30],ianio[4],imes[2],idia[2],fanio[4],fmes[2],fdia[2],horai[2],minui[2],horaf[2],minuf[2];
};
main()
{
  char cadena[250];
  char nueva[200];
  int datos[100];
  int posicion1=1,posicion=0,caracter=0,c;
  char* dS[7] = {"Domingo","Lunes","Martes","Miercoles",
                  "Jueves","Viernes","Sabado"};
   time_t tSac = time(NULL);
   struct tm* tmP = localtime(&tSac);
  int x,i,inanio,inmes,india,inhora,inmint,infanio,infmes,infdia,inhoraf,inminuf;

 do
 {
 clrscr();
 cout<<" \n\t\t\t CALENDARIO DE EVENTOS \n\n";
 cout<<"\n\t\t 1. INGRESAR NUEVO EVENTO\n";
 cout<<"\n\t\t 2. VER MIS EVENTOS PARA HOY\n";
 cout<<"\n\t\t 3. VER MIS EVENTOS PARA TODA LA SEMANA\n";
 cout<<"\n\t\t 4. SALIR\n";
 cout<<"\n\n\t\t SELECCIONE LA OPCION A REALIZAR: ";
 cin>>x;
 switch(x)
 {
   case 1:
    {
    clrscr();
    ofstream miarchivo("C:/Users/SHAW_/Documents/GitHub/ProyLPEquipo5/eventos/eventos.txt",ios::app);
    nuevoevento carlos;
   cout<<"\n\n		NOMBRE PARA EL EVENTO:     ";
   gets(carlos.nombre);
   miarchivo<<carlos.nombre<<" ";
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
 	miarchivo<<carlos.descripcion<<"*";


   cout<<"\n		FECHA DE INICIO: \n\n\t        anio:     ";
   gets(carlos.ianio);
   inanio = atoi(carlos.ianio);
   i=0;

   while (i==0)
    {
      if (strlen(carlos.ianio)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.ianio);
         miarchivo<<carlos.ianio<<"*";
   	}
   	else
   	{
   		i=1;
      }
    }
   miarchivo<<carlos.ianio<<"*";
   int anio_inicio;
   anio_inicio = atoi(carlos.ianio);
   cout<<"\t        mes:      ";
   gets(carlos.imes);
   inmes = atoi(carlos.imes);
      i=0;
      while (i==0)
    {
      if (strlen(carlos.imes)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.imes);
         miarchivo<<'%'<<carlos.imes;
   	}
   	else
   	{
   		i=1;
         endl;
      }
    }
   miarchivo<<'%'<<carlos.imes<<"%";
   int mes_inicio;
   mes_inicio = atoi(carlos.imes);



   cout<<"\t\tdia:      ";
   gets(carlos.idia);
   india = atoi(carlos.idia);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.idia)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.idia);
         miarchivo<<'&'<<carlos.idia<<"&";
   	}
   	else
   	{
   		i=1;
         endl;
      }
    }
   miarchivo<<'&'<<carlos.idia<<"&";
   int dia_inicio;
   dia_inicio = atoi(carlos.idia);


   cout<<"\n		HORA DE INICIO:  \n\n\t\tHORA:       ";
   gets(carlos.horai);
   inhora = atoi(carlos.horai);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.horai)==0)
   	{
    		cout<<" Ingrese el dato porfavor   ";
          gets(carlos.horai);
         miarchivo<<carlos.horai<<"*";
   	}
   	else
   	{
   		i=1;
      }
   }
    miarchivo<<carlos.horai<<"*";
   int hora_inicio;
   hora_inicio = atoi(carlos.horai);



   cout<<"\t\tMINUTOS:    ";
   gets(carlos.minui);
   inmint = atoi(carlos.minui);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.minui)==0)
   	{
    		cout<<" Ingrese el dato porfavor   ";
          gets(carlos.minui);
         miarchivo<<carlos.minui<<"*";
   	}
   	else
   	{
   		i=1;
      }
   }


   miarchivo<<carlos.minui<<"*";
   int minu_inicio;
   minu_inicio = atoi(carlos.minui);

   cout<<"\n		FECHA DE FIN: \n\n\t\tanio:       ";
   gets(carlos.fanio);
   infanio=atoi(carlos.fanio);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.fanio)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.fanio);
         miarchivo<<carlos.fanio<<"*";
   	}
   	else
   	{
   		i=1;
      }
    }
   miarchivo<<carlos.fanio<<"*";
   int anio_fin;
   anio_fin = atoi(carlos.fanio);
   cout<<"\t\tmes:        ";
   gets(carlos.fmes);
   infmes = atoi(carlos.fmes);
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
   miarchivo<<carlos.fmes<<"*";
   int mes_fin;
   mes_fin = atoi(carlos.fmes);



   cout<<"\t  dia:        ";
   gets(carlos.fdia);
   infdia = atoi(carlos.fdia);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.fdia)==0)
   	{
    		cout<<" Ingrese el dato porfavor		";
         gets(carlos.fdia);
         miarchivo<<carlos.fdia<<"*";
   	}
   	else
   	{
   		i=1;
         endl;
      }
    }
   miarchivo<<carlos.fdia<<"*";
   int dia_fin;
   dia_fin = atoi(carlos.fdia);


   cout<<"\n		HORA DE FIN:  \n\tHORA:          ";
   gets(carlos.horaf);
   inhoraf = atoi(carlos.horaf);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.horaf)==0)
   	{
    		cout<<" Ingrese el dato porfavor   ";
          gets(carlos.horaf);
         miarchivo<<carlos.horaf<<"*";
   	}
   	else
   	{
   		i=1;
      }
   }
    miarchivo<<carlos.horaf<<"*";
   int hora_fin;
   hora_fin = atoi(carlos.horaf);



   cout<<"\t MINUTOS:       ";
   gets(carlos.minuf);
   inminuf = atoi(carlos.minuf);
   i=0;
   while (i==0)
    {
      if (strlen(carlos.minuf)==0)
   	{
    		cout<<" Ingrese el dato porfavor   ";
          gets(carlos.minuf);
         miarchivo<<carlos.minuf<<"/\n";
   	}
   	else
   	{
   		i=1;
      }
   }


   miarchivo<<carlos.minuf<<"/\n";
   int minu_fin;
   minu_fin = atoi(carlos.minuf);



   miarchivo.close();
   cout<<"\n\n\t Desde\t"<<anio_inicio<<"/"<<mes_inicio<<"/"<<dia_inicio<<"   "<<hora_inicio<<":"<<minu_inicio<<"\t Hasta\t"<<anio_fin<<"/"<<mes_fin<<"/"<<dia_fin<<"   "<<hora_fin<<":"<<minu_fin<<endl;
   cout<<"\t"<<carlos.nombre<<endl;
   cout<<"\t"<<carlos.descripcion<<endl<<endl;










getch();
   break;
   }
   case 2:
    {

    int i=0;
    ifstream miarchivo("C:/Users/SHAW_/Documents/GitHub/ProyLPEquipo5/eventos/eventos.txt");

 while(!miarchivo.eof())
 {
 	miarchivo.getline(cadena,100);
   /*cout<<cadena;*/
   c=0;
   for (int i=0;i<strlen(cadena);i++)
   {
   	if(cadena[i]=='*')
      {
      c++;
      }
      if(c>0)
      {
      	i++;
         caracter=0;
         while(cadena[i]!='*'&&cadena[i]!='\0')
         {
         	nueva[caracter]=cadena[i];
            caracter++;
            i++;
         }
         datos[posicion]=atoi(nueva);
         /*cout<<"datos: "<<datos[posicion]<<endl;*/

         posicion++;
         i++;
      }
   }

 }



 i=0;
 posicion=1;

 while(!miarchivo.eof())
 {
 	miarchivo.getline(cadena,100);
   //cout<<cadena;
   c=0;
   for (int i=0;i<strlen(cadena);i++)
   {
   	if(cadena[i]=='%')
      {
      c++;
      }
      if(c>0)
      {
      	i++;
         caracter=0;
         while(cadena[i]!='%'&&cadena[i]!='\0')
         {
         	nueva[caracter]=cadena[i];
            caracter++;
            i++;
         }
         datos[posicion]=atoi(nueva);
         /*cout<<"datos: "<<datos[posicion]<<endl;*/

         posicion++;
         i++;
      }
   }

 }




 i=0;
 posicion=2;
 while(!miarchivo.eof())
 {
 	miarchivo.getline(cadena,100);
   //cout<<cadena;
   c=0;
   for (int i=0;i<strlen(cadena);i++)
   {
   	if(cadena[i]=='&')
      {
      c++;
      }
      if(c>0)
      {
      	i++;
         caracter=0;
         while(cadena[i]!='&'&&cadena[i]!='\0')
         {
         	nueva[caracter]=cadena[i];
            caracter++;
            i++;
         }
         datos[posicion]=atoi(nueva);
         /*cout<<"datos: "<<datos[posicion]<<endl;*/

         posicion++;
         i++;
      }
   }

 }


 for (int y=0;y<=2;y++)
 {
  cout<<datos[i]<<endl;

 }

  cout<< "hh:mm:ss " << tmP->tm_hour << ":" << tmP->tm_min << ":"<< tmP->tm_sec << endl;
   cout<< "dd-mm-aaaa: " <<(tmP->tm_mday)<<"-"<<(tmP->tm_mon+1)<<"-"<<(tmP->tm_year+1900)<<endl;
   cout<< "Dia de semana: " << dS[tmP->tm_wday] << endl;

     if(((tmP->tm_year+1900)>=(datos[0]))&&((tmP->tm_mon+1)<=(datos[1]))&&((tmP->tm_mday)==(datos[2])))
   {
   cout<<endl<<"Evento para hoy:  "<<endl;
   cout<<cadena;
   }





    getch();
    break;
    }

   }

}while(x!=4);
getch();

}


