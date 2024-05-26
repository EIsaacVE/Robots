#include<iostream>
#include<locale>
using namespace std;
/*Isaac Reséndiz Ramírez*/
class Robots{
	public:  //Atributos de todos los Robots
	string nombreRobot,tipodeRobot;
	int identificador;
	float bateria;
	int posicionX,posicionY,posicionZ;
	int sensorTemperatura[10]={37,37,37,37,37,37,37,37,37,37}; //Robots de 37°
	int sensorTemperatura1[10]={36,36,36,36,36,36,36,36,36,36}; //Robots de 36°
	int sensorTemperatura2[10]={35,35,35,35,35,35,35,35,35,35}; //Robots de 35°
	
	
	public: //Métodos que tienen todos los Robots
	Robots(string,string,int,float,int,int,int); //Constructor de la clase Robots.
	void escanearArea();
	void mensajeubicacionExacta();
	
	void mensajeencontroVida(); //Robots de 37
	void mensajeencontroVida1(); //Robots de 36
	void mensajeencontroVida2(); //Robots de 35
	void mostrardatos();
	void reportarestadoActual(); //Robots de 37°
	void reportarestadoActual1();//Robots de 36°
	void reportarestadoActual2();//Robots de 35°
	
	
};
//////////////////////////////CLASES/////////////////////////////////////////////


class Rmoviles : public Robots   //Clase Rmoviles
{	
	
	 public:  //Modo teleoperado. Atributos.
	
	Rmoviles(string,string,int,float,int,int,int); //CONSTRUCTOR. Los argumentos son los heredados de la clase Robot.
    void avanzar();       //Para temperatura de 37°.             Métodos propios de la clase Rmoviles.
    void avanzar1();  //Para temperaturas de 36°.
    void avanzar2(); //Para temperaturas de 35°
    
    void retroceder(); //Para temparatura 37°
    void retroceder1(); //para temperatura de 36°
    void retroceder2();//Para temperatura 35°
	
	void girarIzquierda(); //Para temparatura 37°
	void girarIzquierda1(); //para temperatura de 36°
	void girarIzquierda2();//Para temperatura 35°
	
	void girarDerecha(); //Para temparatura 37°
	void girarDerecha1(); //para temperatura de 36°
	void girarDerecha2();  //Para temperatura 35°
	
	
	void detenerse();      //Para temparatura 37°
	void detenerse1();   //Para temparatura 36°
	void detenerse2(); //Para temparatura 35°
	
};

class Rhumanoide : public Robots //La clase Rhumanoide está heredando todo lo publico de la clase Robots.
{
	public:
	Rhumanoide(string,string,int,float,int,int,int);//CONSTRUCTOR. Los argumentos son los heredados de la clase Robot.
	void retirarEscombros2(); //Método propio de la clase Rhumanoide. 35°
	void retirarEscombros1(); //36°
	void retirarEscombros(); // Para robot de 37°.
};

class Rzoomorficos : public Robots //Clase Rzoomorficos.
{
	public:
	Rzoomorficos(string,string,int,float,int,int,int); //Constructor para el robot.
	
	
};

Robots::Robots(string nomR,string tipoR,int ident,float bat,int posx,int posy,int posz) //Constructor inicializado de la clase Robots.
{
  nombreRobot=nomR;
  tipodeRobot=tipoR;
  identificador=ident;
  bateria=bat;
  posicionX=posx;
  posicionY=posy;
  posicionZ=posz;
}

////////////////////MÉTODOS///////////////////////////////////////

void Rmoviles::retroceder() //Método retroceder. Para robots móviles teleoperados con temperatura de 37°
{   bateria=bateria-1;
	posicionY=posicionY-5;
 sensorTemperatura[0]=sensorTemperatura[0];
 sensorTemperatura[1]=sensorTemperatura[1];
 sensorTemperatura[2]=sensorTemperatura[2]+5;
 sensorTemperatura[3]=sensorTemperatura[3]+5;
 sensorTemperatura[4]=sensorTemperatura[4]+5;
 sensorTemperatura[5]=sensorTemperatura[5]+5;
 sensorTemperatura[6]=sensorTemperatura[6]+5;
 sensorTemperatura[7]=sensorTemperatura[7]+5;
 sensorTemperatura[8]=sensorTemperatura[8]+5;
 sensorTemperatura[9]=sensorTemperatura[9]+5;
	
	cout<<"\nRetroceder... Posición en Y: "<<posicionY<<endl;
}

void Rmoviles::retroceder1() //Método retroceder. Para robots móviles teleoperados con temperatura de 36°
{   bateria=bateria-1;
	posicionY=posicionY-5;
 sensorTemperatura1[0]=sensorTemperatura1[0];
 sensorTemperatura1[1]=sensorTemperatura1[1];
 sensorTemperatura1[2]=sensorTemperatura1[2]+5;
 sensorTemperatura1[3]=sensorTemperatura1[3]+5;
 sensorTemperatura1[4]=sensorTemperatura1[4]+5;
 sensorTemperatura1[5]=sensorTemperatura1[5]+5;
 sensorTemperatura1[6]=sensorTemperatura1[6]+5;
 sensorTemperatura1[7]=sensorTemperatura1[7]+5;
 sensorTemperatura1[8]=sensorTemperatura1[8]+5;
 sensorTemperatura1[9]=sensorTemperatura1[9]+5;
  
	
	cout<<"\nRetroceder... Posición en Y: "<<posicionY<<endl;
}

