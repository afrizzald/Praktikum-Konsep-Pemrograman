#include <stdio.h>

int main(void){
	int c;
	int jk = 0;
	int js = 0;

	printf("Ketikkan sembarang kalimat: ");
	c = getchar();

	while (c != '\n'){
		jk++;

		if (c == ' '){
			js++;
		}

		c = getchar();
	}

	printf("Jumlah karakter = %d\n", jk);
	printf("Jumlah spasi = %d\n", js);

	return 0;
}
