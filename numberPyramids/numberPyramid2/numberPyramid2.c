#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


/*Burak Önce  20120205052
Bu program kullanıcının girdiği sayı kadar satırı ve sütunu
olan bir sayı piramidi oluşturur.
*/

int main() 
{
  int n;


scanf("%d",&n);

for(int x=1 , p=n ; x<=n ; x++ , p-- ) 
//Satırı belirleyen döngü

{

  for(int y=1 ; y<=n-x ; y++)
  //boşlukları belirleyen döngü
      printf(" ");

  for(int z=1,k=p ; z<=x ; z++,k++)
  //Sayıları belirleyen döngü
      printf("%d",k);




  printf("\n");

}
  return 0;
}