#include<stdio.h>
int main()
{;
int n,somme =0,i;
printf("Entrer un nombre :");
scanf( "%d", &n );
for(i=1;i<=n; i=i+1){somme=somme+i;
}
printf("La somme des nombres de 1 a %d est : %d \n", n, somme);
return 0;
}
