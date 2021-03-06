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
As funções desenvolvidas para as receitas disponibilizadas nesta versão do projeto seguem a mesma arquitetura de cooperative multitasking, buscando otimizar o tempo e tornar o processo de programação mais dinâmico. Além disso, assemelham-se em seu funcionamento, já que todas devem ter degraus de temperatura, tempos em cada degrau, pausas para inserção de insumos, etapa de fervura e tela final, com alterações apenas nos valores / quantidade de parâmetros. 

![kweiss](k_weissbier.PNG)

Foi utilizado em abundância nas duas receitas a ferramenta de `define`, de forma a permitir alterações simplificas e a reutilização de código entre cervejas, alterando apenas os valores / quantidades das etapas. Neste caso (Kristall Weissbier) são 6 degraus, contando com o de fervura.

![defines](Defines.PNG)

Também foram utilizadas variáveis globais no projeto, a fim de permitir que funções como a `Teclado()` possam ter mais liberdade dentro do programa. Essas variáveis são comuns aos códigos das duas receitas e são cruciais para que tudo funcione conforme planejado, elas são : 
- valor : incia com o de `degrau0` e vai sendo alterado conforme as etapas se passam, representa o valor "meta" que a temperatura irá atingir ; 
- temp : inicia como zero e vai sendo incrementado durante as etapas até atingir a variável `valor` ;
- i : inicia em 1 e é utilizado como flag para que o programa possa percorrer as etapas e saber em qual está ;
- time : inicia em 0 e é utilizado para contagem e controle de tempo, no caso deste projeto o tempo é exibido como minutos porém a contagem em `time` que é utilizada é em uma janela de tempo bem inferior, aproximando-se dos segundos ;

![vglobais](Variaveis_Globais.PNG)

Também foi desenvolvida, para permitir que o usuário informe quando alguma ação e o programa deve prosseguir, a função `Teclado()`, que realizará ações diferentes dependendo da etapa da brassagem.  

![vteclado](Void_Teclado.PNG)

Por fim, depois de desenvolvidas as funções `amber_lager()` e `k_weissbier()` partindo da mesma base citada anteriormente, é criado o arquivo `receitas.h` para agrupar todas as funções em um cabeçalho e posteriormente utilizá-las na função `main()`. 

![receitash](receitash.PNG)

## Passo 03 - Desenvolver a main()
A `main` foi desenvolvida utilizando como base o próprio funcionamento em cooperative multitasking das funções `amber_lager()` e `k_weissbier()`, no entanto, diferentemente de realizar ações envolvendo o buzzer, o cooler ou o display de 7 segmentos, utiliza apenas o teclado matricial e o display de LCD. A função `escolha()` permite que seja possível verificar a afirmação anterior, sendo ela uma simplificação da função `Teclado()` para apenas alterar telas do display e chamar as funções das receitas escolhidas.

![vescolha](Void_escolha.PNG)

## Passo 04 - Simular pelo PICSimLab
Por fim, é realizada a simulação de todo o funcionamento da microcervejaria, verificando a utilização da `main()` inicialmente e das funções `amber_lager()` ou `k_weissbier()`, dependendo da escolha do usuário. 

Incialmente são exibidas as receitas

![receitas](Receitas.PNG)

Então é possível navegar entre a tela de receitas e de escolha, nas quais é possível pressionar as teclas `1` (Amber Lager), `2` (Kristall Weissbier), `*`(Voltar) e `#`(Prosseguir)

![escolha](Escolha.PNG)

Posteriormente a receita é iniciada, os detalhes desta são exibidos e a temperatura começa a subir até o `degrau0` daquela cerveja, então o controlador aguardará a inserção dos maltes

![imaltes](Insira_Maltes.PNG)

O processo retorna e percorrerá o restante dos degraus, com avisos sonoros em cada etapa e decrescendo o tempo em minutos até chegar à fervura, a qual funcionará exatamente da mesma forma, no entanto ao invés de aguardar a inserção de malte, aguardará a inserção de lúpulo.

![degTempo](Degrau_Tempo.PNG)

Por fim, um outro aviso sonoro será disparado para avisar ao usuário o final da receita, juntamente com o aviso na tela de LCD, nesta etapa a temperatura retorna às suas condições normais

![fim](Fim.PNG)

