#include <stdio.h>

int main(){

	int r = 0, r1 = 0;
	char c;
	c = getchar();
	while(c != EOF){
		if(r == -1)
			break;
		if(c == '(')
			r ++;
		else if(c == ')') 
			r --;
		r1 ++;
		c = getchar();
	}
	
	printf("%d %d\n", r, r1);

	return 0;
}	