void Rmoviles::retroceder2() //Método retroceder. Para robots móviles teleoperados con temperatura de 35°
{
	bateria=bateria-1;
	posicionY=posicionY-5;
	
 sensorTemperatura2[0]=sensorTemperatura2[0];
 sensorTemperatura2[1]=sensorTemperatura2[1];
 sensorTemperatura2[2]=sensorTemperatura2[2]+5;
 sensorTemperatura2[3]=sensorTemperatura2[3]+5;
 sensorTemperatura2[4]=sensorTemperatura2[4]+5;
 sensorTemperatura2[5]=sensorTemperatura2[5]+5;
 sensorTemperatura2[6]=sensorTemperatura2[6]+5;
 sensorTemperatura2[7]=sensorTemperatura2[7]+5;
 sensorTemperatura2[8]=sensorTemperatura2[8]+5;
 sensorTemperatura2[9]=sensorTemperatura2[9]+5;
	
	cout<<"\nRetroceder... Posición en Y: "<<posicionY<<endl;
	
	
	}





void Rmoviles::avanzar() //Método avanzar. Para robots móviles teleoperados de temperatura de 37°
{
	bateria=bateria-1;
  posicionX=posicionX+5;
  
 sensorTemperatura[0]=sensorTemperatura[0];
 sensorTemperatura[1]=sensorTemperatura[1];
 sensorTemperatura[2]=sensorTemperatura[2]+5;
 sensorTemperatura[3]=sensorTemperatura[3]+5;
 sensorTemperatura[4]=sensorTemperatura[4]+5;
 sensorTemperatura[5]=sensorTemperatura[5]+5;
 sensorTemperatura[6]=sensorTemperatura[6]+5;
 sensorTemperatura[7]=sensorTemperatura[7]+5;
 sensorTemperatura[8]=sensorTemperatura[8]+5;
 sensorTemperatura[9]=sensorTemperatura[9]+5;
	
 
  
  cout<<"\nAvanzar... Posición en X: "<<posicionX<<endl;
}

void Rmoviles::avanzar1() //Método retroceder. Para robots móviles teleoperados con temperatura de 36°
{   bateria=bateria-1;
	posicionX=posicionX+5;
 sensorTemperatura1[0]=sensorTemperatura1[0];
 sensorTemperatura1[1]=sensorTemperatura1[1];
 sensorTemperatura1[2]=sensorTemperatura1[2]+5;
 sensorTemperatura1[3]=sensorTemperatura1[3]+5;
 sensorTemperatura1[4]=sensorTemperatura1[4]+5;
 sensorTemperatura1[5]=sensorTemperatura1[5]+5;
 sensorTemperatura1[6]=sensorTemperatura1[6]+5;
 sensorTemperatura1[7]=sensorTemperatura1[7]+5;
 sensorTemperatura1[8]=sensorTemperatura1[8]+5;
 sensorTemperatura1[9]=sensorTemperatura1[9]+5;
  
	
	 cout<<"\nAvanzar... Posición en X: "<<posicionX<<endl;
}

void Rmoviles::avanzar2() //Método retroceder. Para robots móviles teleoperados con temperatura de 35°
{   bateria=bateria-1;
	posicionX=posicionX+5;
 sensorTemperatura2[0]=sensorTemperatura2[0];
 sensorTemperatura2[1]=sensorTemperatura2[1];
 sensorTemperatura2[2]=sensorTemperatura2[2]+5;
 sensorTemperatura2[3]=sensorTemperatura2[3]+5;
 sensorTemperatura2[4]=sensorTemperatura2[4]+5;
 sensorTemperatura2[5]=sensorTemperatura2[5]+5;
 sensorTemperatura2[6]=sensorTemperatura2[6]+5;
 sensorTemperatura2[7]=sensorTemperatura2[7]+5;
 sensorTemperatura2[8]=sensorTemperatura2[8]+5;
 sensorTemperatura2[9]=sensorTemperatura2[9]+5;
  
	
	 cout<<"\nAvanzar... Posición en X: "<<posicionX<<endl;
}




void Rmoviles::girarIzquierda()  //Para robots de 37°.
{
	bateria=bateria-1;
 sensorTemperatura[0]=sensorTemperatura[0];
 sensorTemperatura[1]=sensorTemperatura[1];
 sensorTemperatura[2]=sensorTemperatura[2]+5;
 sensorTemperatura[3]=sensorTemperatura[3]+5;
 sensorTemperatura[4]=sensorTemperatura[4]+5;
 sensorTemperatura[5]=sensorTemperatura[5]+5;
 sensorTemperatura[6]=sensorTemperatura[6]+5;
 sensorTemperatura[7]=sensorTemperatura[7]+5;
 sensorTemperatura[8]=sensorTemperatura[8]+5;
 sensorTemperatura[9]=sensorTemperatura[9]+5;
	
	
 cout<<"\nSe ha girado a la izquierda.";	//Para robots móviles teleoperados
}

