    /*			PM SECTION BATCH(25)        */
    /*			 SPOORTHI M:(1BM21ET045)   */
     /*			MANISHA N:(1BM21ET019)   */

#include<stdio.h>
#include<conio.h>
void main()
{
  int j,tmax,n0;
  float r,dt,l,t1=0;
  clrscr();
  printf("\nEnter the no radioactive nuclides: ");
  scanf("%d",&n0);
  printf("Enter decay constant: ");
  scanf("%f",&l);
  printf("enter tmax(sec): ");
  scanf("%d",&tmax);
  dt=1/l;
  printf("Time step (s): %f",dt);
  while(t1<=tmax)
  {
     printf("The radioactive nuclides at %f is %d\n",t1,n0);
     t1+=dt;
     for(j=0;j<=n0;j++)
     {
	r=r/1000;
	if(r<=1) n0--;
     }

	if(n0<0)
	{
	printf("\ndecay is not possible");
	break;
	}
   }

  getch();


 }