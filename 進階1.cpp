#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {    
    for(int i=65;i<=90;i++)
	{     
    printf("%c ",i);     
    printf("%c\n",i+32);  
    } 
    system("pause");
    return 0;
}
