#include <stdio.h>
#include <stdlib.h>
  //int aux, numeros1[2],numeros2[2];
  int *apunt;
  int arreg1[5] = {1,2,3,4,5};
  int arreg2[5];
 
  void copiando(int *apunt)
{

  		int i;
                for(i=0;i<5;i++)
		{
		arreg2[i] = *apunt+i;
		}
}
int main()
{
	apunt=arreg1;
	copiando(apunt);
	int i;
	for(i=0;i<5;i++)
	{
	printf("%d\n",arreg2[i]);
       	}
}






  //for (i=0;i<2;i++){
    //  printf("%d\n",numeros2[i]);
  
     
     
  


