algoritmo "Comando de entrada de dados"
// Função :
// Autor : Isabela
// Data : 06/07/2024
// Seção de Declarações 
var

   cliente : caractere
   quantidade : inteiro
   preco : real
   produto : caractere
   totalAPagar: real

inicio
      Escreval("Digite o nome do cliente")
      leia(cliente)

      Escreval("Digite a quantidade de produtos que o cliente comprou")
      leia(quantidade)
      
      Escreval("Digite o nome do produto o cliente comprou")
      leia(produto)
      
      Escreval("Digite o preço do produto que o cliente comprou")
      leia(preco)
      
      totalAPagar <- quantidade * preco
      
      Escreval("Cliente: ", cliente)
      Escreval("Quantidade: ", quantidade)
      Escreval("Preço: ", preco)
      Escreval("Nome do produto: ", produto)
      Escreval("Total a pagar: ", totalAPagar)
      

fimalgoritmo
