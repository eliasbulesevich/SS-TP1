#include <stdio.h>

int proximoestadoq0(int c){
    int q;
    switch (c) {
        	case '0': 
        		q = 1;
        		break;
        	case '1': case '2': case '3': case '4': case '5': case '6': case '7':
        	    q = 2;
        		break;
        	case '8': case '9':
        		q = 2;
        		break;
        	case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': 
        		q = 6;
        		break;
        	case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': 
        		q = 6; 
        		break;
        	case 'x': case 'X':
        	    q = 6; 
        		break;
        	default:
        	    q = 6;
    		    break;
        }
    return q;
}
//----------------------------------------------------------------------------------------------------------------//
int proximoestadoq1(int c){
    int q;
    switch (c) {
    	    case '0': 
        		q = 5;
        		break;
        	case '1': case '2': case '3': case '4': case '5': case '6': case '7':
        	    q = 5;
        		break;
        	case '8': case '9':
        		q = 6;
        		break;
        	case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': 
        		q = 6;
        		break;
        	case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': 
        		q = 6; 
        		break;
        	case 'x': case 'X':
        	    q = 3; 
        		break;
        	default:
        	    q = 6;
    		    break;
	    }
    return q;
}

//----------------------------------------------------------------------------------------------------------------//
int proximoestadoq2(int c){
    int q;
    switch (c) {
    	    case '0': 
        		q = 2;
        		break;
        	case '1': case '2': case '3': case '4': case '5': case '6': case '7':
        	    q = 2;
        		break;
        	case '8': case '9':
        		q = 2;
        		break;
        	case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': 
        		q = 6;
        		break;
        	case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': 
        		q = 6; 
        		break;
        	case 'x': case 'X':
        	    q = 6; 
        		break;
        	default:
        	    q = 6;
    		    break;
        }
    return q;
}

//----------------------------------------------------------------------------------------------------------------//
int proximoestadoq3(int c){
    int q;
    switch (c) {
    		case '0': 
        		q = 4;
        		break;
        	case '1': case '2': case '3': case '4': case '5': case '6': case '7':
        	    q = 4;
        		break;
        	case '8': case '9':
        		q = 4;
        		break;
        	case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': 
        		q = 4;
        		break;
        	case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': 
        		q = 4; 
        		break;
        	case 'x': case 'X':
        	    q = 6; 
        		break;
        	default:
        	    q = 6;
    		    break;
	    }
    return q;
}

//----------------------------------------------------------------------------------------------------------------//
int proximoestadoq4(int c){
    int q;
    switch (c) {
    	    case '0': 
        		q = 4;
        		break;
        	case '1': case '2': case '3': case '4': case '5': case '6': case '7':
        	    q = 4;
        		break;
        	case '8': case '9':
        		q = 4;
        		break;
        	case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': 
        		q = 4;
        		break;
        	case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': 
        		q = 4; 
        		break;
        	case 'x': case 'X':
        	    q = 6; 
        		break;
        	default:
        	    q = 6;
    		    break;
        }
    return q;
}

//----------------------------------------------------------------------------------------------------------------//
int proximoestadoq5(int c){
    int q;
    switch (c) {
    		case '0': 
        		q = 5;
        		break;
        	case '1': case '2': case '3': case '4': case '5': case '6': case '7':
        	    q = 5;
        		break;
        	case '8': case '9':
        		q = 6;
        		break;
        	case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': 
        		q = 6;
        		break;
        	case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': 
        		q = 6; 
        		break;
        	case 'x': case 'X':
        	    q = 6; 
        		break;
        	default:
        	    q = 6;
    		    break;
	    }
    return q;
}

//----------------------------------------------------------------------------------------------------------------//


int main()
{
    int q; // Estado
    char c;
    
    FILE *entrada;
    entrada = fopen ("entrada.txt", "r");
    
    if(entrada == NULL){
        printf("Error en la apertura. Es posible que el archivo no exista\n");
    }
    
    FILE *salida;
    salida = fopen ("salida.txt", "w");
    
    c = fgetc (entrada);
    while(c != EOF){
        q = 0;
        while ((c != EOF) && (c!= ',')){
            if(c==' '){
               c = fgetc (entrada); 
            }
            fputc (c, salida);    
            switch (q) {
                case 0:
                    q = proximoestadoq0 (c);
                    break;
            	case 1: 
            	    q = proximoestadoq1 (c);
                    break;
            	case 2: 
            	    q = proximoestadoq2 (c);
                    break;
            	case 3:
            	    q = proximoestadoq3 (c);
                    break;
            	case 4: 
            	    q = proximoestadoq4 (c);
                    break;
            	case 5: 
            	    q = proximoestadoq5 (c);
                    break;
            	default:
            		q = 6;
        	}
    	    c = fgetc (entrada);
        }
        
        switch (q) {
                case 1:
                    fprintf(salida,"\tOCTAL\n");
                    break;
            	case 2: 
            	    fprintf(salida,"\tDECIMAL\n");
                    break;
            	case 4: 
            	    fprintf(salida,"\tHEXADECIMAL\n");
                    break;
            	case 5:
            	    fprintf(salida,"\tOCTAL\n");
                    break;
            	case 6: 
            	    fprintf(salida,"\tNO RECONOCIDA\n");
                    break;
        }
        c = fgetc (entrada);
    }
	fclose (entrada);
    fclose (salida);

    return 0;
}






