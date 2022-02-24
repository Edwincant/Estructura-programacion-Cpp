/******************************************************************************

Sofía es estudiante de una carrera técnica en sistemas de computación y requiere
un ingreso extra para amortiguar sus gastos personales. Ella se ha encontrado con una
oportunidad en Internet donde le ofrecen zapatos al por mayor y a un buen precio. Ella
decide desarrollar una aplicación en el lenguaje C++ que le ofrezca realizar cálculos para
determinar costos, margen de ganancias y proyectar sus ventas. En este programa a
desarrollar, desempeñará el rol de compañero (a) y socio (a) de Sofía y le ayudará con su
propósito


*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    
    
    //declaracion de la variable
    int referencia, talla, costo, precioventa;
    char descripcion [100], disponible;
    
    //Variables de segunda unidad
    int cantidadvender, costoTotal, precioTotal, utilidadUnidad, utilidadTotal;
    float prorcentajeUtilidad;
    
    // Solicitar los datos del proceso de ventas para el negocio de venta de zapatos online:
    //referencia, descripcion, costo, precioventa y cantidadvender.
    
    cout << "Digite la referencia de los zapatos"<<endl;
    cin >> referencia;
    
    cout << "Digite la descripcion del zapato"<<endl;
    cin.ignore();
    cin.getline(descripcion,100);
    
    cout << "Digite la talla de zapato"<<endl;
    cin >> talla;
    
    cout << "Digite la S --> Si esta disponible o N ---> No disponible *** S/N"<<endl;
    cin >> disponible;
    
    cout << "Digite el costo del zapato"<<endl;
    cin >> costo;
    
    cout << "Digite el precio de venta del zapato"<<endl;
    cin >> precioventa;
    
    cout << "Digite la cantidad de pares de zapatos vneder"<<endl;
    cin >> cantidadvender;
    
    //_____________________________________________________________________________________________________________________________
    
    //Primero carculo de las variables: referencia, descripcion, costo, precioventa y cantidadvender.   
    
    costoTotal = costo * cantidadvender;
    precioTotal = precioventa * cantidadvender;
    utilidadUnidad = (precioventa-costo);
    utilidadTotal = utilidadUnidad * cantidadvender;
    prorcentajeUtilidad = ((float)utilidadTotal/(float)precioTotal) * 100 ; //(float) hace casting, CONVERSION entero flotante. 
    
    //_____________________________________________________________________________________________________________________________
    
    //Impresion en consola (lo que el usuario va a ver para su negocio de venta de zapatos)
    
    cout << " LOS DATOS REGISTRADOS SON LOS SIQUIENTES "<<endl;
    cout << "REFERENCIA         : "<<referencia<<endl;
    cout << "DESCRIPCIÓN        : "<<descripcion<<endl;
    cout << "TALLA              : "<<talla<<endl;
    cout << "DISPONIBILIDAD     : "<<disponible<<endl;      
    cout << "CANTIDAD DE PARES DE ZAPATOS : " << cantidadvender<<endl;
    cout << "COSTO UNIDAD       : $"<<costo<<endl;
    cout << "COSTO TOTAL        : $"<<costoTotal<<endl;
    cout << "PRECIO UNIDAD      : $"<<precioventa<<endl;
    cout << "PRECIO TOTAL DE    : "<<cantidadvender<<"unidades : "<<precioTotal<<endl;
    cout << "UTILIDAD POR UNIDAD: $"<<utilidadUnidad<<endl;
    cout << "UTILIDAD TOTAL     : $"<<utilidadTotal<<endl;
    cout << "PORCENTEJE DE UTILIDAD : $"<<prorcentajeUtilidad<<"%"<<endl;
    
    cout << "Gracias por digitar la información"<<endl;

 system("pause");
 return 0;
} 