#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_ROW 5
#define MAX_COL 5

//���̳�ʼ��
void Init(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessBoard[row][col] = ' ';
		}
	}
}
//��ӡ����
void Print(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			printf("%c ");
		}
		printf("\n");
	}
}

void PlayMove(char chessBoard[MAX_ROW][MAX_COL]){
	//�������
	printf("������� !\n");
	printf("��������Ҫ���ӵ�λ��: \n");
	int row = 0;
	int col = 0;
	// scanf �ĸ�ʽ���ַ���Ҫ����ϸ�, ���в����ͻ�д��
	scanf("%d %d",&row, &col);
	if (row < 0 || row >= MAX_ROW
		|| col < 0 || col >= MAX_COL){
		//�û�����������
		return;
	}
		chessBoard[row][col] = 'X';

}
//ִ���������, �ͽ�����һ����Ϸ.
void Game(){
	// 1. ��������,����ʼ������(ÿ��λ�ö���Ϊ�ո�)
	char chessBoard[MAX_ROW][MAX_COL];
	while(1){
		// 2. ��ӡ����(��һ�δ�ӡ���ǿհ�����)
		printf(chessBoard);
		// 3. �������(ͨ����������ķ�ʽ�ƶ�λ��)
		PlayMove(chessBoard);
		// 4. �ж�һ����Ϸ�Ƿ����
		// 5. ��������(�������)
		// 6. �ٴ��ж���Ϸ�Ƿ����
	}

}

//��дһ�������Ľ����˵�

int Menu(){
	printf("====================\n");
	printf("��ӭ������������Ϸ !\n");
	printf("1. ��ʼ��Ϸ\n");
	printf("0. ������Ϸ\n");
	printf("====================\n");
	printf("����������ѡ��: \n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

int main(){
	while(1){
		int choice = Menu();
		if(choice == 1){
			Game();
		}else if(choice == 0){
			printf("goodbye!\n");
		}else{
			printf("������������,����������");
			Menu();
		}

	system("pause");
	return 0;

}