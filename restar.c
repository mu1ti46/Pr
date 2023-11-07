#include "funciones.h"

int restar(int op1, int op2){
	int sol;
	if (op1 > op2){
		sol = op1 - op2;
	}
	if(op2 > op1){
		sol = op2 - op1;
	}
	else{
		sol =  0;
	}
	return sol;
}