void Rmoviles::girarIzquierda1()  //Para robots de 36°.
{
	bateria=bateria-1;
 sensorTemperatura1[0]=sensorTemperatura1[0];
 sensorTemperatura1[1]=sensorTemperatura1[1];
 sensorTemperatura1[2]=sensorTemperatura1[2]+5;
 sensorTemperatura1[3]=sensorTemperatura1[3]+5;
 sensorTemperatura1[4]=sensorTemperatura1[4]+5;
 sensorTemperatura1[5]=sensorTemperatura1[5]+5;
 sensorTemperatura1[6]=sensorTemperatura1[6]+5;
 sensorTemperatura1[7]=sensorTemperatura1[7]+5;
 sensorTemperatura1[8]=sensorTemperatura1[8]+5;
 sensorTemperatura1[9]=sensorTemperatura1[9]+5;
	
	
 cout<<"\nSe ha girado a la izquierda.";	//Para robots móviles teleoperados
}

void Rmoviles::girarIzquierda2()  //Para robots de 35°.
{
	bateria=bateria-1;
 sensorTemperatura2[0]=sensorTemperatura2[0];
 sensorTemperatura2[1]=sensorTemperatura2[1];
 sensorTemperatura2[2]=sensorTemperatura2[2]+5;
 sensorTemperatura2[3]=sensorTemperatura2[3]+5;
 sensorTemperatura2[4]=sensorTemperatura2[4]+5;
 sensorTemperatura2[5]=sensorTemperatura2[5]+5;
 sensorTemperatura2[6]=sensorTemperatura2[6]+5;
 sensorTemperatura2[7]=sensorTemperatura2[7]+5;
 sensorTemperatura2[8]=sensorTemperatura2[8]+5;
 sensorTemperatura2[9]=sensorTemperatura2[9]+5;
	
	
 cout<<"\nSe ha girado a la izquierda.";	//Para robots móviles teleoperados
}





void Rmoviles::girarDerecha()                 // para temperaturas de 37°   Para robots móviles teleoperados
{
	bateria=bateria-1;
 sensorTemperatura[0]=sensorTemperatura[0];
 sensorTemperatura[1]=sensorTemperatura[1];
 sensorTemperatura[2]=sensorTemperatura[2]+5;
 sensorTemperatura[3]=sensorTemperatura[3]+5;
 sensorTemperatura[4]=sensorTemperatura[4]+5;
 sensorTemperatura[5]=sensorTemperatura[5]+5;
 sensorTemperatura[6]=sensorTemperatura[6]+5;
 sensorTemperatura[7]=sensorTemperatura[7]+5;
 sensorTemperatura[8]=sensorTemperatura[8]+5;
 sensorTemperatura[9]=sensorTemperatura[9]+5;
	
cout<<"\nSe ha girado a la derecha.";     //Para robots móviles teleoperados
}

void Rmoviles::girarDerecha1()                 // para temperaturas de 36°   Para robots móviles teleoperados
{
	bateria=bateria-1;
 sensorTemperatura1[0]=sensorTemperatura1[0];
 sensorTemperatura1[1]=sensorTemperatura1[1];
 sensorTemperatura1[2]=sensorTemperatura1[2]+5;
 sensorTemperatura1[3]=sensorTemperatura1[3]+5;
 sensorTemperatura1[4]=sensorTemperatura1[4]+5;
 sensorTemperatura1[5]=sensorTemperatura1[5]+5;
 sensorTemperatura1[6]=sensorTemperatura1[6]+5;
 sensorTemperatura1[7]=sensorTemperatura1[7]+5;
 sensorTemperatura1[8]=sensorTemperatura1[8]+5;
 sensorTemperatura1[9]=sensorTemperatura1[9]+5;
	
cout<<"\nSe ha girado a la derecha.";     //Para robots móviles teleoperados
}

void Rmoviles::girarDerecha2()                 // para temperaturas de 35°   Para robots móviles teleoperados
{
	bateria=bateria-1;
 sensorTemperatura2[0]=sensorTemperatura2[0];
 sensorTemperatura2[1]=sensorTemperatura2[1];
 sensorTemperatura2[2]=sensorTemperatura2[2]+5;
 sensorTemperatura2[3]=sensorTemperatura2[3]+5;
 sensorTemperatura2[4]=sensorTemperatura2[4]+5;
 sensorTemperatura2[5]=sensorTemperatura2[5]+5;
 sensorTemperatura2[6]=sensorTemperatura2[6]+5;
 sensorTemperatura2[7]=sensorTemperatura2[7]+5;
 sensorTemperatura2[8]=sensorTemperatura2[8]+5;
 sensorTemperatura2[9]=sensorTemperatura2[9]+5;
	
cout<<"\nSe ha girado a la derecha.";     //Para robots móviles teleoperados
}


