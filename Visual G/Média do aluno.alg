algoritmo "média aluno"
// Função :
// Autor : Isabela
// Data : 08/07/2024
// Seção de Declarações 
var

   aluno : caractere
   prova1 : real
   prova2 : real
   prova3 : real
   prova4 : real
   media : real

inicio

      Escreval("Digite o nome do aluno")
      leia(aluno)
      
      Escreval("Digite a primeira avaliação")
      leia(prova1)
      
      Escreval("Digite a segunda avaliação")
      leia(prova2)
      
      Escreval("Digite a terceira avaliação")
      leia(prova3)
      
      Escreval("Digite a quarta avaliação")
      leia(prova4)
      
      media <- prova1 + prova2 + prova3 + prova4 / 4
      
      Escreval("Aluno: ", aluno)
      Escreval("Média: ", media)
fimalgoritmo
