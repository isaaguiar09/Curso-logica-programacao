algoritmo "Idade para votar e carteira de habilitação"
// Função :
// Autor : Isabela
// Data : 08/07/2024
// Seção de Declarações 
var

   cliente : caractere
   anoNascimento : inteiro
   idade : inteiro

inicio

      Escreval("Olá! Digite o seu nome.")
      leia(cliente)
      
      Escreval("Olá! Digite o seu ano de nascimento.")
      leia(anoNascimento)
      
      idade <- 2024 - anoNascimento
      
      Se ( idade >= 18) Entao
      
            Escreval("Caro ", cliente, ", você pode votar!")
            Escreval("Caro ", cliente, ", você pode tirar carteira de habilitação!")
            
      Senao

      Se ( idade >= 16) Entao

            Escreval("Caro ", cliente, ", você pode votar!")
            Escreval("Caro ", cliente, ", você NÃO pode tirar carteira de habilitação.")

      Senao
      
            Escreval("Caro ", cliente, ", você NÃO pode votar!")
            Escreval("Caro ", cliente, ", você NÃO pode tirar carteira de habilitação.")

      


           FimSe
    FimSe


      

      
fimalgoritmo
