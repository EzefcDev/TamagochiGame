	Este programa está escrito para ser utilizado en un arduino uno, 
junto a una matriz de led realizada con decodificador.

	El programa intenta hacer una imitación del juego tamagochi, 
pero con una versión más personal y simple, no es una copia, solo se 
toma el concepto.

Funcionamiento:

	El juego empieza dibujando un huevo, y luego al presionar el 
botón para que inicie aparece una cara feliz en la matriz, luego de un 
tiempo esta cambia a una cara triste, y hay que adivinar qué es lo que 
quiere pulsando uno de los cuatro botones, los cuales tiene las opciones 
de comer, dormir, bañarse y jugar. 
	En la opción de jugar se nos presenta la parte más interactiva 
del proyecto, ya que en esta opción nos encontraremos jugando a piedra, 
papel o tijera contra la máquina.
	Si no acertamos en ninguna opción, nuestra mascota fallese.
	Cada vez que nuestra mascota este triste podemos ver cuanta 
vida nos queda pulsando el quinto boton, esto nos mostrara un corazon,
y a medida que perdamos vida este se hira desvaneciendo.

Componentes:

	-Arduino uno
	-5 switch
	-6 resistencias de 1K
	-Matriz de led 8x8(esta esta realizada con el deco MC74HC154)
