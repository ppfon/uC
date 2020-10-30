/* |5.1|
 * Codifique uma sub-rotina que considere o rodízio de veículos pela cidade,
 * cujo critério é o final da placa. A sub-rotina recebe o número da placa e
 * exibe os dias da semana que o veículo pode circular na cidade: seg/qua/sex:
 * final par, ter/qui/sab: final ímpar, dom: todos.
 */

void 
dia_circulação(int placa) 
{
        if ((placa % 10) % 2)
                puts("Terça, quinta, sábado e domingo.");
        else
                puts("Segunda, quarta, sexta e domingo.");
}
