algoritmo "Escolha caso"
// Função :
// Autor : Isabela
// Data : 08/07/2024
// Seção de Declarações 
var

   diaSemana : caractere
   numero : inteiro

inicio

       Escreval("Digite um número entre 1 a 7")
       leia(numero)
       
       Escolha numero
       

                    Caso 1
                    
                   diaSemana <- "Domingo"
                   
                    Caso 2

                   diaSemana <- "Segunda-feira"
                   
                    Caso 3

                         diaSemana <- "Terça-feira"
                   
                    Caso 4

                         diaSemana <- "Quarta-feira"
                   
                    Caso 5

                         diaSemana <- "Quinta-feira"
                   
                    Caso 6

                         diaSemana <- "Sexta-feira"
                   
                    Caso 7

                         diaSemana <- "Sabádo"
                         
                    OutroCaso
                    
                         diaSemana <- "Valor Inválido"

       FimEscolha
       
       Escreval("O", numero, " é ", diaSemana)

fimalgoritmo
