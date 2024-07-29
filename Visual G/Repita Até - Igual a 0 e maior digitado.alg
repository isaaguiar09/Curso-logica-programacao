algoritmo "semnome"
// Função :
// Autor :
// Data : 10/07/2024
// Seção de Declarações 
var

   numero, maior : inteiro

inicio

      maior <- 0

      Repita
      
            Escreval("Digite um número.")
            leia(numero)
            
            Se ( numero > maior ) Entao
            
               maior <- numero
            
            FimSe
      
      Ate numero = 0
      
            Escreval
            Escreval("Parabéns!! Você digitou o número 0.")
            Escreval
            Escreval("Maior número digitado: ", maior)
            
fimalgoritmo
