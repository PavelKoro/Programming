#include <stdio.h>
    struct Int_result {
        int result;
        int has_error;
    };

    int read_int() {
        int result = 0, negative = 0, ch = getchar();
        
	    while (ch == ' ' || ch == '\t' || ch == '\n') {
            ch = getchar(); 
	    }
	    
	    if(!(ch == '+'|| ch == '-' || (ch >= '0' && ch <= '9'))) {
            printf("Wrong input, eneter number\n");
            ungetc(ch, stdin);
            return 0;
	    } 
	    
	    if(ch == '+' || ch == '-') {
		    char sign = ch;
		    ch = getchar();

		    if(ch >= '0' && ch <= '9'){
			    if(sign == '-'){
				    negative = 1;
			    }
		    } else {
			    printf("Bad input\n");
			    ungetc(ch, stdin);
			    ungetc(sign, stdin);
			    return 0;
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
	    return result;
    }


    char space_nop() {
        int ch = getchar();
        
        while(ch == ' ' || ch == '\t' || ch == '\n') {
            ch = getchar();
        }
        
        return ch;
    }
