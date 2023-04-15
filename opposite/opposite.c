#include <stdio.h>

//Burak öNCE 
//Girilen sayının tersini yazan program.


int main() 
{  
int a,b=0 ; //değişkenleri tanımlarız.

printf("Bir sayı giriniz: \n"); //ilk girdi.

scanf("%d",&a); //kullanıcıdan sayıyı girmesini isteriz.

printf("Sayının tersten yazılışı:"); 

while(a>0) //while ile programın a 0 dan büyükken döngüye girmesini sağlarız.
  { 
    
    
b=a%10 ; //a nın ilk basamağını b ye atarız.
a=a/10;  //a nın 1 basamak azalmasını sağlarız.
    
printf("%d",b); //son çıktı


  }

    return 0;  
}  