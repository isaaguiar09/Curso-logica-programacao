algoritmo "Menu de operações"
// Função :
// Autor : Isabela
// Data : 08/07/2024
// Seção de Declarações 
var

   numero : real
   numero1 : real
   numero2 : real
   operacao : caractere
   resultado : real
   
inicio

      Escreval("Digite  o número da operação matemática desejada.")
      Escreval("1 -> Somar")
      Escreval("2 -> Subtrair ")
      Escreval("3 -> Multiplicar")
      Escreval("4 -> Dividir")
      leia(numero)
      
      Escreval("Digite um número para realizar a operação.")
      leia(numero1)
      Escreval("Digite o segundo número para realizar a operação.")
      leia(numero2)
      
      Escolha numero

      Caso 1
      
           resultado <- numero1 + numero2
           operacao <- "ADIÇÃO"
           
      Caso 2

           resultado <- numero1 - numero2
           operacao <- "SUBTRAÇÃO"
           
      Caso 3

           resultado <- numero1 * numero2
           operacao <- "MULTIPLIÇÃO"
           
      Caso 4
           
           Se ( numeroOp1 = 0 ) ou ( numeroOp2 = 0) Entao
           
              Escreval("Erro ao dividir.")
              
           Senao
           
            resultado <- numeroOp1 / numeroOp2
            operacao <- "DIVISÃO"
              
           fimSe
           
       fimEscolha
       
       Se ( numero >= 1 ) ou ( numero <=4) Entao
       
          Escreval("O resultado da ", operacao ," dos números ", numero1 ," e ", numero2 ," é ", resultado )
          
       Senao
       
          Escreval("Escolha Incorreta")
          
       fimSe
       

           
      
      
      
      

fimalgoritmo
