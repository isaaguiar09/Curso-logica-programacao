algoritmo "semnome"
// Função :
// Autor :
// Data : 15/07/2024
// Seção de Declarações 
var

   listaN : vetor[1..5] de inteiro
   numero, posicao : inteiro

inicio

      Para posicao de 1 ate  5 Faca
      
           Escreval("Digite o número ", posicao)
           leia ( listaN[ posicao ])
      
      FimPara
      
      Escreval
      Escreval
      Escreval("Digite um número para pesquisar.")
      leia(numero)
      
      posicao <- 1
      
      Enquanto ( posicao < 5 ) e ( listaN[ posicao ] <> numero )  Faca
      
               posicao <- posicao + 1
      
      FimEnquanto
      
      Se listaN[ posicao ] = numero Entao
      
         Escreval("Número encontrado na posição ", posicao )
      
      Senao
      
         Escreval("Número não encontrado.")
      
      FimSe

fimalgoritmo
