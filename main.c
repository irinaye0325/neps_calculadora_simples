#include <stdio.h>
char c,q;
float a,b;
int main()
{
    int s=1;
    printf("===============================\n");
    printf("   Calculadora Simples\n");
    printf("===============================\n");
    printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\n");
    printf("Opção: ");
    while(s){
        scanf("%c",&c);
        if(c>'5'||c<'1'){
            printf("Erro: Opção invalida\nOpção: ");
            printf("%c",&c);
            continue;
        }
        if(c=='5'){
            s=0;
            break;
        }
        printf("Digite o primeiro número: ");
        scanf("%f",&a);
        printf("Digite o segundo número: ");
        scanf("%f",&b);
        if(c=='1'){
            printf("Resultado: %f + %f = %f\n",a,b,a+b);
            printf("Deseja realizar outra operação? (s/n):");
            scanf("%c",&q);
            scanf("%c",&q);
            while(q!='n'&&q!='N'&&q!='s'&&q!='S'){
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                printf("Deseja realizar outra operação? (s/n): ");
                scanf("%c",&q);
            }
            if(q=='n'||q=='N')s=0;
            else{
                printf("===============================\n");
                printf("   Calculadora Simples\n");
                printf("===============================\n");
                printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\n");
                printf("Opção: ");
                continue;
            }
        }
        if(c=='2'){
            printf("Resultado: %f - %f = %f\n",a,b,a-b);
            printf("Deseja realizar outra operação? (s/n):");
            scanf("%c",&q);
            scanf("%c",&q);
            while(q!='n'&&q!='N'&&q!='s'&&q!='S'){
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                printf("Deseja realizar outra operação? (s/n):");
                scanf("%c",&q);
            }
            if(q=='n'||q=='N')s=0;
            else{
                printf("===============================\n");
                printf("   Calculadora Simples\n");
                printf("===============================\n");
                printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\n");
                printf("Opção: ");
                continue;
            }
        }
        else if(c=='3'){
            printf("Resultado: %f * %f = %f\n",a,b,a*b);
            printf("Deseja realizar outra operação? (s/n):\n");
            scanf("%c",&q);
            scanf("%c",&q);
            while(q!='n'&&q!='N'&&q!='s'&&q!='S'){
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                printf("Deseja realizar outra operação? (s/n):");
                scanf("%c",&q);
            }
            if(q=='n'||q=='N')s=0;
            else{
                printf("===============================\n");
                printf("   Calculadora Simples\n");
                printf("===============================\n");
                printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\n");
                printf("Opção: ");
                continue;
            }
        }
        else if(c=='4'){
            if(b==0){
                printf("Erro: Divisão por zero não eh permitida.\n");
                char t;
                while(t!='n'&&t!='N'&&t!='s'&&t!='S'){
                    printf("Deseja realizar outra operação? (s/n):");
                    scanf("%c",&t);
                    scanf("%c",&t);
                    if(t!='n'&&t!='N'&&t!='s'&&t!='S'){
                        printf("\nResposta inválida. Por favor, digite 's' para sim ou 'n' para não.");
                        printf("\nDeseja realizar outra operação? (s/n):");
                        scanf("%c",&t);
                    }
                }
                if(t=='n'||t=='N')s=0;
                else{
                    printf("===============================\n");
                    printf("   Calculadora Simples\n");
                    printf("===============================\n");
                    printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\n");
                    printf("Opção: ");
                    continue;
                }
            }
            else{
                printf("Resultado: %f / %f = %f\n",a,b,a/b);
                printf("\nDeseja realizar outra operação? (s/n):");
                scanf("%c",&q);
                scanf("%c",&q);
                while(q!='n'&&q!='N'&&q!='s'&&q!='S'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                    printf("Deseja realizar outra operação? (s/n):");
                    scanf("%c",&q);
                    
                }
                if(q=='n'||q=='N')s=0;
                else{
                    printf("===============================\n");
                    printf("   Calculadora Simples\n");
                    printf("===============================\n");
                    printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\n");
                    printf("Opção: ");
                    continue;
                }
            }
        }
    }
    printf("Obrigado por usar a calculadora! Até a próxima.");
    return 0;
}