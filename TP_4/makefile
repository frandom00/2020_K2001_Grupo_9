all:
	cd src && \
		bison -d AnalizadorSintactico.y &&\
		flex AnalizadorSintactico.l &&\
		gcc AnalizadorSintactico.tab.c lex.yy.c -o AnalizadorSintactico.exe &&\
		move AnalizadorSintactico.exe .. &&\
		del AnalizadorSintactico.tab.c AnalizadorSintactico.tab.h lex.yy.c
	cmd /c .\AnalizadorSintactico.exe