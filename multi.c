#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	/*
	argc : 옵션 개수
	argv : 옵션
	argv[0]은 실행파일*/

	/*문자열로 받은 것을 atoi이용해서 숫자로 바꿈*/
	int multi_num = atoi(argv[1]);

	printf("Hello World!!\n");
	printf("multipication number = %d\n", multi_num);

	/*0을 잘못 입력했을 경우*/
	if (multi_num == 0)
		return 0;

	int i, j, k;

	/*표의 라인을 출력하기위해, 가독성 높이려고 이름있는 배열 사용*/
	char ascii[12] = { 1,2,3,4,5,6,16,21,22,23,25 };

	int split = multi_num / 4;
	/*가로로 4의 배수 단위로 칸이 나눠지므로 split이라는 변수로 몇칸을 나누어야하는지 계산*/
	int remain = multi_num % 4;
	/*가로의 마지막 칸때 세로로는 몇칸을 가야하는 지 계산*/
	int start = 0; /*한문단시작*/
	int end = 0; /*한문단끝*/

	/*가로로 첫~마지막전 줄(가로 칸)*/
	for (i = 0; i<split; i++)
	{
		start = i * 4 + 1;
		end = (i + 1) * 4;

		/*첫줄인 경우*/
		if(i == 0)
			printf("%c", ascii[0]);
		else
			printf("%c", ascii[10]);

		/* ㅡ 이부분 출력하기 위함.*/
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

		/*k * j의 형태*/
		for (j = 1; j <= end; j++)
		{
			/*세로로 첫째칸~마지막 전 칸*/
			for (k = start; k <= end; k++)
			{
				printf("%c", ascii[4]);
				if (j <= k)
					printf("%2d x %2d = %3d\t", k, j, k*j);
				else
					printf("\t\t");
			}
			/*세로로 마지막 칸 : 마지막에 닫을려고*/
			printf("%c", ascii[4]);
			printf("\n");
		}
	}

	/*가로로 마지막줄(첫줄=마지막줄인경우 포함)*/
	start = i * 4 + 1;
	end = i * 4 + remain;
	int end2 = (i + 1) * 4;

	/*multi_num이 4,8,12인경우 밑부분 닫고 끝내버림*/
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

	/*첫줄=마지막줄인 경우 라인의 윗줄 출력*/
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
	/*옆에 칸이 남는 경우 라인의 윗줄 출력*/
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

	/*multiplication 출력*/
	for (j = 1; j <= end2; j++)
	{
		/*세로로 첫~세번째 칸까지*/
		for (k = start; k <= end; k++)
		{
			printf("%c",ascii[4]);
			if (j <= k)
				printf("%2d x %2d = %3d\t", k, j, k*j);
			else
				printf("\t\t");
		}
		/*세로로 마지막(4번째)칸 : 옆부분(|) 한번 더 출력*/
		printf("%c", ascii[4]);
		printf("\n");
	}
	/*제일 밑라인 닫기*/
	printf("%c", ascii[2]);
	for (int u = start; u <= end; u++)
	{
		for (int g = 0; g < 15; g++)
			printf("%c", ascii[5]);
		printf("%c", ascii[7]);
	}

	return 0;
}