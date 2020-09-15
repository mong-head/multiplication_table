#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	/*
	argc : �ɼ� ����
	argv : �ɼ�
	argv[0]�� ��������*/

	/*���ڿ��� ���� ���� atoi�̿��ؼ� ���ڷ� �ٲ�*/
	int multi_num = atoi(argv[1]);

	printf("Hello World!!\n");
	printf("multipication number = %d\n", multi_num);

	/*0�� �߸� �Է����� ���*/
	if (multi_num == 0)
		return 0;

	int i, j, k;

	/*ǥ�� ������ ����ϱ�����, ������ ���̷��� �̸��ִ� �迭 ���*/
	char ascii[12] = { 1,2,3,4,5,6,16,21,22,23,25 };

	int split = multi_num / 4;
	/*���η� 4�� ��� ������ ĭ�� �������Ƿ� split�̶�� ������ ��ĭ�� ��������ϴ��� ���*/
	int remain = multi_num % 4;
	/*������ ������ ĭ�� ���ηδ� ��ĭ�� �����ϴ� �� ���*/
	int start = 0; /*�ѹ��ܽ���*/
	int end = 0; /*�ѹ��ܳ�*/

	/*���η� ù~�������� ��(���� ĭ)*/
	for (i = 0; i<split; i++)
	{
		start = i * 4 + 1;
		end = (i + 1) * 4;

		/*ù���� ���*/
		if(i == 0)
			printf("%c", ascii[0]);
		else
			printf("%c", ascii[10]);

		/* �� �̺κ� ����ϱ� ����.*/
		for (int u = start; u <= end; u++)
		{
			for (int g = 0; g < 15; g++)
				printf("%c", ascii[5]);
			if(i==0)
				printf("%c", ascii[8]);
			else
				printf("%c", ascii[6]);
		}
		printf("\n");

		/*k * j�� ����*/
		for (j = 1; j <= end; j++)
		{
			/*���η� ù°ĭ~������ �� ĭ*/
			for (k = start; k <= end; k++)
			{
				printf("%c", ascii[4]);
				if (j <= k)
					printf("%2d x %2d = %3d\t", k, j, k*j);
				else
					printf("\t\t");
			}
			/*���η� ������ ĭ : �������� ��������*/
			printf("%c", ascii[4]);
			printf("\n");
		}
	}

	/*���η� ��������(ù��=���������ΰ�� ����)*/
	start = i * 4 + 1;
	end = i * 4 + remain;
	int end2 = (i + 1) * 4;

	/*multi_num�� 4,8,12�ΰ�� �غκ� �ݰ� ��������*/
	if (remain == 0)
	{
		printf("%c", ascii[2]);
		for (int u = 1; u <= 4; u++)
		{
			for (int g = 0; g < 15; g++)
				printf("%c", ascii[5]);
			printf("%c", ascii[7]);
		}
		return 0;
	}

	/*ù��=���������� ��� ������ ���� ���*/
	if (i == 0)
	{
		printf("%c", ascii[0]);
		for (int u = start; u <= end; u++)
		{
			for (int g = 0; g < 15; g++)
				printf("%c", ascii[5]);
			printf("%c", ascii[8]);
		}
	}
	/*���� ĭ�� ���� ��� ������ ���� ���*/
	else
	{
		printf("%c", ascii[10]);
		for (int u = start; u <= end; u++)
		{
			for (int g = 0; g < 15; g++)
				printf("%c", ascii[5]);
			printf("%c", ascii[6]);
		}
		for (int u = end+1; u <= end2; u++)
		{
			for (int g = 0; g < 15; g++)
				printf("%c", ascii[5]);
			printf("%c", ascii[7]);
		}
	}
	printf("\n");

	/*multiplication ���*/
	for (j = 1; j <= end2; j++)
	{
		/*���η� ù~����° ĭ����*/
		for (k = start; k <= end; k++)
		{
			printf("%c",ascii[4]);
			if (j <= k)
				printf("%2d x %2d = %3d\t", k, j, k*j);
			else
				printf("\t\t");
		}
		/*���η� ������(4��°)ĭ : ���κ�(|) �ѹ� �� ���*/
		printf("%c", ascii[4]);
		printf("\n");
	}
	/*���� �ض��� �ݱ�*/
	printf("%c", ascii[2]);
	for (int u = start; u <= end; u++)
	{
		for (int g = 0; g < 15; g++)
			printf("%c", ascii[5]);
		printf("%c", ascii[7]);
	}

	return 0;
}