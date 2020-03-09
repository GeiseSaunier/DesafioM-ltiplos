# DesafioMultiplos
Solução para a soma de todos os múltiplos de 3 ou 5 abaixo de 1000.

*A solução para o problema proposto fora desenvolvida em linguagem C.*


## Situação problema

Se listarmos todos os números naturais abaixo de 10 que são múltiplos de 3 ou 5, obtemos 3, 5, 6 e 9. A soma desses múltiplos é 23. Encontre a soma de todos os múltiplos de 3 ou 5 abaixo de 1000.

## Solução 

Para a solução do problema, utilizou-se duas variáveis: uma denomina “a”, que receberá o valor de 1000 e outra chamada “soma” para efetuar a soma dos múltiplos. 
Em paralelo a essas variáveis, utilizou-se um contador, podendo ser identificado no código por “i”. O contador inicia em 1 e vai até 999 (condição: a<1000) e incrementa mais um. Em seguida, verifica o resto de divisão de 3 ou o resto da divisão de 5, já que a minha situação problema pede múltiplos de 3 ou 5. 
Em seguida, a variável soma, que começa em 0, recebe ela mesma mais os valores que estão guardados no contador. *Ao final, mostra-se o resultado da soma dos múltiplos.*
