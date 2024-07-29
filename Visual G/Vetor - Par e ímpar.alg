algoritmo "semnome"
// Função :
// Autor :
// Data : 16/07/2024
// Seção de Declarações 
var

   contador, numero : inteiro
   par : vetor[1..4] de inteiro
   impar : vetor[1..4] de inteiro
   
inicio

      Para contador de 1 ate 4 Faca
      
           Escreval("Digite o número ", contador, ".")
           leia(numero)
           
           Se numero mod 2 = 0 entao
           
              par[ contador ] <- numero
           
           Senao
           
              impar[ contador ] <- numero
           
           FimSe
           
      
      FimPara
      
      Escreval
      Escreval("Números pares :  ")
      
      Para contador de 1 ate 4 Faca

           Escreval( par[ contador ] )

      FimPara
      
      Escreval
      Escreval("Números ímpares :  ")

      Para contador de 1 ate 4 Faca

           Escreval( impar[ contador ] )

      FimPara



fimalgoritmo
