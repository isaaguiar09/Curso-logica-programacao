algoritmo "semnome"
// Função :
// Autor :
// Data : 15/07/2024
// Seção de Declarações 
var

   matriz : vetor[1..3, 1..3] de real
   soma : real
   linha, coluna : inteiro

inicio

      Para linha de 1 ate 3 Faca
           Para coluna de 1 ate 3 Faca
           
                Escreval("Digite os números [linha: ", linha, " - Coluna: ", coluna, "]")
                Leia(matriz[ linha, coluna ])
           
           FimPara
      FimPara
      
        Para linha de 1 ate 3 Faca
           Para coluna de 1 ate 3 Faca

                Escreva(matriz[ linha, coluna ])

           FimPara
           
                  Escreval
           
      FimPara
      
      Para linha de 1 ate 3 Faca
           Para coluna de 1 ate 3 Faca

                soma <- ( matriz[ 1,1 ] + matriz[ 2,2 ] + matriz[ 3,3 ] )

           FimPara

                  Escreval

      FimPara
      
             Escreval
             Escreval("Soma da diagonal : ", soma)


fimalgoritmo
