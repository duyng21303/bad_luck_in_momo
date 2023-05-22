#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long intRandom(long long min, long long max){
	return rand() % (max - min + 1) + min;
}
int dunghaytiep(int n){
	if(n == 1){
		return 0;
	}else return 1;
}
int main(int argc, char *argv[]) {
	long long x, y, z;
	int count;
	char c;
	int n;
	long long result;
	srand(time(NULL));
	long sotien;
	long cuoc;
	printf("\033[1;36mNhap so tien muon co: \033[0m");
	scanf(" %d", &sotien);
	printf("\033[1;36mNhap so tien muon cuoc: \033[0m");
	scanf(" %d", &cuoc);
	do{
	do{
		printf("\033[1;36mNhap chan le: \033[0m");
		scanf(" %c", &c);
	}while(c != 'c' && c != 'l');
	count = 1;
	switch(c){
		case 'c':
		x = intRandom(500,2154);
		result = x*x*x + 30000000000;
		if(result % 2 == 0){
			printf("\033[1;32mMa giao dich la %lld, ban thang\033[0m\n", result);
			sotien += cuoc;
			printf("\033[0;35mTien con lai : %ld\033[0m\n", sotien);
		}else{	
		printf("\033[1;31mMa giao dich la %lld, ban thua\033[0m\n", result);	
			sotien -= cuoc;
			printf("\033[0;35mTien con lai : %ld\033[0m\n", sotien);
		/*do{		
		x = intRandom(500,2154);
		result = x*x*x + 30000000000;
		printf("\033[1;33mChoi lan %d, ma giao dich %lld\033[0m\n", count, result);
		sotien -= cuoc;
		printf("\033[0;35mTien con lai : %ld\033[0m\n", sotien);
		count++;
		}while(result % 2 != 0);
		printf("\033[1;33mBan thang sau %d vong choi, ma giao dich %lld\033[0m\n", count - 1, result);
		sotien += cuoc;
		printf("\033[0;35mTien con lai : %ld\033[0m\n", sotien);*/
	}
	break;
		case 'l':
			x = intRandom(500,2154);
		result = x*x*x + 30000000000;
		if(result % 2 != 0){
			printf("\033[1;32mMa giao dich la %lld, ban thang\033[0m\n", result);
			sotien += cuoc;
			printf("\033[0;35mTien con lai : %ld\033[0m\n", sotien);
			break;
		}else{	
		printf("\033[1;31mMa giao dich la %lld, ban thua\n\033[0m", result);
		sotien -= cuoc;
		printf("\033[0;35mTien con lai : %ld\033[0m\n", sotien);	
		/*do{		
		x = intRandom(500,2154);
		result = x*x*x + 30000000000;
		printf("\033[1;33mBan se thang sau %d vong, ma giao dich %lld\033[0m\n", count, result);
		sotien -= cuoc;
		printf("\033[0;35mTien con lai : %ld\033[0m\n", sotien);
		count++;
		}while(result % 2 == 0);
		printf("\033[1;33mBan thang sau %d vong choi, ma giao dich %lld\033[0m\n", count - 1, result);
		sotien += cuoc;
		printf("\033[0;35mTien con lai : %ld\033[0m\n", sotien);*/
	}
	break;
}		
		printf("\033[1;34mNhap phim 1 de dung va phim khac de di tiep: \033[0m");
		scanf("%d", &n);
}while(dunghaytiep(n) != 0 && sotien >= 0);
	return 0;
}