void Rmoviles::detenerse()                    //Para robots móviles teleoperados de 37°
{
 sensorTemperatura[0]=sensorTemperatura[0];
 sensorTemperatura[1]=sensorTemperatura[1];
 sensorTemperatura[2]=sensorTemperatura[2]+5;
 sensorTemperatura[3]=sensorTemperatura[3]+5;
 sensorTemperatura[4]=sensorTemperatura[4]+5;
 sensorTemperatura[5]=sensorTemperatura[5]+5;
 sensorTemperatura[6]=sensorTemperatura[6]+5;
 sensorTemperatura[7]=sensorTemperatura[7]+5;
 sensorTemperatura[8]=sensorTemperatura[8]+5;
 sensorTemperatura[9]=sensorTemperatura[9]+5;
	
	
	cout<<"\nSe detuvo el Robot.";
}

void Rmoviles::detenerse1() //Para temperaturas de 36°
{
 sensorTemperatura1[0]=sensorTemperatura1[0];
 sensorTemperatura1[1]=sensorTemperatura1[1];
 sensorTemperatura1[2]=sensorTemperatura1[2]+5;
 sensorTemperatura1[3]=sensorTemperatura1[3]+5;
 sensorTemperatura1[4]=sensorTemperatura1[4]+5;
 sensorTemperatura1[5]=sensorTemperatura1[5]+5;
 sensorTemperatura1[6]=sensorTemperatura1[6]+5;
 sensorTemperatura1[7]=sensorTemperatura1[7]+5;
 sensorTemperatura1[8]=sensorTemperatura1[8]+5;
 sensorTemperatura1[9]=sensorTemperatura1[9]+5;
	
	
	cout<<"\nSe detuvo el Robot.";
}


void Rmoviles::detenerse2()  //Para temperaturas de 35°
{
 sensorTemperatura2[0]=sensorTemperatura2[0];
 sensorTemperatura2[1]=sensorTemperatura2[1];
 sensorTemperatura2[2]=sensorTemperatura2[2]+5;
 sensorTemperatura2[3]=sensorTemperatura2[3]+5;
 sensorTemperatura2[4]=sensorTemperatura2[4]+5;
 sensorTemperatura2[5]=sensorTemperatura2[5]+5;
 sensorTemperatura2[6]=sensorTemperatura2[6]+5;
 sensorTemperatura2[7]=sensorTemperatura2[7]+5;
 sensorTemperatura2[8]=sensorTemperatura2[8]+5;
 sensorTemperatura2[9]=sensorTemperatura2[9]+5;
	
cout<<"\nSe detuvo el Robot.";
}


void Robots::escanearArea()     //Método para escanear Área.
{
 
  bateria=bateria-0.25;
  cout<<"\nEl Robot está escaneando el área. La batería en: "<<bateria<<"%"<<endl;
}

void Robots::mensajeubicacionExacta() //Método de posición exacta.
{
 bateria=bateria-0.5;
 cout<<"Posición en X: "<<posicionX<<". Posición en Y: "<<posicionY<<". Posición en Z: "<<posicionZ;
}



void Rhumanoide::retirarEscombros2()  //Método para retirar escombros, Sólo para el Robot humanoide. 35 grados.
{
	bateria=bateria-2;
 sensorTemperatura2[0]=sensorTemperatura2[0]+2;
 sensorTemperatura2[1]=sensorTemperatura2[1]+2;
 sensorTemperatura2[2]=sensorTemperatura2[2]+5;
 sensorTemperatura2[3]=sensorTemperatura2[3]+5;
 sensorTemperatura2[4]=sensorTemperatura2[4]+5;
 sensorTemperatura2[5]=sensorTemperatura2[5]+5;
 sensorTemperatura2[6]=sensorTemperatura2[6]+5;
 sensorTemperatura2[7]=sensorTemperatura2[7]+5;
 sensorTemperatura2[8]=sensorTemperatura2[8]+5;
 sensorTemperatura2[9]=sensorTemperatura2[9]+5;
 cout<<"\nRetirando escombros: batería en: "<<bateria<<"° Los dos primeros sensores aumentan en 2° y el resto en 5°";
	
}

void Rhumanoide::retirarEscombros1()  //Método para retirar escombros para robot de 36°, Sólo para el Robot humanoide.
{
	bateria=bateria-2;
 sensorTemperatura1[0]=sensorTemperatura1[0]+2;
 sensorTemperatura1[1]=sensorTemperatura1[1]+2;
 sensorTemperatura1[2]=sensorTemperatura1[2]+5;
 sensorTemperatura1[3]=sensorTemperatura1[3]+5;
 sensorTemperatura1[4]=sensorTemperatura1[4]+5;
 sensorTemperatura1[5]=sensorTemperatura1[5]+5;
 sensorTemperatura1[6]=sensorTemperatura1[6]+5;
 sensorTemperatura1[7]=sensorTemperatura1[7]+5;
 sensorTemperatura1[8]=sensorTemperatura1[8]+5;
 sensorTemperatura1[9]=sensorTemperatura1[9]+5;
 cout<<"\nRetirando escombros: batería en: "<<bateria<<"° Los dos primeros sensores aumentan en 2° y el resto en 5°";
	
}

