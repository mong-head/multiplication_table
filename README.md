# multiplication_table
운영체제 과제1 : 수를 입력하면 자동으로 곱셈 테이블 만드는 프로그램

## 구현 순서
1. Cmd창에서 입력받을 수 있게 main함수에서 매개변수 입력
2. 표 라인 없는 **multiplication 출력 – 3중 for문 사용
3. 표 라인 만들기

** Multiplication 구현
- 가로로 4의 배수 단위로 칸이 나눠지므로 4로 나눈 몫에 해당하는 split이라는 변수 사용
- 가로로 몇 칸 나눠지는지는 i라는 변수사용
- 실제 multiplication 은 k,j 변수 이용해 k*j형태로 출력
- k<j인 경우는 공백 형태로 출력되게 if else문 사용

## how to make

1. 가로로 첫줄~마지막 칸
	
+ 윗 부분 표라인 출력

+ multiplication 출력( 동시에 왼쪽 옆라인 출력)

+ 세로로 마지막 칸의 오른쪽 옆 라인 출력

2. 가로로 마지막 칸(첫줄=마지막 줄 포함)

+ 입력 받은 수 : 4의 배수인 경우 밑부분 표라인 출력 후 종료

+ 윗 라인 출력
	+ 첫줄 = 마지막 줄 인 경우
	+ 나머지 경우(옆에 칸이 공백)

+ multiple 출력
	+ 세로로 첫~세번 째 칸
	+ 마지막 칸 : 옆라인 출력

+ 제일 밑 라인 출력
	


## system description
![image](https://user-images.githubusercontent.com/52481037/93209985-d5f6ce00-f799-11ea-83ad-86cd4dc7cdc2.png)

## test description
![image](https://user-images.githubusercontent.com/52481037/93210092-00488b80-f79a-11ea-92c7-c171f3c33949.png)


![image](https://user-images.githubusercontent.com/52481037/93210104-0474a900-f79a-11ea-8e67-3794db9c61d4.png)


![image](https://user-images.githubusercontent.com/52481037/93210114-076f9980-f79a-11ea-91cf-aec313c735fc.png)

## self evaluation

가로 중심으로 봐서 원래 입력값을 4로 나눈 split을 사용했다. 하지만, 라인을 추가하면서 코드가 많이 길어지게 되었다. If문을 줄이려고 코드를 더 늘리게 된 것 같다.
 

