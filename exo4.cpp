#include<stdio.h>
int main()
{ 
int age;
printf("Veillez entrer votre age:");
scanf( "%d", &age );
if(age<18){
printf("Vous etes mineur");}
else{printf("Vous etes majeur");
}
return 0;
}
