#include <stdio.h>
#include <ctype.h> //biblioteca do fflush

int main()
{

    int idade, velhopracaralho = 0;
    double altura, peso, mediaaltura = 0, maiorpeso, quantaltura = 0;
    char sair;
    // QUESTÃO 05: Uma pesquisa foi feita
    // coletando informações (idade, altura e
    // peso) de um grupo de pessoas.
    // Pede-se a implementação de um programa
    // que proceda com a leitura de tais
    // informações (até que o usuário opte por
    // concluir a entrada de dados) e calcule:
    //  A quantidade de pessoas com idade superior
    // a 50 anos;
    //  A média de altura das pessoas com mais de
    // 80 kg;
    //  O maior peso dentre as pessoas acima de
    // 1.65 m de altura e com idade inferior a 30
    // anos.

    while (sair != 'N')
    {
        printf("insira a idade: "); //inserindo idade, altura e peso
        scanf("%d", &idade);

        printf("insira a altura: ");
        scanf("%lf", &altura);

        printf("insira o peso: ");
        scanf("%lf", &peso);

        if (idade > 50)
        {
            velhopracaralho += 1; //se a idade for maior que 50, adiciona 1 no contador de idoso
        }
        if (peso > 80.0)
        {
            mediaaltura += altura; //soma a altura na propria variavel da media e soma 1 no contador pra fazer a media mais tarde
            quantaltura += 1;
        }
        if ((altura > 1.65) && (idade < 30))
        {
            maiorpeso = peso; //pega o maior peso das pessoas acima de 1,65m e menos de 30 anos
        }

        fflush(stdin); //limpa a entrada pra inserir um char em seguida, senao da merda
        printf("deseja continuar? [S/N]");
        scanf("%s", &sair);
        sair = toupper(sair); //transforma a resposta(s ou n) em maiusculo pro usuario burro poder botar minusculo ou maiusculo
    }

    mediaaltura = (mediaaltura / quantaltura);

    printf("quantidade de pessoas acima de 50 anos: %d\n", velhopracaralho);
    printf("media da altura das pessoas com mais de 80kg: %.2lf\n", mediaaltura); //exibe tudo que o exercicio pede
    printf("O maior peso dentre as pessoas acima de 1.65m de altura e com idade inferior a 30 anos: %.2lfkg\n", maiorpeso);
}