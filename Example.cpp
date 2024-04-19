#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    begin:
    int autenticacion = 0;
    char cUsuario[10], cContrasena[10];
    char cUser[10], cPass[10];

    printf("Usuario: ");
    scanf("%s", cUser);

    printf("Contrase%ca: ",164);
    scanf("%s", cPass);

    strcpy(cUsuario, cUser);
    strcpy(cContrasena, cPass);

    if(strcmp(cUsuario, "admin") == 0 && strcmp(cContrasena, "admib") == 0)
    {
        autenticacion = 1;
    }
    if(autenticacion)
    {
        printf("Acceso concedido\n");
        printf("%c\n", (char)autenticacion);
    }
    else
    {
        printf("Usuario y/o contrase%ca incorrectos\n",164);
    }
    goto begin;
}

