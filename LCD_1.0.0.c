#include <stdio.h>

char font[15][7][5] = {
	{ 
	  0, 1, 1, 1, 0,  // 0
	  1, 0, 0, 0, 1,
	  1, 0, 0, 1, 1,
	  1, 0, 1, 0, 1,
	  1, 1, 0, 0, 1,
	  1, 0, 0, 0, 1,
	  0, 1, 1, 1, 0,
	},
	
	{ 
	  0, 0, 0, 0, 1,  // 1
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	}, 
	
	{ 
	  0, 1, 1, 1, 0,  // 2
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 1, 1, 1, 0,
	  1, 0, 0, 0, 0,
	  1, 0, 0, 0, 0,
	  0, 1, 1, 1, 0,
	}, 
	
	{ 
	  0, 1, 1, 1, 0,  // 3
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 1, 1, 1, 0,
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 1, 1, 1, 0,
	}, 
	
	{ 
	  1, 0, 0, 0, 1,  // 4
	  1, 0, 0, 0, 1,
	  1, 0, 0, 0, 1,
	  0, 1, 1, 1, 0,
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	},
	
	{ 
	  0, 1, 1, 1, 0,  // 5
	  1, 0, 0, 0, 0,
	  1, 0, 0, 0, 0,
	  0, 1, 1, 1, 0,
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 1, 1, 1, 0,
	},
	
	{ 
	  0, 1, 1, 1, 0,  // 6
	  1, 0, 0, 0, 0,
	  1, 0, 0, 0, 0,
	  0, 1, 1, 1, 0,
	  1, 0, 0, 0, 1,
	  1, 0, 0, 0, 1,
	  0, 1, 1, 1, 0,
	},
	
	{ 
	  0, 1, 1, 1, 0,  // 7
	  1, 0, 0, 0, 1,
	  1, 0, 0, 0, 1,
	  1, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	},
	
	{ 
	  0, 1, 1, 1, 0,  // 8
	  1, 0, 0, 0, 1,
	  1, 0, 0, 0, 1,
	  0, 1, 1, 1, 0,
	  1, 0, 0, 0, 1,
	  1, 0, 0, 0, 1,
	  0, 1, 1, 1, 0,
	},
	
	{ 
	  0, 1, 1, 1, 0,  // 9
	  1, 0, 0, 0, 1,
	  1, 0, 0, 0, 1,
	  0, 1, 1, 1, 0,
	  0, 0, 0, 0, 1,
	  0, 0, 0, 0, 1,
	  0, 1, 1, 1, 0,
	},
	
	{ 
	  0, 0, 0, 0, 0,  // +
	  0, 0, 1, 0, 0,
	  0, 0, 1, 0, 0,
	  1, 1, 1, 1, 1,
	  0, 0, 1, 0, 0,
	  0, 0, 1, 0, 0,
	  0, 0, 0, 0, 0,
	},
	
	{ 0, 0, 0, 0, 0,  // -
	  0, 0, 0, 0, 0,
	  0, 0, 0, 0, 0,
	  1, 1, 1, 1, 1,
	  0, 0, 0, 0, 0,
	  0, 0, 0, 0, 0,
	  0, 0, 0, 0, 0,
	},
	
	{ 0, 0, 0, 0, 0,  // *
	  1, 0, 0, 0, 1,
	  0, 1, 0, 1, 0,
	  0, 0, 1, 0, 0,
	  0, 1, 0, 1, 0,
	  1, 0, 0, 0, 1,
	  0, 0, 0, 0, 0,
	},
	
	{ 0, 0, 0, 0, 0,  // /
	  0, 0, 1, 0, 0,
	  0, 0, 0, 0, 0,
	  1, 1, 1, 1, 1,
	  0, 0, 0, 0, 0,
	  0, 0, 1, 0, 0,
	  0, 0, 0, 0, 0,
	},
	
	{ 0, 0, 0, 0, 0,  // =
	  0, 0, 0, 0, 0,
	  1, 1, 1, 1, 1,
	  0, 0, 0, 0, 0,
	  1, 1, 1, 1, 1,
	  0, 0, 0, 0, 0,
	  0, 0, 0, 0, 0,
	}
};

int first, sec;   // �Է� ���� ���� 
char sign;        // ��� ��ȣ 
int result;       // ����� 

int f[5];         // ù��° ����
int s[5];		  // �ι�° ����
int r[10];		  // ��� ��  

int cf, cs, cr;
int x, y, n;