void Rhumanoide::retirarEscombros()  //Método para retirar escombros para robot de 37°, Sólo para el Robot humanoide.
{
	bateria=bateria-2;
 sensorTemperatura[0]=sensorTemperatura[0]+2;
 sensorTemperatura[1]=sensorTemperatura[1]+2;
 sensorTemperatura[2]=sensorTemperatura[2]+5;
 sensorTemperatura[3]=sensorTemperatura[3]+5;
 sensorTemperatura[4]=sensorTemperatura[4]+5;
 sensorTemperatura[5]=sensorTemperatura[5]+5;
 sensorTemperatura[6]=sensorTemperatura[6]+5;
 sensorTemperatura[7]=sensorTemperatura[7]+5;
 sensorTemperatura[8]=sensorTemperatura[8]+5;
 sensorTemperatura[9]=sensorTemperatura[9]+5;
 cout<<"\nRetirando escombros: batería en: "<<bateria<<"° Los dos primeros sensores aumentan en 2° y el resto en 5°";
	
}

void Robots::mensajeencontroVida() //Método mensaja de ha encontrado vida. temperatura 37
{
  bateria=bateria-1;
 
  
 sensorTemperatura[0]=sensorTemperatura[0]+1;
 sensorTemperatura[1]=sensorTemperatura[1]+1;
 sensorTemperatura[2]=sensorTemperatura[2]+1;
 sensorTemperatura[3]=sensorTemperatura[3]+1;
 sensorTemperatura[4]=sensorTemperatura[4]+1;
 sensorTemperatura[5]=sensorTemperatura[5]+1;
 sensorTemperatura[6]=sensorTemperatura[6]+1;
 sensorTemperatura[7]=sensorTemperatura[7]+1;
 sensorTemperatura[8]=sensorTemperatura[8]+1;
 sensorTemperatura[9]=sensorTemperatura[9]+1;
  
  
  cout<<"\nEnvio de mensaje de encontrar vida: batería y sensores hasta el momento: "<<bateria<<"%"<<","<<sensorTemperatura[9]<<"°";
}

void Robots::mensajeencontroVida1() //Método mensaja de ha encontrado vida. temperatura36
{
  bateria=bateria-1;
 sensorTemperatura1[0]=sensorTemperatura1[0]+1;
 sensorTemperatura1[1]=sensorTemperatura1[1]+1;
 sensorTemperatura1[2]=sensorTemperatura1[2]+1;
 sensorTemperatura1[3]=sensorTemperatura1[3]+1;
 sensorTemperatura1[4]=sensorTemperatura1[4]+1;
 sensorTemperatura1[5]=sensorTemperatura1[5]+1;
 sensorTemperatura1[6]=sensorTemperatura1[6]+1;
 sensorTemperatura1[7]=sensorTemperatura1[7]+1;
 sensorTemperatura1[8]=sensorTemperatura1[8]+1;
 sensorTemperatura1[9]=sensorTemperatura1[9]+1;
  
  
  cout<<"\n\nEnvio de mensaje de encontrar vida: batería y sensores hasta el momento: "<<bateria<<"%"<<","<<sensorTemperatura1[9]<<"°";
}

void Robots::mensajeencontroVida2() //Método mensaja de ha encontrado vida. temperatura 35°
{
  bateria=bateria-1;
 sensorTemperatura2[0]=sensorTemperatura2[0]+1;
 sensorTemperatura2[1]=sensorTemperatura2[1]+1;
 sensorTemperatura2[2]=sensorTemperatura2[2]+1;
 sensorTemperatura2[3]=sensorTemperatura2[3]+1;
 sensorTemperatura2[4]=sensorTemperatura2[4]+1;
 sensorTemperatura2[5]=sensorTemperatura2[5]+1;
 sensorTemperatura2[6]=sensorTemperatura2[6]+1;
 sensorTemperatura2[7]=sensorTemperatura2[7]+1;
 sensorTemperatura2[8]=sensorTemperatura2[8]+1;
 sensorTemperatura2[9]=sensorTemperatura2[9]+1;
  
  
  cout<<"\nEnvio de mensaje de encontrar vida: batería y sensores hasta el momento: "<<bateria<<"%"<<","<<sensorTemperatura2[9]<<"°";
}
/////////////////////Costructores herencia////////////////////////////////

Rmoviles::Rmoviles(string nomR,string tipoR,int ident,float bat,int posx,int posy,int posz) : Robots(nomR,tipoR,ident,bat,posx,posy,posz) //Constructor de la clase Robot movil.
{
 //cout<<"Robot movil.";

}
Rhumanoide::Rhumanoide(string nomR,string tipoR,int ident,float bat,int posx,int posy,int posz) : Robots(nomR,tipoR,ident,bat,posx,posy,posz) //Constructor de la clase Robot Humanoide.
{
}

Rzoomorficos::Rzoomorficos(string nomR,string tipoR,int ident,float bat,int posx,int posy,int posz) : Robots(nomR,tipoR,ident,bat,posx,posy,posz) //Constructor de la clase Robot zoomorficos..
{
}



