#  comentário!
#  O professor usa e eu quis saber mais sobre como usar e como trabalhar com.
#
#  Link	 
#  https://www.embarcados.com.br/introducao-ao-makefile/

#para executar basta escrever 'make' no terminal!


# Comando utilizados na aula prática!
# all:
#     g++ nomedoarquivo.cpp -o nomedoarquivo.exe  (é a mesma coisa que gcc nomedoarquivo.cpp -o nomedoarquivo.exe ??)
# Flags que podem ser utilizadas:
# -pedantic (que te obriga a seguir mais estritamente a regra.)
# -std=c++17 (padrão de compilação)
# -03 (flag que deixa o código mais rápido)

all:
	g++ -O3 -pedantic -std=c++17 a4_Pratica_ex1.cpp -o a4_Pratica_ex1.exe 
	g++ -O3 -pedantic -std=c++17 a4_Pratica_ex2.cpp -o a4_Pratica_ex2.exe 
	g++ -O3 -pedantic -std=c++17 a4_Pratica_ex3.cpp -o a4_Pratica_ex3.exe 

teste:
	a4_Pratica_ex1.exe < a4_ex1_teste.txt  
# Para conseguir rodar isso basta escrever 'make teste' 