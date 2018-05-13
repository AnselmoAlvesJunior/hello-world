#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main(){ //inicio do programa sem parametros
	float a,b,c,x,x1,x2,xv,yv;
	
	printf("agora sera feita uma conta de baskara");
  
  	printf ("\ndigite um numero para a:");
   	scanf ("%f",&a);
  	printf ("\ndigite um numero para b:");
  	scanf ("%f",&b);
	printf ("\ndigite um numero para c:");
  	scanf ("%f",&c);

	x=((b*b)-4*a*c );
	xv=-(b/(2*a));
	yv=-(x/(4*a));
	
if(x>0)
	{
	x1=((-b-sqrt(x))/(2*a));
	x2=((-b+sqrt(x))/(2*a));
	
	
	printf("\nresultado de X1: %.2f",x1);
	printf("\nresultado de X2: %.2f",x2);
	
if(a<0)
{
	printf("\nconcavidade da parabola para baixo");
	printf("\nponto maximo em (%.2f,.2%f)",xv,yv);
}
 else if(a>0)
{
	printf("\nconcavidade da parabola para cima");
	printf("\nponto minimo em (%.2f,%.2f)",xv,yv);
} 	

}
else if(x=0)
{
	x1=-b/(2*a);
	printf("\nresultado: %.2f",x1);
}
else
{
	printf("\nnao ha raiz real   ");
	if(a<0)
{
	printf("\n a concavidade da parabola para baixo");
	printf("\nponto maximo em (%.2f,.2%f)",xv,yv);
}
 else if(a>0)
{
	printf("\n a concavidade da parabola para cima");
	printf("\nponto minimo em (%.2f,%.2f)",xv,yv);
} 	
} 	


return 0;
}
