#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Definir las variables
    int clave;
    float costo, total = 0;
    char respuesta;
    bool claveValida;

    // Bucle para realizar las compras
    do
    {
        // Inicializar la variable de validez de clave
        claveValida = false;

        // Solicitar clave del producto
        printf("\nIngrese la clave del producto: ");
        scanf("%d", &clave);

        // Verificar la clave y calcular el total
        switch (clave)
        {
        case 1:
            printf("Producto: Perecederos\n");
            claveValida = true;
            break;
        case 2:
            printf("Producto: Aseo\n");
            claveValida = true;
            break;
        case 3:
            printf("Producto: Perfumeria\n");
            claveValida = true;
            break;
        case 4:
            printf("Producto: Abarrotes\n");
            claveValida = true;
            break;
        default:
            printf("Clave no valida. Intente de nuevo.\n");
            break;
        }

        // Continuar solo si la clave es válida
        if (!claveValida)
        {
            continue;
        }

        // Solicitar el costo del producto
        printf("Ingrese el costo del producto: $");
        scanf("%f", &costo);

        // Sumar el costo al total
        total += costo;

        // Preguntar si el cliente quiere comprar más
        printf("Desea comprar mas productos? (S/N): ");
        scanf(" %c", &respuesta);

    } while (respuesta == 'S' || respuesta == 's');

    // Encabezado de la factura
    printf("TIENDA \"LA PROVINCIA\"\n");
    printf("MEXICO, D.F.\n");

    // Imprimir la factura
    printf("\nTOTAL A PAGAR: $%.2f\n", total);

    return 0;
}