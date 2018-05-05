/*
TITULO: Algoritmo de euclides extendido (calcula o D RSA)
DATA: 13/Agosto/2009
*/

#include <stdio.h>
#include <stdlib.h>


/* Aritmética modular é também considerada como o "algoritmo do relógio".

Ao extrair o modulo 12, como resposta possível pode-se ter números de
0 a 11. Nunca negativo, pois a ideia é de um relógio com 12 posições, sendo
a primeira o zero e a última o 11.

Porém o operador de módulo do C (operador %) computa apenas o resto da divisão
e gera números negativos. Em C:

-2 mod 12 = -2 (não está entre 0 e 11)
2 mod -12 = 2  (não está entre -11 e 0)

O C dizer que -2 mod 12 é -2 significa dizer que ele está a -2 de distância do
final do relógio, ou seja, está em 10 (o início e também o final do relógio é o zero).

Dizer que 2 mod -12 significa um relógio ao contrário (0, -1, -2, -3, .. -11, andando
no sentido anti-horário) e que o valor 2 está a 2 posições de distância do 0, ou seja,
está em -10.

Nesta artimética modular o resultado da operação PRECISA SER do mesmo sinal
do divisor.

Observou-se que o operador de módulo do python (%) não tem este comportamento,
calculando o módulo não negativo. A biblioteca bn.h do openssl possui ambos,
tanto a função BN_mod que simplesmente retorna o resto da divisão (comportamento
igual ao %) como a função BN_nnmod que calcula o módulo não negativo.

Nesta versão em C resolveu-se fazer uma pequena correção na resposta dada pelo
operador de módulo, pois o algoritmo de euclides precisa do módulo positivo.
*/
long mod(long a, long b)
{
    long r = a % b;

    /* Uma correçã é necessária se r e b não forem do mesmo sinal */

    /* se r for negativo e b positivo, precisa corrigir */
    if ((r < 0) && (b > 0))
	return (b + r);

    /* Se ra for positivo e b negativo, nova correcao */
    if ((r > 0) && (b < 0))
	return (b + r);

    return (r);
}

long euclides_ext(long a, long b, long c)
{
    long r;

    r = mod(b, a);

    if (r == 0) {
	return (mod((c / a), (b / a)));	// retorna (c/a) % (b/a)
    }

    return ((euclides_ext(r, a, -c) * b + c) / (mod(a, b)));
}

int main(int argc, char *argv[])
{
    long p, q, e, qq, n, d;

    /* O objetivo desta implementação do algoritmo de euclides extendido é o
       cálculo do valor do D da chave privada correspondente a Ke=(n,e)
       para isto são necessários fornecer o p, o q e o valor de e
     */


    /* pegando os valores de p, q e n fornecidos como argumentos do main */
    p = 997;
    q = 333331;
    e = 599;

    /* calculando o n */
    n = p * q;

    /* calculando o quociente de euler, chamado aqui de qq */
    qq = (p - 1) * (q - 1);


    /* chamando a função que calcula o d. Ela retorna um número que case na
       expressão: d*e mod qq = X

       Tem-se o e e o qq. Para o RSA o X deve ser 1, pois d*e mod qq = 1
     */
    d = euclides_ext(e, qq, 1);

    printf("\nVALORES CALCULADOS:\n");
    printf("N  = %10li\nE  = %10li\nqq = %10li\nD  = %10li\n", n, e, qq,d);
    printf("D = %d", (qq - d));

}
