/* |4.3|
 * Explique por que motivo a expressão x = x * 2 + y não pode ser escrita como
 * x *= 2 + y.
 *
 * R: Porque a ordem de associatividade dos operadores de atribuição é da 
 * direita para a esquerda e a dos operadores aritméticos a ordem inversa:
 *
 *      x = x * 2 + y
 *      x *= 2 + y -> (x *= 2) + y -> (x * x * 2) + y
 *    
 *    Poderiamos corrigir a expressão usando parênteses para indicar precedência:
 *    (x *= 2) + y
 */