int i, j, k;
void Input() {
	char a;
	while(1) {
		printf ("����ϰ� ���� ���� �Է��ϼ���.\n");
		scanf ("%d %c %d", &first, &sign, &sec);
		
		printf ("%d %c %d�� �Է¹޾ҽ��ϴ�. �½��ϱ�? (Y/N)  ", first, sign, sec);
		getchar();  scanf ("%c", &a);
		if (a == 'y'  ||  a == 'Y') {
			break;
		}
		else if (a != 'n'  ||  a != 'N') {
			printf ("Error\n\n");
		}
	}
} 

void Calculation() {
	switch(sign) {
		case '+' : result = first + sec; sign = 10; break;
		case '-' : result = first - sec; sign = 11; break;
		case '*' : result = first * sec; sign = 12; break;
		case '/' : result = first / sec; sign = 13; break;
	}
}

int Count(int n) {  // �ڸ��� ���� 
    int count = 0;
    while(n != 0) {
        n = n/10;
        ++count;
    }
    return count;
}

void First() {  // ù��° ���� �ڸ��� �и�  
	for (i = 0; i < cf; i++) {
		int a = 1;
		for (j = 0; j < cf - i - 1; j++)
			a *= 10;
		f[i] = first / a;
		first = first % a;
	}
}

void Sec() {    // �ι�° ���� �ڸ��� �и�  
	for (i = 0; i < cs; i++) {
		int a = 1;
		for (j = 0; j < cs - i - 1; j++)
			a *= 10;		
		s[i] = sec / a;
		sec = sec % a;
	}
}

void Result() {    // ����� �ڸ��� �и�  
	for (i = 0; i < cr; i++) {
		int a = 1;
		for (j = 0; j < cr - i - 1; j++)
			a *= 10;
		r[i] = result / a;
		result = result % a;
	}
}

void Print(int all, int sub) {  // ��� ó�� 
	for (i = 0; i < all; i++) {
		printf ("��");
	}
	printf ("\n");
	
	printf ("��");
	for (i = 0; i < all - 2; i++) {
		printf ("��");
	}
	printf ("��\n");
	
	for (y = 0; y < 7; y++) {
		printf ("��");
		printf ("��");
		
		for (n = 0; n < cf; n++) {
			for (x = 0; x < 5; x++) {
				Print_font(x, y, f[n]);
			}
			printf ("��");
		}
		
		for (x = 0; x < 5; x++) {
			Print_font(x, y, sign);
		}
		printf ("��");
		
		for (n = 0; n < cs; n++) {
			for (x = 0; x < 5; x++) {
				Print_font(x, y, s[n]);
			}
			printf ("��");
		}
		
		printf ("��");
		printf ("��\n");
	}
	
	printf ("��");
	for (i = 0; i < all - 2; i++) {
		printf ("��");
	}
	printf ("��\n");
	
	for (y = 0; y < 7; y++) {
		printf ("��");
		printf ("��");
		
		for (x = 0; x < 5; x++) {
			Print_font(x, y, 14);
		}
		printf ("��");
		
		for (n = 0; n < cr; n++) {
			for (x = 0; x < 5; x++) {
				Print_font(x, y, r[n]);
			}
			printf ("��");
		}
		
		for (i = 0; i < sub; i++) {
			printf ("��");
		}
		
		printf ("��");
		printf ("��\n");
	}
	
	printf ("��");
	for (i = 0; i < all - 2; i++) {
		printf ("��");
	}
	printf ("��\n");
	
	for (i = 0; i < all; i++) {
		printf ("��");
	}
	printf ("\n");
	
}

void Print_font(int x, int y, int n) {  	// ��Ʈ ���  
	if (font[n][y][x])
		printf ("��");
	else
		printf ("��");
}

void main() {
	int a;
	printf("ȯ���մϴ�\n");
	while(1) {
		printf ("\n");
		Input();
		Calculation();
		
		cf = Count(first); 
		cs = Count(sec);
		cr = Count(result);
		
		First();
		Sec();
		Result();
		
		int all = (cf + cs) * 6 + 10;
		int sub = (cf + cs - cr) * 6; 
		Print(all, sub);
		
		printf ("\n�ٽ� ����Ͻðڽ��ϱ�? (Y/N)  ");
		getchar();  scanf ("%c", &a);
		if (a == 'n'  ||  a == 'N') {
			break;
		}
		else if (a != 'Y'  ||  a != 'Y') {
			printf ("\nerror 1\n");
			printf ("������ ���� ���α׷� ����");
			break;
		}
	}
}
