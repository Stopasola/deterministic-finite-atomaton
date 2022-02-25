# deterministic-finite-atomaton-

Simulação de Autômatos Finitos Determinísticos 
 Deve-se implementar um simulador de autômatos finitos determinísticos, que
receba a especificação formal de um autômato e a seguir uma sequência de cadeias. O
simulador deve simular a execução do autômato para cada cadeia e responder com “S”
se a cadeia for aceita, ou com “N” se a cadeia não for aceita.

Entrada:
A primeira linha da entrada conterá o alfabeto �, o qual deverá ser constituído apenas de
dígitos (0 a 9), letras minúsculas (a até z) e sublinhado ( _ ).
A segunda linha conterá um inteiro Q (1 ≤ Q ≤ 10) indicando o número de estados do
autômato. Os estados deverão ser numerados sequencialmente de 1 até Q.
A terceira linha conterá um único inteiro S, indicando o estado inicial.
A quarta linha conterá de 1 até no máximo Q inteiros, separados por espaço, indicando
os estados finais do autômato.
A quinta linha conterá um inteiro D (1 ≤ D ≤ Q x |�|) que indica o número de transições 1
do autômato.

As D linhas seguintes conterão as transições do autômato, uma por linha, na forma
“Qi s Qj” que indicam o estado corrente, o símbolo lido e o próximo estado,
respectivamente.
Após as transições haverá uma linha com um inteiro N (1 ≤ N ≤ 100) que indicará o
número de cadeias de teste. O comprimento de cada cadeia não excederá 200
caracteres.
As N linhas seguintes conterão as cadeias a serem analisadas. As cadeias estarão contidas
entre dois símbolos ‘@‘. Dois símbolos ‘@‘ seguidos indicarão uma cadeia vazia.

Saída:
Para cada cadeia a ser analisada, o simulador deve imprimir duas linhas de dados: a
cadeia original na primeira linha e a resposta do autômato na segunda linha. 

Entrada 
01
2
1
1 2
3
1 0 1
1 1 2
2 1 2
10
@@
@0@
@1@
@00@
@01@
@10@
@11@
@000@
@001@
@010@

Saída

@@
S
@0@
S
@1@
S
@00@
S
@01@
S
@10@
N
@11@
S
@000@
S
@001@
S
@010@
N