#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float mile, gasolineprice, milespergallon, parkingfee, toll;
	printf("�п�J�C�Ѧ�p���{(����)�G");
	scanf_s("%f", &mile);
	printf("�п�J�C�[�ڨT�o������G");
	scanf_s("%f", &gasolineprice);
	printf("�п�J�C�[�ڨT�o��p���{�ơG");
	scanf_s("%f", &milespergallon);
	printf("�п�J�C�Ѫ������O�G");
	scanf_s("%f", &parkingfee);
	printf("�п�J�C�Ѫ��L���O�G");
	scanf_s("%f", &toll);
	printf("�z�C�Ѷ}���Ҫ�O�����B�G%.2lf��\n",((mile/milespergallon)*gasolineprice)+parkingfee+toll);

	system("pause");
	return 0;
	
}