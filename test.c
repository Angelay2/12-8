#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_ROW 5
#define MAX_COL 5

//棋盘初始化
void Init(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessBoard[row][col] = ' ';
		}
	}
}
//打印棋盘
void Print(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			printf("%c ");
		}
		printf("\n");
	}
}

void PlayMove(char chessBoard[MAX_ROW][MAX_COL]){
	//玩家落子
	printf("玩家落子 !\n");
	printf("请输入您要落子的位置: \n");
	int row = 0;
	int col = 0;
	// scanf 的格式化字符串要求更严格, 稍有不慎就会写错
	scanf("%d %d",&row, &col);
	if (row < 0 || row >= MAX_ROW
		|| col < 0 || col >= MAX_COL){
		//用户的输入有误
		return;
	}
		chessBoard[row][col] = 'X';

}
//执行这个函数, 就进行了一局游戏.
void Game(){
	// 1. 创建棋盘,并初始化棋盘(每个位置都设为空格)
	char chessBoard[MAX_ROW][MAX_COL];
	while(1){
		// 2. 打印棋盘(第一次打印的是空白棋盘)
		printf(chessBoard);
		// 3. 玩家落子(通过输入坐标的方式制定位置)
		PlayMove(chessBoard);
		// 4. 判断一下游戏是否结束
		// 5. 电脑落子(随机落子)
		// 6. 再次判断游戏是否结束
	}

}

//先写一个基本的交互菜单

int Menu(){
	printf("====================\n");
	printf("欢迎来到五子棋游戏 !\n");
	printf("1. 开始游戏\n");
	printf("0. 结束游戏\n");
	printf("====================\n");
	printf("请输入您的选择: \n");
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
			printf("您的输入有误,请重新输入");
			Menu();
		}

	system("pause");
	return 0;

}