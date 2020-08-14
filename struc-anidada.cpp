#include<iostream>
#include<stdio.h>
using namespace std;
struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    info_direccion dir_empleado;
    double salario;
}empleados[2];

int main(){
   for (int i=0;i<2;i++){
     //ffludh(stdin);//vaciar el buffer
     cout<<"nombre: ";
     cin.getline(empleados[i].nombre,20,'\n');
     cout << "direccion: ";
     cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
     cout<<"ciudad: ";
     cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
     cout<<"provincia: ";
     cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
     cout<<"salario: ";
     cin >>empleados[i].salario;
     cout<<'\n';
   }
  for (int j=0;j<2;j++){
    cout<<"nombre: "<<empleados[j].nombre<<'\n';
    cout<<"direccion: "<<empleados[j].dir_empleado.direccion<<'\n';
    cout<<"ciudad: "<<empleados[j].dir_empleado.ciudad<<'\n';
    cout<<"provincia: "<<empleados[j].dir_empleado.provincia<<'\n';
    cout<<"salario: "<<empleados[j].salario<<'\n';
  }

  return 0;
}
