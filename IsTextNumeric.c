#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
 char text[100] = "";
  int i,k=0,control=0;
  double dbl;
  scanf("%s", text);
  while(text[k]!='\0' ){
   k++;  
   }	
for(i=0;i<k;i++)
  {
    if(text[i]!='.'){
    	if(!isdigit(text[i]))
   		 {
     	 control=1;
    	}
    }
  }
if(control>0)
{printf("Text has non numeric character");}
else{
dbl=atof(text);
printf("%f",dbl);
}
	return 0;
}
