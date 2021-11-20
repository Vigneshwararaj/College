	AREA program, CODE, READONLY    
 	LDR R1,=data
	MOV R3,#10
	LDR R4,choice
	MOV R5,#0
	MOV R6,#1
	
loop 
	LDR R2,[R1],#4
	AND R6,R2,#1;
	CMP R6,#1
	ADD R5,R5,R2;
	SUBS R3,R3,#1;
	CMP R3,#0
	BNE loop;


Stop 
	B Stop 
	
data DCD 1,2,3,4,5,6,7,8,9,10
choice DCD 1
	END