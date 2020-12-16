# Projeto de Microcervejaria com PIC18F4520 Usando MPLABX e PICSimLab


[![](http://img.youtube.com/vi/Lg4Qt_y-fSY/0.jpg)](http://www.youtube.com/watch?v=Lg4Qt_y-fSY "Microcervejaria - Projeto Final de Programação Embarcada")

## Descrição 
O presente projeto consiste no sistema de controle de uma microcervejaria, responsável pela realização automatizada do processo de brassagem na produção de cervejas. Nele, é simulada sua utilização através do software PICSimLab, mais específicamente na placa PICGenios, onde são utilizados os seguintes periféricos :

- Display de 7 Segmentos : Utilizado para informar ao usuário a temperatura atual do líquido;
- Teclado Matricial : Utilizado pelo usuário para navegar na tela incial, escolher a receita que será feita e informar o controlador que certas ações foram finalizadas, como a inserção de lúpulo; 
- Display de LCD 16x4 : Mostrará todas as informações relevantes ao usuário, do início ao fim do processo;
- Cooler : Representará a bomba de água da microcervejaria, esta que será ligada para circular a mistura durante os degraus da prá-fervura; 
- Buzzer : Avisará o usuário quando uma etapa for concluída, além de avisar o fim da receita também;  

## Passo 01 - Adicionar Bibliotecas Necessárias 
Incialmente foram adicionadas todas as bibliotecas necessárias para o funcionamento correto do microcontrolador com os periféricos citados anteriormente, principalmente dentro das funções `amber_lager()` e `k_weissbier()`, responsáveis por todo o processo da brassagem em cada tipo de cerveja. Estas utilizaram as seguintes bibliotecas :

![cervejas](Bibliotecas_Cervejas.PNG)

Já no caso da `main()`, o uso das bibliotecas ficou ligeiramente reduzido, isso porque ela apenas é responsável por realizar a interação inicial com o usuário para realizar a chamada das funções das cervejas posteriormente. Esta utilizou as seguintes bibliotecas : 

![main](Bibliotecas_Main.PNG)

### Alguns Problemas de Compatibilidade
Nesta etapa do desenvolvimento, notou-se que algumas das bibliotecas utilizadas, se colocadas em conjunto com as originais do desenvolvedor do software do PICSimLab, entravam em conflito e o funcionamento da simulação se tornava instável. Assim, todas as bibliotecas originais foram retiradas e todo o projeto foi feito utilizando apenas as fornecidas durante a matéria de ECOP04, desenvolvidas pelo professor Rodrigo Maximiano de Almeida. 

## Passo 02 - Desenvolver as Funções das Receitas e Funções Auxiliares
`Lorem_Ipsum`

![kweiss](k_weissbier.PNG)

`Lorem_Ipsum`

![defines](Defines.PNG)

`Lorem_Ipsum`

![vglobais](Variaveis_Globais.PNG)

`Lorem_Ipsum`

![vteclado](Void_Teclado.PNG)

`Lorem_Ipsum`

![receitash](receitash.PNG)

`Lorem_Ipsum`

## Passo 03 - Desenvolver a main 
`Lorem_Ipsum`

![vescolha](Void_escolha.PNG)

## Passo 04 - Simular pelo PICSimLab
`Lorem_Ipsum`

![receitas](Receitas.PNG)

`Lorem_Ipsum`

![escolha](Escolha.PNG)

`Lorem_Ipsum`

![imaltes](Insira_Maltes.PNG)

`Lorem_Ipsum`

![degTempo](Degrau_Tempo.PNG)

`Lorem_Ipsum`

![fim](Fim.PNG)

