#include <stdio.h>

struct int_result {
	int result; 
	int error; 	
}; 

struct int_result read_int() {
        int result = 0;
	int negative = 0; 
	int ch = getchar();
	while (ch == ' ' || ch == '\t' || ch == '\n') {
		ch = getchar(); 
	}
	
	struct int_result rr = {0, 1};
	
	if(!(ch == '+'|| ch == '-' || (ch >= '0' && ch <= '9'))) {
		//printf("Wrong input, eneter number\n");
		ungetc(ch, stdin);
		return rr;
	} 
	
	if(ch == '+' || ch == '-') {
		char sign = ch;
		ch = getchar();
		if(ch >= '0' && ch <= '9'){
			if(sign == '-'){
				negative = 1;
			}
		} else {
			//printf("Bad input\n");
			ungetc(ch, stdin);
			ungetc(sign, stdin);
			return rr;
		}
	}
	
	while(ch >= '0' && ch <='9') {
		result = result * 10;
		result = result + (ch - '0');
		ch = getchar();
	}
	
	ungetc(ch, stdin);
	
	if (negative){
		result = -result; 
	}
	
	rr.result = result;
	rr.error = 0;
	return rr;
}

char skip_all_spaces() {
	char ch = getchar();
	while (ch == ' ' || ch == '\t' || ch == '\n'){
		ch = getchar(); 
	}
	return ch;  
}
