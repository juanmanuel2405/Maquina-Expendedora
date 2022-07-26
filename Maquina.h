/*
  Archivo: Maquina.h
  Autor: 
  Juan Manuel Cuellar <juan.manuel.cuellar@correounivalle.edu.co>
  Daniel Felipe Rosero <@correounivalle.edu.co>
  Fecha creación: 2020-02-07
  Fecha última modificación: 2020-02-07
  Licencia: GNU-GPL
*/

/*
  Clase: Maquina
    Modela una máquina de expendio de bebidas.
  Atributos: 
    - Un vector de productos
    - Un vector de precios
    - Un vector de cantidades
  Funcionalidades:
    - La máquina puede mostrar en pantalla su estado, que consiste en los productos disponibles, su número identificador, la cantidad que hay y el precio (todo ello pueden variar).
    - El usuario introduce dinero, pulsa el número identificador del producto deseado y la máquina entrega el producto y entrega las vueltas (el dinero sobrante).
    - También se le puede preguntar a la máquina cuanto dinero ha conseguido (suponemos que empieza con 0).
    - El proveedor puede cargar una cierta cantidad de un producto que tiene un cierto precio.
  Relaciones: ninguna
*/





#ifndef Maquina_HH
#define Maquina_HH
#include <iostream>
#include <vector>
using namespace std;
 
class Maquina 
{
private:
    vector <string> productos;
    vector <int> cantidadDeProductos;
    vector <int> precioProductos; 
    int dineroTotal;
    int codigoProductoPedido;
    int dineroIntroducido;
    int cantidadDelPedido;
  
       
  public:
    Maquina(); //construcor

    virtual void cargarProducto(string producto, int cantidadDeProducto, int precioProducto );

    virtual ~Maquina();

    virtual string productosDisponibles(); 

    virtual void pagarProducto(int dinero);

    virtual void seleccionarProducto(int numeroProducto, int cantidad);

    virtual string entregaProducto();

    virtual int devuelta();

    virtual int ganancias();
};

#else
class Maquina;  // Declaración adelantada
#endif
