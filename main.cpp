#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int nroMes;
    char mes [15];
    cout << "Por favor ingrese el numero del mes: "<< endl;
    cin >> nroMes;

    switch (nroMes)
    {
    case 1:
        strcpy(mes,"Enero");
        break;
    case 2:
        strcpy(mes,"Febrero");
        break;
    case 3:
        strcpy(mes,"Marzo");
        break;
    case 4:
        strcpy(mes,"Abril");
        break;
    case 5:
        strcpy(mes,"Mayo");
        break;
    case 6:
        strcpy(mes, "Junio");
        break;
    case 7:
        strcpy(mes, "Julio");
        break;
    case 8:
        strcpy(mes,"Agosto");
        break;
    case 9:
        strcpy(mes,"Septiembre");
        break;
    case 10:
        strcpy(mes,"Obtubre");
        break;
    case 11:
        strcpy(mes,"Noviembre");
        break;
    case 12:
        strcpy(mes,"Diciembre");
        break;
    }
    cout<< "El mes es: " << mes << endl;

    return 0;
}
