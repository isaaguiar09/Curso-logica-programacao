algoritmo "Lan house"
// Fun��o :
// Autor : Isabela
// Data : 08/07/2024
// Se��o de Declara��es 
var

   cliente : caractere
   minutosUsados : inteiro
   minutosEmHoras : real
   valorAPagar: real
   
inicio

      Escreval("Digite o nome do cliente")
      leia(cliente)
      
      Escreval("Digite os minutos usados pelo cliente")
      leia(minutosUsados)
      
      minutosEmHoras <- minutosUsados / 60
      
      valorAPagar <- minutosEmHoras * 2
      
      Escreval("Cliente: ", cliente)
      Escreval("Minutos em horas: ", minutosEmHoras)
      Escreval("Valor a pagar: ", valorAPagar)
      

fimalgoritmo
