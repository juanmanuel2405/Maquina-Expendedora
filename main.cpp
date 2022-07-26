/*
  Archivo: main.cpp
  Autor: 
  Juan Manuel Cuellar <juan.manuel.cuellar@correounivalle.edu.co>
  Daniel Felipe Rosero <@correounivalle.edu.co>
  Fecha creación: 2020-02-07
  Fecha última modificación: 2020-02-07
  Licencia: GNU-GPL
*/

/*
  Historia: 
  Hay una máquina que la recargan con 3 botellas de agua (que valen 1500 pesos cada una), 2 botellas de jugo de naranja (2000 pesos) y 7 botellas de jugo de zanahoria (3000 pesos).
Luego van llegando personas que hacen las compras que se detallan a a continuación. Muestre el estado de la máquina antes y después de cada transacción. Muestre la ganancia de dinero de la máquina al final del día.
  - Una persona introduce 2000 pesos y pide 1 botella de agua.
  - Una persona introduce 500 pesos y pide 1 botella de agua.
  - Una persona introduce 4000 pesos y pide 1 botella de jugo de naranja.
  - Una persona introduce 1500 pesos y pide 1 botella de agua.
  - Una persona introduce 3500 pesos y pide 1 botella de agua.
*/

#include "Maquina.h"
#include <iostream>
using namespace std;

int main()
{
  Maquina maquinaExpendedora;
  maquinaExpendedora.cargarProducto("Botella de Agua",3,1500);
  maquinaExpendedora.cargarProducto("Jugo de Naranja",2,2000);
  maquinaExpendedora.cargarProducto("Jugo de Zanahoria",7,3000);

  cout << maquinaExpendedora.productosDisponibles() << endl;

  maquinaExpendedora.pagarProducto(2000);
  maquinaExpendedora.seleccionarProducto(0,1);
  cout << "Has comprado " << maquinaExpendedora.entregaProducto() << endl;
  cout << "Y te he devuelto " << maquinaExpendedora.devuelta() << endl;

  maquinaExpendedora.pagarProducto(500);
  maquinaExpendedora.seleccionarProducto(0,1);
  cout << "Has comprado " << maquinaExpendedora.entregaProducto() << endl;
  cout << "Y te he devuelto "<< maquinaExpendedora.devuelta() << endl;

  maquinaExpendedora.pagarProducto(4000);
  maquinaExpendedora.seleccionarProducto(1,1);
  cout << "Has comprado " << maquinaExpendedora.entregaProducto() << endl;
  cout << "Y te he devuelto " << maquinaExpendedora.devuelta() << endl;

  maquinaExpendedora.pagarProducto(1500);
  maquinaExpendedora.seleccionarProducto(0,1);
  cout << "Has comprado " << maquinaExpendedora.entregaProducto() << endl;
  cout << "Y te he devuelto " << maquinaExpendedora.entregaProducto() << endl;

  maquinaExpendedora.pagarProducto(3500);
  maquinaExpendedora.seleccionarProducto(0,1);
  cout<< "Has comprado" << maquinaExpendedora.entregaProducto() << endl;
  cout<< "Y te he devuelto " <<
  maquinaExpendedora.devuelta() << endl;
  
  cout << "Al Final del Dia Ganamos "<< " " << maquinaExpendedora.ganancias() << endl;
  
  return 0;
}


  