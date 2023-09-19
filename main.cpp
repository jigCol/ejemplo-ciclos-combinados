#include <iostream>

using namespace std;

//5. Una empresa registr� las compras realizadas a sus distintos proveedores durante
//todo el a�o anterior. Para cada compra se registraron los siguientes datos:
//
//� N�mero de proveedor (n�mero de cuatro cifras no correlativo).
//� D�a (1 a 31).
//� Mes (1 a 12).
//� Tipo de Factura (Responsable inscripto: "A",Consumidor Final: "B", o
//Monotributo: "C").
//� N�mero de Producto (n�mero no correlativo).
//� Cantidad comprada.
//� Precio unitario del producto.
//
//Este lote finaliza con un registro con n�mero de proveedor igual a 0.
//Los registros est�n agrupados por n�mero de proveedor. En el lote anterior no
//aparecen
//registros de los proveedores a los que que no se les hayan realizado compras.
//Se pide determinar e informar:
//
//a. El monto m�ximo registrado en una sola compra por cada proveedor y el
//n�mero de proveedor al que se le compr�.
//b. La inversi�n total de todo el a�o discriminada por tipo de factura.
//c. La compra con menor monto registrada durante el mes de Agosto junto al
//n�mero de producto comprado.
//d. La cantidad de compras que se realizaron a cada proveedor.
//e. El n�mero de producto con mayor cantidad comprada en una sola compra y
//en qu� proveedor se compr�.



int main()
{int numeroProveedor,dia,mes,numeroProducto,cantComprada,tipoFactura,menorProducto,mayorCantidad=0,proveedorMCantidad,numproductoM;
float precioUnitario,totalFA=0,totalFB=0,totalFC=0,menorAgosto;
bool mesB=1;

cout<<"Ingrese el numero de proveedor "<<endl;
cin>>numeroProveedor;
cout<<"Ingrese el dia "<<endl;
cin>>dia;
cout<<"Ingrese el mes "<<endl;
cin>>mes;
cout<<"Ingrese el tipo de factura "<<endl;
cin>>tipoFactura;
cout<<"Ingrese el numero del producto "<<endl;
cin>>numeroProducto;
cout<<"Ingrese la cantidad comprada"<<endl;
cin>>cantComprada;
cout<<"Ingrese el precio unitario del producto"<<endl;
cin>>precioUnitario;
cout<<endl<<"--------------------------------------"<<endl;

while(numeroProveedor!=0){
                 int numeroProveedorA,proveedorMax,ventasProveedor=0;
                 float monto=0,montoMax=0;

                 numeroProveedorA=numeroProveedor;

            while(numeroProveedor==numeroProveedorA){
                ventasProveedor++;

                monto=cantComprada*precioUnitario;

                if(monto>montoMax){montoMax=monto,proveedorMax=numeroProveedor;}
                if(tipoFactura==1){totalFA+=monto;}
                else if(tipoFactura==2){totalFB+=monto;}
                    else if(tipoFactura==3){totalFC+=monto;}

                if(mes==8){if(mesB){menorAgosto=monto,mesB=0,menorProducto=numeroProducto;}
                   else if(monto<menorAgosto){menorAgosto=monto,menorProducto=numeroProducto;}}

                if(cantComprada>mayorCantidad){mayorCantidad=cantComprada,proveedorMCantidad=numeroProveedor,numproductoM=numeroProducto;}





                cout<<"Ingrese el numero de proveedor "<<endl;
                cin>>numeroProveedor;
                cout<<"Ingrese el dia "<<endl;
                cin>>dia;
                cout<<"Ingrese el mes "<<endl;
                cin>>mes;
                cout<<"Ingrese el tipo de factura "<<endl;
                cin>>tipoFactura;
                cout<<"Ingrese el numero del producto "<<endl;
                cin>>numeroProducto;
                cout<<"Ingrese la cantidad comprada"<<endl;
                cin>>cantComprada;
                cout<<"Ingrese el precio unitario del producto"<<endl;
                cin>>precioUnitario;
                cout<<endl<<"-----------------------------------"<<endl;
                                                    }

                cout<<"El monto maximo del proveedor "<<proveedorMax<<" es de "<<montoMax<<" y se le realizaron "<<ventasProveedor<<" compras."<<endl<<endl;




                         }

    cout<<"La inversion total es de:"<<endl<<"Factura A: "<<totalFA<<endl<<"Factura B: "<<totalFB<<endl<<"Factura C: "<<totalFC<<endl;
    cout<<"La menor venta en Agosto fue del producto "<<menorProducto<<" con un monto de "<<menorAgosto<<endl;
    cout<<"La mayor cantidad vendida en una compra fue del producto "<<numproductoM<<" realizada para el proveedor "<<proveedorMCantidad<<endl;

    return 0;
}
