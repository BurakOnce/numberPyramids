/*
Burak Önce 20120205052
Bu program kullanıcının girdiği sayı kadar satırı olan ve sayıların 1 den başlayıp girdi sayısına kadar artıp,
sonrasında 1 e kadar azalan bir piramit oluşturmasını sağlar.
*/

#include <stdio.h>
int main() 
{  
int x,y,n,q,p; 
//x satır sayısının girdi sayısı kadar olmasını sağlar.
//y sembollerin ne kadar yazılacağını kontrol eder.
//n kullanıcı girdisi.
//q çıktı sayısıdır. artan kısım için yazılmıştır.
//p çıktı sayısıdır. azalam kısım için yazılmıştır.

printf("n sayısını giriniz:\n");
scanf("%d",&n);

for(int x=1; x<=n; x++) //satır sayısını kısıtlar.
{

  for(int y=1; y<=n-x; y++ ) //yazılan boşluk sayısını belirler ki bu piramit için önemlidir.
    printf(" "); 

    for(int y=1, q=1; y<=x; y++,q++)  //çıktı sayısının artan kısmı.
      printf("%d",q); 

      for(int y=1, p=x-1; y<x; y++,p--)  //çıktı sayısının azalan kısmı.
        printf("%d",p); 

        printf("\n");

}
    return 0;  
}  