#include <stdio.h>

int main()
{
    FILE * fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, "Jim, Salesman\nPan, Receptionist\nOscar, Accounting");
    
    fclose(fpointer);
    return 0;
}
