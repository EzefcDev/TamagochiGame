	Este programa est� escrito para ser utilizado en un arduino uno, 
junto a una matriz de led realizada con decodificador.

	El programa intenta hacer una imitaci�n del juego tamagochi, 
pero con una versi�n m�s personal y simple, no es una copia, solo se 
toma el concepto.

Funcionamiento:

	El juego empieza dibujando un huevo, y luego al presionar el 
bot�n para que inicie aparece una cara feliz en la matriz, luego de un 
tiempo esta cambia a una cara triste, y hay que adivinar qu� es lo que 
quiere pulsando uno de los cuatro botones, los cuales tiene las opciones 
de comer, dormir, ba�arse y jugar. 
	En la opci�n de jugar se nos presenta la parte m�s interactiva 
del proyecto, ya que en esta opci�n nos encontraremos jugando a piedra, 
papel o tijera contra la m�quina.
	Si no acertamos en ninguna opci�n, nuestra mascota fallese.
	Cada vez que nuestra mascota este triste podemos ver cuanta 
vida nos queda pulsando el quinto boton, esto nos mostrara un corazon,
y a medida que perdamos vida este se hira desvaneciendo.

Componentes:

	-Arduino uno
	-5 switch
	-6 resistencias de 1K
	-Matriz de led 8x8(esta esta realizada con el deco MC74HC154)
