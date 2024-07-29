algoritmo "Média e recuperação do aluno"
// Função :
// Autor : Isabela
// Data : 08/07/2024
// Seção de Declarações 

var

   aluno: caractere
   prova1 : real
   prova2 : real
   prova3 : real
   prova4 : real
   media1 : real
   media2 : real
   recuperacao : real
   
inicio

      Escreval("Digite o nome do aluno.")
      leia(aluno)
      
      Escreval("Digite a 1º prova.")
      leia(prova1)
      
      Escreval("Digite a 2º prova.")
      leia(prova2)
      
      Escreval("Digite a 3º prova.")
      leia(prova3)

      Escreval("Digite a 4º prova.")
      leia(prova4)
      
      media1 <- prova1 + prova2 + prova3 + prova4 / 4
      
      Se ( media1 >= 7) Entao
      
           Escreval("Parabéns! ", aluno, " está aprovado!!")
         
      Senao
      
           Escreval("Que pena! Digite sua a nota de recuperação.")
           leia(recuperacao)
           
      media2 <- media1 + recuperacao / 2
      
      Se ( media1 >= 7) Entao
      
           Escreval("Parabéns! ", aluno, " está aprovado!!")
           
      Senao
      
           Escreval("Que pena! " , aluno, " está reprovado.")
           
           FimSe
           
      FimSe
      

      
      
           

      


fimalgoritmo
