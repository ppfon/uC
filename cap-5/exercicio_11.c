/* |5.4|
 * Para cada um dos itens a seguir, defina uma função recursiva, faça a 
 * simulação por substituição e teste a função para algum valor que resulte
 * em poucas substituições:
 * a) Calcular o fatorial de um número natural.
 * b) Calcular o resto da divisão inteira usando subtrações sucessivas.
 * c) Calcular a divisão inteira de dois números naturais usando subtrações sucessivas.
 * d) Calcular o produto dois números naturais usando adições sucessivas.
 *
 * R:       / x*(x-1)!
 * a) x! = |                
 *          \ se x < 2: x 

 *
 *    x = 4 -> 4! = 4*(4-1)!
 *             4! = 4*(3)! 
 *             4! = 4*(3*(3-1)!)
 *             4! = 4*(3*(2*(2-1)!))
 *             4! = 4*(3*(2*(1)))
 * 
 *             / x 
 * b) x % y = |
 *             \ se x >= y: x = x-y; x % y
 *
 *    10 % 3 -> 10 % 3 = (10-3) % 3
 *              10 % 3 = 7 % 3 
 *              10 % 3 = (7-3) % 3
 *              10 % 3 = 4 % 3
 *              10 % 3 = (4-3) % 3 
 *              10 % 3 = 1 % 3 -> 1 < 3 -> 10 % 3 = 1
 *
 *             / i
 * c) x / y = | 
 *             \ se x >= y: x = x-y; x / y; i = i + 1
 *
 *   5 / 2 = (5-2) / 2; i = 0 + 1 = 1 
 *   5 / 2 = (3-2) / 2; i = 1 + 1 = 2
 *   5 / 2 = (1-2) / 2 -> 1 < 2 -> 5/2 = i = 2
 *
 *             / x
 * d) x * y = |
 *             \ se y != 1: x = x+x; y = y-1
 *
 *             3 * 3 = (3+3) * (3-1)
 *             3 * 3 = (6+3) * (2-1) 
 *             3 * 3 = (9) * (1-1) -> y = 1 -> 3 * 3 = x = 9
 */