void Robots::reportarestadoActual() //Método para reportar estado actual de los robots de 37°.
{
bateria=bateria-0.75;


cout<<"\n\nReporte de Robot: Batería inicioal 100%. Temperatura inicial 37°."<<endl<<endl;
cout<<"Tipo de Robot: "<<tipodeRobot<<endl;
cout<<"Identificador: "<<identificador<<endl;
cout<<"Batería: "<<bateria<<"%"<<endl;


sensorTemperatura[0]=sensorTemperatura[0]+1;
sensorTemperatura[1]=sensorTemperatura[1]+1;
    for(int i=0;i<10;i++)
     {
	cout<<"temperatura del sensor "<<i+1<<": "<<sensorTemperatura[i]<<"°"<<endl;
     }
     
     if(bateria<=10)
{
	cout<<"\nBateŕia baja.";
}
}

void Robots::reportarestadoActual1() //Método para reportar estado actual de los robots de 36°.
{
bateria=bateria-0.75;
cout<<"\n\nReporte de Robot: Batería inicioal 100%. Temperatura inicial 36°."<<endl<<endl;
cout<<"Tipo de Robot: "<<tipodeRobot<<endl;
cout<<"Identificador: "<<identificador<<endl;
cout<<"Batería: "<<bateria<<"%"<<endl;



sensorTemperatura1[0]=sensorTemperatura1[0]+1;
sensorTemperatura1[1]=sensorTemperatura1[1]+1;
    for(int i=0;i<10;i++)
     {
	cout<<"temperatura del sensor "<<i+1<<": "<<sensorTemperatura1[i]<<"°"<<endl;
     }
          if(bateria<=10)
{
	cout<<"\nBateŕia baja.";
}
}

void Robots::reportarestadoActual2() //Método para reportar estado actual de los robots de 35°.
{
bateria=bateria-0.75;
cout<<"\n\nReporte de Robot: Batería inicioal 100%/80%. Temperatura inicial 35°."<<endl<<endl;
cout<<"Tipo de Robot: "<<tipodeRobot<<endl;
cout<<"Identificador: "<<identificador<<endl;
cout<<"Batería: "<<bateria<<"%"<<endl;



sensorTemperatura2[0]=sensorTemperatura2[0]+1;
sensorTemperatura2[1]=sensorTemperatura2[1]+1;
    for(int i=0;i<10;i++)
     {
	cout<<"temperatura del sensor "<<i+1<<": "<<sensorTemperatura2[i]<<"°"<<endl;
     }
          if(bateria<=10)
{
	cout<<"\nBateŕia baja.";
}
}




