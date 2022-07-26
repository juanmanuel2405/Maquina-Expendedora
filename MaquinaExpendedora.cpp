/*
  Archivo: MaquinaExpendedora.cpp
  Autor: 
  Juan Manuel Cuellar <juan.manuel.cuellar@correounivalle.edu.co>
  Daniel Felipe Rosero <@correounivalle.edu.co>
  Fecha creación: 2020-02-07
  Fecha última modificación: 2020-02-07
  Licencia: GNU-GPL
*/
#include "Maquina.h"
Maquina::Maquina()
{
  dineroTotal=0;
  codigoProductoPedido = -1;
  dineroIntroducido = 0;
  cantidadDelPedido = 0;
};             

Maquina::~Maquina()
{

}

string Maquina:: productosDisponibles()
{
  if(cantidadDeProductos.size() != productos.size() or cantidadDeProductos.size() != precioProductos.size()) 
    throw string("ERROR 404");

  string resultado ="";
  for(int cual=0; cual<productos.size(); cual++)
  resultado += string("Hay ") + to_string(cantidadDeProductos[cual]) + " " + productos[cual] + " que valen " + to_string(precioProductos[cual]) + "\n";
  return resultado;

}

void Maquina::pagarProducto(int dinero)
{
  dineroIntroducido +=  dinero;
}

void Maquina::seleccionarProducto(int numeroProducto, int cantidad)
{
  codigoProductoPedido= numeroProducto;
  cantidadDelPedido = cantidad;
}

string Maquina::entregaProducto()
{
  if(codigoProductoPedido < 0 or codigoProductoPedido >= productos.size())
    return string ("Producto agotado");
  if(cantidadDeProductos[codigoProductoPedido]< cantidadDelPedido)
    return  string("Cantidad Excesiva");
  if(precioProductos[codigoProductoPedido]*cantidadDelPedido > dineroIntroducido)
    return string("No tienes el dinero suficiente para comprar este producto.");
  dineroIntroducido -= precioProductos[codigoProductoPedido]*cantidadDelPedido; dineroTotal += precioProductos[codigoProductoPedido]*cantidadDelPedido;
    return to_string(cantidadDelPedido)+ " " + productos [codigoProductoPedido];    
}

int Maquina::devuelta()
{
  int dineroDevuelto = dineroIntroducido;
  dineroIntroducido = 0;
  return dineroDevuelto;
}

void Maquina::cargarProducto(string producto, int cantidadDeProducto, int precioProducto )
{
  productos.push_back(producto);
  cantidadDeProductos.push_back(cantidadDeProducto);
  precioProductos.push_back(precioProducto);
}

int Maquina::ganancias()
{
  int dineroAEntregar = dineroTotal;
  dineroTotal = 0;
  return dineroAEntregar;
}