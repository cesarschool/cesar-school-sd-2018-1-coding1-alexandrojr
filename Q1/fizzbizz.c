#include <stdio.h>
#include <stdbool.h>

/**
* Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.
*
* Função: bool isPalindrome (char[] sentence, int length)
* Input:
* - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
* - length: tamanho do array - número de caracteres
* Output: true se a sentença é um palídromo, falso caso negativo.
*/

bool isPalindrome (char sentence[], int length) {
 printf("\nisPalindrome::START: %s, %d\n", sentence, length);

 // TODO: YOUR CODE HERE!
 int index = 0; //Usar no loop (while)
 int LetraDiferente = 0;
    
 while(index < length){
     if (sentence[index] != sentence[length - 1 - index]) //verificação de letras diferentes
     {
         LetraDiferente = 1; // se encontrar uma letra diferente
         
     } // end if

     index = index + 1;

 } // end while
 if (LetraDiferente == 1) //se tiver encontrado uma letra diferente
 {
     printf("false");
     printf("\nisPalindrome::END\n");
     return false;
     
 } //end if
    
 printf("true");
 printf("\nisPalindrome::END\n");
 return true;
    
} // end isPalindrome

int main()
{
 printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");
    
 // true cases
 isPalindrome("ovo", 3);
 isPalindrome("arara", 5);

 // false cases
 isPalindrome("cesar", 5);
 isPalindrome("school", 6);

 return 0;
}
