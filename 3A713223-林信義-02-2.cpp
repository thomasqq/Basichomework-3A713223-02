#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int year,month,day;
	
	printf("請您輸入生日年份(西元):");
	scanf("%d",&year);
	printf("請您輸入生日月份:");
	scanf("%d",&month);
	printf("請您輸入生日日期:");
	scanf("%d",&day);
	
	printf("您的生日年月日為:%d,%d,%d\n",year,month,day);			
	
	
	system("PAUSE");
	return 0;
}
