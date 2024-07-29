algoritmo "Enquanto - Média do aluno"
// Função :
// Autor : Isabela
// Data : 10/07/2024
// Seção de Declarações 
var

   aluno : caractere
   somaNotas, nota : real
   contador : inteiro

inicio

      nota <- 0
      
      Escreval("Digite o nome do aluno")
      leia(aluno)
      
      contador <- 1
      
      Enquanto ( contador < 5 ) faca
      
               Escreval("Digite a nota da prova", contador)
               leia(nota)
               
               somaNotas <- somaNotas + nota
               contador <- contador + 1
               
      FimEnquanto
      
      Escreval("Aluno : ", aluno)
      Escreval("Média : ", somaNotas/4)
      

fimalgoritmo
