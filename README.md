
## C02: Algoritmos 1

Neste repositório reúno todos os códigos desenvolvidos durante as aula de C02, matéria do [**Inatel**](https://inatel.br/home/), em C++.

Cada pasta é um assunto diferente visto em sala, o título de cada arquivo é o nome do exercício.

#### Entrada e saída
Nesta pasta estão os exercícios iniciais, aqui vemos sobre a estrutura básica do código, tipos de variáveis (**int**, **double**, **float** e **char**), operadores aritméticos e entrada e saída de dados.

#### Estruturas de seleção
Nesta pasta estão os exercícios de **if** e os de **switch**. A diferença entre as estruturas é que o *switch* trabalha apenas com variáveis *int* e *char*, comparando um valor exato.

```c++
switch(n) {
    case 61:
        </...>
        break;
}
```

```c++
if(n == 61) {
    </...>
}
```

#### Estruturas de repetição
Nesta pasta estão os exercícios de **for**, **while** e **do while**, que são estruturas que continuam executando um trecho de código enquanto a condição for verdadeira. 

- O *for* tem um contador, uma condição e um incremento do contador; cada vez que executamos o trecho entre chaves, o seu contador muda o valor, depois é verificado se a condição continua verdadeira para executar o trecho novamente.
- O *while* tem uma condição, esta que é verificada toda vez antes de executar o trecho entre as chaves.
- O *do while* executa o trecho entre as chaves uma vez, depois verifica a condição entre parentêses para continuar executando, agora agindo tal qual um *while*.

```c++
for(int i = 0; i < n; i++) {
    </...>
}
```

```c++
while(i < n) {
    </...>
}
```

```c++
do {
    </...>
} while(i < n);
```

#### Vetores
Nesta pasta estão os exercícios sobre vetores, uma estrutura de dados que armazena uma coleção de elementos do mesmo tipo em sequência na memória. Seus elementos são acessados através de índices.