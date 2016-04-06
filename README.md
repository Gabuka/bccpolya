# bccpolya

Problema: Desenvolva uma função em C, apenas com o uso da biblioteca stdio.h, que calcule uma aproximação da raiz quadrada de um número real.

###Solução em linguagem matemática:

O problema pode resolvido com a seguinte equação matemática

![Alt text](/imgs/matematica.png)

Onde N é o valor de dentro da raiz. K é o número índice da variável que passa pela fórmula. O número máximo de K dependerá da precisão em pontos flutuantes que o problema precisará.

###Solução em Português Estruturado:

>algoritmo RaizQuadrada
>
>função raizq(real) : real
>inicio 
>    n, r, x1, x2 : real
>
>    leia (n)
>    se (n < 0) então
>             n = n*(-1)
>    fimse
>    
>    r = raizq(n)
>         
>    escreva ("Resultado: ",r)
>fim
>
>função raizq(n : real) : real
>inicio
>    x1, x2 : real
>    x1 = (n + 1)/2
>         enquanto (x2 != x1) então
>                 x2 = (x1 + (n/x1))/2
>                 x1 = (x2 + (n/x2))/2
>         fimenquanto
>    retorne x1
>fim
>fimalgoritmo


### Solução em Fluxograma:

![Alt text](/imgs/fluxograma.jpg)

## Polya
O termo "Polya" utilizado no nome do repositório remete ao livro "A Arte de Resolver Problemas", escrito por George Polya. Nesse livro o autor disserta sobre novos métodos de ensino e de como proporcionar problemas que estimulem o estudo dos alunos. Uma das práticas, cuja qual foi utilizada nesta aula, é a de desafiar o raciocinio e a capacidade de pesquisa dos alunos, propondo um exercicio que unificasse o que ja fora aprendido em aula, com o que o aluno pesquisará para resolver o problema. Criando assim uma harmonização entre teoria e prática, e ajudando a fixar o conteúdo ja aprendido.