int main()
{
	cout<<"Isaac Reséndiz Ramírez."<<endl<<endl;
	
	int x,y,z,n;
	setlocale(LC_ALL,"SPANISH");
	cout<<"Robot serpiente(Zoomórfico) ID: 1 listo para simulación..."<<endl;
	cout<<"Robot araña(Zoomórfico) ID: 2 listo para simulación..."<<endl;
	cout<<"Robot Con ruedas omnidireccionales(Móvil) ID: 3 listo para simulación..."<<endl;
	cout<<"Robot Con ruedas omnidireccionales(Móvil) ID: 4 listo para simulación..."<<endl;
	cout<<"Robot Con orugas(Móvil) ID: 5 listo para simulación..."<<endl;
	cout<<"Robot de 1.5 metros(Humanoide) ID: 6 listo para simulación..."<<endl;
	cout<<"Robot de 0.8 metros(Humanoide) ID: 7 listo para simulación..."<<endl;
	cout<<"Robot de 1.7 metros(Humanoide) ID: 8 listo para simulación..."<<endl;
    cout<<"Robot de 1.8 metros(Humanoide) ID: 9 listo para simulación..."<<endl<<endl;
    
    cout<<"Menú:"<<endl;
   
        do{   //Éste do while sirve para seleccionar al robot
	
		cout<<"1.- Iniciar simulación."<<endl;
		cout<<"2.- Escanear área."<<endl;
		cout<<"3.- Enviar mensaje de señal de vida."<<endl;
		cout<<"4.- Mandar ubicación exacta."<<endl;
		cout<<"5.- Reportar estado actual."<<endl;
		cout<<"6.- Avanzar. SÓLO ROBOTS MÓVILES."<<endl;
		cout<<"7.- Retroceder. SÓLO ROBOTS MÓVILES."<<endl;
		cout<<"8.- Girar a la izquierda. SÓLO ROBOTS MÓVILES."<<endl;
		cout<<"9.- Girar a la derecha. SÓLO ROBOTS MÓVILES."<<endl;
		cout<<"10.- Detenerse. SÓLO ROBOTS MÓVILES."<<endl;
		cout<<"11.- Recoger escombros. SÓLO ROBOTS HUMANOIDES."<<endl;
		cout<<"12.- Terminar simulación"<<endl<<endl;
		
		cout<<"Seleccione un robot: ";
		cin>>x;
		
		Rzoomorficos r1=Rzoomorficos("Robot 1","Zoomórfico",1,100,10,10,30); //Tem 35° serpiente
		Rzoomorficos r2=Rzoomorficos("Robot 2","Zoomórfico",2,100,20,35,2);//Tem 37° araña
		Rmoviles r3=Rmoviles("Robot 3","Móvil",3,100,70,40,60);//Tem 36° ruedas omnidireccionales
		Rmoviles r4=Rmoviles("Robot 4","Móvil",4,100,15,10,5);//Tem 37° ruedas omnidireccionales
		Rmoviles r5=Rmoviles("Robot 5","Móvil",5,80,16,20,40);//Tem 35° con oruga
		Rhumanoide r6=Rhumanoide("Robot 6","humanoide",6,100,12,23,3);//Tem 35° 1.5 metros
		Rhumanoide r7=Rhumanoide("Robot 7","Humanoide",7,100,60,32,2);//Tem 36° 0.8 metros
		Rhumanoide r8=Rhumanoide("Robot 8","Humanoide",8,100,63,34,15);//Tem 37° 1.7 metros
		Rhumanoide r9=Rhumanoide("Robot 9","Humanoide",9,100,45,15,10);//Tem 37° 1.8 metros
		
		do{                     //Éste do while sirve para pedir más acciones del mismo robot.
		cout<<"\nSeleccione una acción: ";cin>>n;
		
		switch(x) //Selección de Robots..
		   {
			 
			 
			case 1:  //Acción del robot r1. temp 35°
			           if(n==2)
			           {
					        r1.escanearArea(); //Para escanear área. Método de todos los robots.
					   }
			          if(n==3)
			          {
						r1.mensajeencontroVida2();  //Robot con temperatura de 35°
					  }
					  if(n==4)
					  {
						r1.mensajeubicacionExacta();  //Para todos los robots.
					  }
					  if(n==5)
					  {
						r1.reportarestadoActual2(); //temperatura 35°   
					   }
			          if(n==6)
			          {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==7)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==8)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==9)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==10)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==11)
					   {
						cout<<"Acción sólo para Robots Humanoides.";  
					   }
					    if(n==12)
					   {
						cout<<"Simulación concluida."; 
						r1.reportarestadoActual2(); 
						
					   }
					   
					   break; 
					   
		     case 2: //Acción del robot r2. temp 37°			   
					   
			          if(n==2)
			           {
					        r2.escanearArea(); //Para escanear área. Método de todos los robots.
					   }
					  if(n==3)
			           {
						r2.mensajeencontroVida();  //Robot con temperatura de 37°
					   }
			          if(n==4)
					   {
						r2.mensajeubicacionExacta();  //Para todos los robots.
					   }  
			          if(n==5)
					   {
						r2.reportarestadoActual(); //temperatura 37°   
					   }
					  if(n==6)
			           {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					  if(n==7)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
			          if(n==8)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==9)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==10)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==11)
					   {
						cout<<"Acción sólo para Robots Humanoides.";  
					   }
			          if(n==12)
					   {
						cout<<"Simulación concluida."; 
						r2.reportarestadoActual(); //37°
						
					   }
					   break;
					   
			 case 3: //Acción del robot r3. temp 36°	   
					   
					    if(n==2)
			           {
					        r3.escanearArea(); //Para escanear área. Método de todos los robots.
					   }
					   if(n==3)
			          {
						r3.mensajeencontroVida1();  //Robot con temperatura de 36°
					  }
					  if(n==4)
					  {
						r3.mensajeubicacionExacta();  //Para todos los robots.
					  } 
					   if(n==5)
					  {
						r3.reportarestadoActual1(); //temperatura 36°   
					   } 
					   if(n==6)
			          {
						r3.avanzar1();  
					   }
					   if(n==7)
					   {
						r3.retroceder1();  
					   }
					   if(n==8)
					   {
						r3.girarIzquierda1();  
					   }
					   if(n==9)
					   {
						r3.girarDerecha1();  
					   }
					   if(n==10)
					   {
						r3.detenerse1();  
					   }
					   if(n==11)
					   {
						cout<<"Acción sólo para Robots Humanoides.";  
					   }
					   if(n==12)
					   {
						cout<<"Simulación concluida."; 
						r3.reportarestadoActual1(); 
						
					   }
					   break;
					   
			case 4: //Acción del robot r4. temp 37°		   
					   
					   if(n==2)
			           {
					        r4.escanearArea(); //Para escanear área. Método de todos los robots.
					   }
					   if(n==3)
			          {
						r4.mensajeencontroVida();  //Robot con temperatura de 37°
					  }
					  if(n==4)
					  {
						r4.mensajeubicacionExacta();  //Para todos los robots.
					  } 
					  if(n==5)
					  {
						r4.reportarestadoActual(); //temperatura 37°   
					   } 
					 if(n==6)
			          {
						r4.avanzar();  
					   }  
					   if(n==7)
					   {
						r4.retroceder();  
					   }
					    if(n==8)
					   {
						r4.girarIzquierda();  
					   }
					  if(n==9)
					   {
						r4.girarDerecha();  
					   } 
					   if(n==10)
					   {
						r4.detenerse();  
					   }
					   if(n==11)
					   {
						cout<<"Acción sólo para Robots Humanoides.";  
					   }
					   if(n==12)
					   {
						cout<<"Simulación concluida."; 
						r4.reportarestadoActual(); 
					   }
	                    break;
	          				   
		   case 5: //Acción del robot r5. temp 35°				   
					  if(n==2)
			           {
					        r5.escanearArea(); //Para escanear área. Método de todos los robots.
					   } 
					   if(n==3)
			          {
						r5.mensajeencontroVida2();  //Robot con temperatura de 35°
					  }
					  if(n==4)
					  {
						r5.mensajeubicacionExacta();  //Para todos los robots.
					  }  
					  if(n==5)
					  {
						r5.reportarestadoActual2(); //temperatura 35°   
					   }  
					   if(n==6)
			          {
						r5.avanzar2();  
					   }  
					   if(n==7)
					   {
						r5.retroceder2();  
					   }
					   if(n==8)
					   {
						r5.girarIzquierda2();  
					   }
					   if(n==9)
					   {
						r5.girarDerecha2();  
					   } 
					   if(n==10)
					   {
						r5.detenerse2();  
					   }
					   if(n==11)
					   {
						cout<<"Acción sólo para Robots Humanoides.";  
					   }
					   if(n==12)
					   {
						cout<<"Simulación concluida."; 
						r5.reportarestadoActual2(); 
					   }
					   break;
			
			case 6:  //Acción del robot r6. temp 35°		   
					  if(n==2)
			           {
					        r6.escanearArea(); //Para escanear área. Método de todos los robots.
					   }  
					   if(n==3)
			          {
						r6.mensajeencontroVida2();  //Robot con temperatura de 35°
					  }
					  if(n==4)
					  {
						r6.mensajeubicacionExacta();  //Para todos los robots.
					  } 
					  if(n==5)
					  {
						r6.reportarestadoActual2(); //temperatura 35°   
					  } 
					  if(n==6)
			          {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==7)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==8)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==9)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==10)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   } 
					   if(n==11)
					   {
						 r6.retirarEscombros2(); //temperatura 35°  
					   }
					   if(n==12)
					   {
						cout<<"Simulación concluida."; 
						r6.reportarestadoActual2(); 
						
					   }
					   break;
					   
			case 7:  //Acción del robot r7. temp 36°		   
					  if(n==2)
			           {
					        r7.escanearArea(); //Para escanear área. Método de todos los robots.
					   } 
					   if(n==3)
			          {
						r7.mensajeencontroVida1();  //Robot con temperatura de 36°
					  }
					  if(n==4)
					  {
						r7.mensajeubicacionExacta();  //Para todos los robots.
					  } 
					  if(n==5)
					  {
						r7.reportarestadoActual1(); //temperatura 36°   
					  } 
					  if(n==6)
			          {
						cout<<"Acción sólo para Robots Móviles.";  
					  } 
					   if(n==7)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==8)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==9)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==10)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					  if(n==11)
					   {
						 r7.retirarEscombros1(); //temperatura 36°  
					   }
					   if(n==12)
					   {
						cout<<"Simulación concluida."; 
						r7.reportarestadoActual1(); 
						
					   }
					  break;
					  
			case 8: //Acción del robot r. temp 37°		  
					 if(n==2)
			           {
					        r8.escanearArea(); //Para escanear área. Método de todos los robots.
					   } 
					  if(n==3)
			          {
						r8.mensajeencontroVida();  //Robot con temperatura de 37°
					  }
					  if(n==4)
					  {
						r8.mensajeubicacionExacta();  //Para todos los robots.
					  }
					  if(n==5)
					  {
						r8.reportarestadoActual(); //temperatura 37°   
					   }
					  if(n==6)
			          {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==7)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==8)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==9)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==10)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					  if(n==11)
					   {
						 r8.retirarEscombros(); //temperatura 37°  
					   }
					  if(n==12)
					   {
						cout<<"Simulación concluida."; 
						r8.reportarestadoActual(); 
						
					   }
					  break;
					  
			case 9: //Acción del robot r9 temp 37°		  
					 if(n==2)
			           {
					        r9.escanearArea(); //Para escanear área. Método de todos los robots.
					   } 
					 if(n==3)
			          {
						r9.mensajeencontroVida();  //Robot con temperatura de 37°
					  } 
					 if(n==4)
					  {
						r9.mensajeubicacionExacta();  //Para todos los robots.
					  } 
					 if(n==5)
					  {
						r9.reportarestadoActual(); //temperatura 37°   
					  } 
					 if(n==6)
			          {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==7)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==8)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==9)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==10)
					   {
						cout<<"Acción sólo para Robots Móviles.";  
					   }
					   if(n==11)
					   {
						 r9.retirarEscombros(); //temperatura 37°  
					   } 
					  if(n==12)
					   {
						cout<<"Simulación concluida."; 
						r9.reportarestadoActual(); 
						
					   }
					  break;

					  
		}
		   
		   
		   
		   cout<<"\n\nDesea realizar otra acción con el robot: 1=SÍ, Cualquier otra tecla para NO.";
		   cin>>z;
		   
		   }while(z==1);
		  
		   
		   cout<<"\n¿Desea seleccionar otro robot?: 1=SÍ, Cualquier otra tecla para NO.";
		   cin>>y;
		}while(y==1);
	


return 0;
}

