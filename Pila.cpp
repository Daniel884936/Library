#include "Pila.h"
#include <bits/stdc++.h> 

Pila::Pila(): _ultimo(NULL)
{
}

void Llamar();

void Pila::Agregar(Elemento* elemento)
{
   /* Llenar este método con su implementación de Agregar elemento a la pila */ 
   if(_ultimo==NULL){
    _ultimo = elemento;
   }else
   {
       elemento->SetSiguiente(_ultimo);
       _ultimo = elemento;
   }
   
    
}

Elemento* Pila::Extraer()
{
    /* Llenar este método con su implementación de Extraer un elemento de la pila */
    if (_ultimo==NULL)
    {
        return NULL;
    }else
    {
        Elemento* elementoRetorno = _ultimo;
        _ultimo = elementoRetorno->GetSiguiente();
        return elementoRetorno;
    }
    return NULL;
}
