#include <stdio.h>
#include <stdlib.h>
#include <localeh>
int main()
{
        stelocale(LC_ALL, "Portugues")
        double  num1,
             num2,
             Media;
        scanf("%lf", &num1);
        scanf("%lf", &num2);
        
        if (num1 > 10.0 || num2 > 10.00 && num1 < 0 || num2 < 0)
            printf("Presentation Error");
            
       else Media = num1 + num2/11; 
            printf("%.5lf", Media);

            
    return 0;
}

