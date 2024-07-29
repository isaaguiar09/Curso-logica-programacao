algoritmo "Escolha caso - Valor do apartamento"
// Função :
// Autor : Isabela
// Data : 08/07/2024
// Seção de Declarações 
var

   numero : inteiro
   andar : caractere

inicio

      Escreval("Digite um número de 1 a 18 para receber o valor do apartamento.")
      leia(numero)
      
      Escolha numero
      
              Caso 1
                   andar <- "R$ 200.000"
                   
              Caso 2 , 3 , 4
                   andar <- "R$ 220.000"
                   
              Caso 5 , 6 , 7
                   andar <- "R$ 250.000"
                   
              Caso 8 , 9 , 10
                   andar <- "R$ 300.000"
                   
              Caso 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18
                   andar <- "R$ 500.000"
                   
              OutroCaso
                   andar <- "Valor do andar inválido, tente novamente."

      
      fimEscolha
      
                Escreval("O apartamento no andar ", numero," custa ", andar )

fimalgoritmo
