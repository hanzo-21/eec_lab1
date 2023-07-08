#include<stdio.h>
#include<conio.h>
#include <limits.h>
#include <float.h>
int main(){
	unsigned long long int a; //format specifier => %llu
	
	while(1){
		printf("Range of signed char %d to %d\n", SCHAR_MIN, SCHAR_MAX);
	    printf("Range of unsigned char 0 to %d \n\n", UCHAR_MAX);
	
	    printf("Range of signed short int(format specifier=%%d) %d to %d\n", SHRT_MIN, SHRT_MAX);
	    printf("Range of unsigned short int 0 to %d(format specifier=%%u)\n\n", USHRT_MAX);
	
	    printf("Range of signed int %d to %d  (format specifier=%%d)\n", INT_MIN, INT_MAX);
	    printf("Range of unsigned int 0 to %u  (format specifier=%%u)\n\n", UINT_MAX);
	
	    printf("Range of signed long int %ld to %ld  (format specifier=%%ld)\n", LONG_MIN, LONG_MAX);
	    printf("Range of unsigned long int 0 to %lu  (format specifier=%%lu)\n\n", ULONG_MAX);
	
	    printf("Range of signed long long int %lld to %lld (format specifier=%%lld)\n", LONG_LONG_MIN, LONG_LONG_MAX);     
	    printf("Range of unsigned long long int 0 to %llu  (format specifier=%%llu)\n\n", ULONG_LONG_MAX); 
	
	    printf("Range of float %e to %e \n", FLT_MIN, FLT_MAX);
	    printf("Range of double %e to %e \n", DBL_MIN, DBL_MAX);
	    printf("Range of long double %e to %e \n\n", LDBL_MIN, LDBL_MAX);
	    
	    //modify this code for practise
	    printf("enter signed long long int to check \n");
	    scanf("%llu",&a);
	    printf("signed long int result: %llu  \n",a);
	    printf("\n\n********************************** \n\n");
	}
    
    
	getch();
    return 0;
}
