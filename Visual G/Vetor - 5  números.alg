algoritmo "semnome"
// Função :
// Autor :
// Data : 11/07/2024
// Seção de Declarações 
var

   numero : vetor [0..4] de inteiro
   contador, total : inteiro

inicio

      Para contador de 0 ate 4 Faca
      
           Escreval("Digite um número:")
           leia( numero[ contador ] )
           
           total <- total + numero[ contador ]
      
      FimPara
      
      Escreval("Total da soma: ", total)
      Escreval
      Escreval("Números digitados: ")
      
      Para contador de 0 ate 4 Faca
      
           Escreval("Número: ", contador, " - ", numero[ contador ] )
           
      FimPara

fimalgoritmo
