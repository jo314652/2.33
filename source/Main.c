#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float mile, gasolineprice, milespergallon, parkingfee, toll;
	printf("請輸入每天行駛里程(公里)：");
	scanf_s("%f", &mile);
	printf("請輸入每加侖汽油的價格：");
	scanf_s("%f", &gasolineprice);
	printf("請輸入每加侖汽油行駛里程數：");
	scanf_s("%f", &milespergallon);
	printf("請輸入每天的停車費：");
	scanf_s("%f", &parkingfee);
	printf("請輸入每天的過路費：");
	scanf_s("%f", &toll);
	printf("您每天開車所花費的金額：%.2lf元\n",((mile/milespergallon)*gasolineprice)+parkingfee+toll);

	system("pause");
	return 0;
	
}