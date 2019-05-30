#include <stdio.h>  
#include <stdlib.h> 

struct phone 
{
   char brand[16],type[10];
   int year,price;
}; 

int main(void)
{

    int a;
	printf("phone手機結構體\n");
    struct phone p[5]={  
	"ASUS", "Zenfone 5", 2018, 10900,
	"APPLE", "XR", 2018, 26000, 
    "Samsung", "S9", 2018, 31000,
    "OPPO", "R15", 2018, 8990, 
    "Huawei", "P20 Pro", 2018, 35000,
	};

    for (a=0; a<5; a++) 
    {
        printf("%s %s %4d %5d\n", p[a].brand, p[a].type, p[a].year, p[a].price);
    }
    system("pause"); 
	return 0;
}
