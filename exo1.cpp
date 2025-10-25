#include<stdio.h>
int main()
{ char nom[20];
int age;
 printf("Veillez votre nom");
scanf( "%S", nom);
printf("Veillez entrer votre age");
scanf( "%d", &age );
printf("Bonjour %S ,vous aviez %d ans.\n" , nom, age);
return 0;
}
