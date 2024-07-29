algoritmo "Enquanto - Tabuada"
// Função :
// Autor : Isabela
// Data : 10/07/2024
// Seção de Declarações
var

   contador, numero, resultado : inteiro

inicio

      contador <- 1
      
      Escreval("Digite um número para ver sua tabuada.")
      leia(numero)
      
      Enquanto ( contador <= 10 ) Faca

               resultado <- numero * contador
               Escreval (numero," * ", contador, " = ", resultado)
               
               contador <- contador + 1
               
      FimEnquanto
      
fimalgoritmo
