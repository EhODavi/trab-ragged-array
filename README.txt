Eu li as regras ✓

[Nome/Matrícula] ✓

Davi de Paula Oliveira/ES98896

[Resultados dos experimentos] ✓

Utilizei um computador com processador Intel Core i5-7200U com 8.00 GB de RAM utilizando Windows 10 64 bits. Podemos separar os testes em cinco tipos:

I: Criar matriz;
II: Inicializar matriz;
III: Somar matriz;
IV: Dobrar o número de colunas na primeira linha;
V: Deletar matriz;

Com base nos testes feitos, o tempo para todos os itens (I,II,III,IV,V) para matrizes pequenas é muito parecido. Isso porque os computadores são muito rápidos e a precisão de tempo é de apenas seis casas decimais. Agora vamos comparar os itens quando as matrizes são maiores:

I: Em geral, é mais rápido criar uma matriz ragged pois é feito uma alocação dinâmica de um único array grande. Enquanto que no formato tradicional, é feito várias alocações de arrays menores.
II: Em geral, não há muita diferença na inicialização das matrizes pois o set é O(1) tanto para ragged, quanto para tradicional.
III: Em geral, não há muita diferença na soma das matrizes pois o get é O(1) tanto para ragged, quanto para tradicional.
IV: Em geral, dobrar o número de colunas na primeira linha é menos eficiente no formato ragged pois será necessário redimencionar toda a matriz. Enquanto que no formato tradicional, basta redimencionar uma linha.
V: Em geral, é mais rápido deletar uma matriz no formato ragged pois é apenas um array. Enquanto que no formato tradicional é necessário deletar todas as linhas primeiro e depois deletar o array.

Os tempos obtidos nos casos de testes então no final do arquivo na seção [MAIS DETALHES].

[Informações sobre todas as fontes de consulta utilizadas no trabalho] ✓

Consultei materiais de Programação II e de Estrutura de Dados. Além disso, tirei dúvidas com o professor.

[MAIS DETALHES] ✓
10 10

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 55

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 55

10 100

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 636

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 636

10 1000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 4323

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 4323

10 5000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 23466

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 23466

10 10000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.001036
Tempo para somar matriz      : 0.001028
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 58485

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000997
Tempo para somar matriz      : 0.000998
Tempo para dobrar o numero de colunas na primeira linha      : 0.000996
Tempo para deletar matriz    : 0.000000
Soma: 58485

10 20000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000997
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 98493

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.003008
Tempo para somar matriz      : 0.000999
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 98493

10 40000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.001996
Tempo para somar matriz      : 0.001997
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 178497

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.002992
Tempo para somar matriz      : 0.000999
Tempo para dobrar o numero de colunas na primeira linha      : 0.001994
Tempo para deletar matriz    : 0.000000
Soma: 178497

100 10

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 531

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 531

100 100

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 5348

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 5348

100 1000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000997
Tempo para somar matriz      : 0.000998
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 53782

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000998
Tempo para somar matriz      : 0.000998
Tempo para dobrar o numero de colunas na primeira linha      : 0.000997
Tempo para deletar matriz    : 0.000000
Soma: 53782

100 5000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.004022
Tempo para somar matriz      : 0.002025
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 251074

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.002993
Tempo para somar matriz      : 0.001994
Tempo para dobrar o numero de colunas na primeira linha      : 0.003990
Tempo para deletar matriz    : 0.000998
Soma: 251074

100 10000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.005023
Tempo para somar matriz      : 0.003990
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000991
Soma: 501236

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.010969
Tempo para somar matriz      : 0.003988
Tempo para dobrar o numero de colunas na primeira linha      : 0.002982
Tempo para deletar matriz    : 0.000000
Soma: 501236

100 20000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000965
Tempo para inicializar matriz: 0.009973
Tempo para somar matriz      : 0.010971
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 921313

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.009975
Tempo para somar matriz      : 0.007979
Tempo para dobrar o numero de colunas na primeira linha      : 0.004986
Tempo para deletar matriz    : 0.000000
Soma: 921313

100 40000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000996
Tempo para inicializar matriz: 0.015960
Tempo para somar matriz      : 0.016955
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000988
Soma: 1621348

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.015956
Tempo para somar matriz      : 0.013993
Tempo para dobrar o numero de colunas na primeira linha      : 0.009979
Tempo para deletar matriz    : 0.000997
Soma: 1621348

1000 10

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000996
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 5175

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 5175

1000 100

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000998
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000996
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 47982

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000996
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 47982

1000 1000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.001994
Tempo para inicializar matriz: 0.003987
Tempo para somar matriz      : 0.002991
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.002011
Soma: 498272

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.003987
Tempo para somar matriz      : 0.003990
Tempo para dobrar o numero de colunas na primeira linha      : 0.004987
Tempo para deletar matriz    : 0.001002
Soma: 498272

1000 5000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.004987
Tempo para inicializar matriz: 0.026928
Tempo para somar matriz      : 0.020943
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.002996
Soma: 2449366

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.026927
Tempo para somar matriz      : 0.019976
Tempo para dobrar o numero de colunas na primeira linha      : 0.014960
Tempo para deletar matriz    : 0.000997
Soma: 2449366

1000 10000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.003988
Tempo para inicializar matriz: 0.057848
Tempo para somar matriz      : 0.038900
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.003025
Soma: 4645980

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.044880
Tempo para somar matriz      : 0.037898
Tempo para dobrar o numero de colunas na primeira linha      : 0.027926
Tempo para deletar matriz    : 0.002028
Soma: 4645980

1000 20000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.004020
Tempo para inicializar matriz: 0.100731
Tempo para somar matriz      : 0.075796
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.006981
Soma: 8276749

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.075796
Tempo para somar matriz      : 0.068007
Tempo para dobrar o numero de colunas na primeira linha      : 0.050863
Tempo para deletar matriz    : 0.003020
Soma: 8276749

1000 40000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.005997
Tempo para inicializar matriz: 0.172569
Tempo para somar matriz      : 0.130650
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.008975
Soma: 16397155

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000996
Tempo para inicializar matriz: 0.139147
Tempo para somar matriz      : 0.132645
Tempo para dobrar o numero de colunas na primeira linha      : 0.092752
Tempo para deletar matriz    : 0.006982
Soma: 16397155

5000 10

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.000996
Tempo para inicializar matriz: 0.000998
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 25395

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000998
Tempo para somar matriz      : 0.000998
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 25395

5000 100

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.001995
Tempo para inicializar matriz: 0.002026
Tempo para somar matriz      : 0.002994
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000997
Soma: 248581

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.001995
Tempo para somar matriz      : 0.004987
Tempo para dobrar o numero de colunas na primeira linha      : 0.003980
Tempo para deletar matriz    : 0.000999
Soma: 248581

5000 1000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.009978
Tempo para inicializar matriz: 0.025934
Tempo para somar matriz      : 0.019946
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.002993
Soma: 2488394

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.022942
Tempo para somar matriz      : 0.019976
Tempo para dobrar o numero de colunas na primeira linha      : 0.013965
Tempo para deletar matriz    : 0.000000
Soma: 2488394

5000 5000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.019919
Tempo para inicializar matriz: 0.111738
Tempo para somar matriz      : 0.090756
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.007981
Soma: 12065329

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.104720
Tempo para somar matriz      : 0.092751
Tempo para dobrar o numero de colunas na primeira linha      : 0.077825
Tempo para deletar matriz    : 0.005982
Soma: 12065329

5000 10000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.040890
Tempo para inicializar matriz: 0.239359
Tempo para somar matriz      : 0.189490
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.060837
Soma: 23523527

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.211465
Tempo para somar matriz      : 0.181066
Tempo para dobrar o numero de colunas na primeira linha      : 0.134672
Tempo para deletar matriz    : 0.007976
Soma: 23523527

5000 20000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.026932
Tempo para inicializar matriz: 0.403427
Tempo para somar matriz      : 0.320270
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.015957
Soma: 42827446

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.351095
Tempo para somar matriz      : 0.325106
Tempo para dobrar o numero de colunas na primeira linha      : 0.238364
Tempo para deletar matriz    : 0.014959
Soma: 42827446

5000 40000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.026928
Tempo para inicializar matriz: 0.783571
Tempo para somar matriz      : 0.603804
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.031914
Soma: 82609435

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000999
Tempo para inicializar matriz: 0.695722
Tempo para somar matriz      : 0.617208
Tempo para dobrar o numero de colunas na primeira linha      : 0.455282
Tempo para deletar matriz    : 0.029920
Soma: 82609435

10000 10

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.001029
Tempo para inicializar matriz: 0.000000
Tempo para somar matriz      : 0.000000
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.001014
Soma: 50246

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.001004
Tempo para inicializar matriz: 0.000997
Tempo para somar matriz      : 0.000964
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.000000
Soma: 50246

10000 100

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.004988
Tempo para inicializar matriz: 0.004017
Tempo para somar matriz      : 0.003993
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.003990
Soma: 501652

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000979
Tempo para inicializar matriz: 0.004025
Tempo para somar matriz      : 0.003988
Tempo para dobrar o numero de colunas na primeira linha      : 0.003993
Tempo para deletar matriz    : 0.001004
Soma: 501652

10000 1000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.021943
Tempo para inicializar matriz: 0.040913
Tempo para somar matriz      : 0.038931
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.005987
Soma: 4972856

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.044909
Tempo para somar matriz      : 0.038927
Tempo para dobrar o numero de colunas na primeira linha      : 0.031882
Tempo para deletar matriz    : 0.002028
Soma: 4972856

10000 5000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.043882
Tempo para inicializar matriz: 0.209441
Tempo para somar matriz      : 0.178550
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.010967
Soma: 23872564

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.001005
Tempo para inicializar matriz: 0.195483
Tempo para somar matriz      : 0.184509
Tempo para dobrar o numero de colunas na primeira linha      : 0.134357
Tempo para deletar matriz    : 0.008005
Soma: 23872564

10000 10000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.052889
Tempo para inicializar matriz: 0.426441
Tempo para somar matriz      : 0.344866
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.018949
Soma: 46653958

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000997
Tempo para inicializar matriz: 0.387992
Tempo para somar matriz      : 0.354218
Tempo para dobrar o numero de colunas na primeira linha      : 0.261301
Tempo para deletar matriz    : 0.017952
Soma: 46653958

10000 20000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.055883
Tempo para inicializar matriz: 0.798167
Tempo para somar matriz      : 0.634346
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.032911
Soma: 85591825

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000999
Tempo para inicializar matriz: 0.710834
Tempo para somar matriz      : 0.647030
Tempo para dobrar o numero de colunas na primeira linha      : 0.460770
Tempo para deletar matriz    : 0.031196
Soma: 85591825

20000 10

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.001029
Tempo para inicializar matriz: 0.001024
Tempo para somar matriz      : 0.001997
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.003003
Soma: 99905

Experimentos com matriz no formato ragged: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.000998
Tempo para somar matriz      : 0.001028
Tempo para dobrar o numero de colunas na primeira linha      : 0.002026
Tempo para deletar matriz    : 0.000000
Soma: 99905

20000 100

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.003994
Tempo para inicializar matriz: 0.008979
Tempo para somar matriz      : 0.018948
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.004986
Soma: 1000831

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.013965
Tempo para somar matriz      : 0.015955
Tempo para dobrar o numero de colunas na primeira linha      : 0.010978
Tempo para deletar matriz    : 0.000000
Soma: 1000831

20000 1000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.043882
Tempo para inicializar matriz: 0.080444
Tempo para somar matriz      : 0.077835
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.012000
Soma: 9981425

Experimentos com matriz no formato ragged: 
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.084813
Tempo para somar matriz      : 0.079266
Tempo para dobrar o numero de colunas na primeira linha      : 0.054857
Tempo para deletar matriz    : 0.003992
Soma: 9981425

20000 5000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.081782
Tempo para inicializar matriz: 0.418937
Tempo para somar matriz      : 0.353644
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.023928
Soma: 47987928

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.402942
Tempo para somar matriz      : 0.375029
Tempo para dobrar o numero de colunas na primeira linha      : 0.262871
Tempo para deletar matriz    : 0.015957
Soma: 47987928

20000 10000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.113698
Tempo para inicializar matriz: 0.883036
Tempo para somar matriz      : 0.693148
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.038929
Soma: 93470693

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.763670
Tempo para somar matriz      : 0.710494
Tempo para dobrar o numero de colunas na primeira linha      : 0.495674
Tempo para deletar matriz    : 0.032914
Soma: 93470693

40000 10

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.005985
Tempo para inicializar matriz: 0.003028
Tempo para somar matriz      : 0.001997
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.001995
Soma: 199514

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.002992
Tempo para somar matriz      : 0.001995
Tempo para dobrar o numero de colunas na primeira linha      : 0.003975
Tempo para deletar matriz    : 0.000000
Soma: 199514

40000 100

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.011009
Tempo para inicializar matriz: 0.019945
Tempo para somar matriz      : 0.017954
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.005017
Soma: 2000445

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.017952
Tempo para somar matriz      : 0.016957
Tempo para dobrar o numero de colunas na primeira linha      : 0.013965
Tempo para deletar matriz    : 0.000000
Soma: 2000445

40000 1000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.062373
Tempo para inicializar matriz: 0.157191
Tempo para somar matriz      : 0.156613
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.020943
Soma: 19935450

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.167798
Tempo para somar matriz      : 0.153136
Tempo para dobrar o numero de colunas na primeira linha      : 0.114693
Tempo para deletar matriz    : 0.006983
Soma: 19935450

40000 5000

Experimentos com matriz tradicional: 
Tempo para criar matriz      : 0.163562
Tempo para inicializar matriz: 0.976901
Tempo para somar matriz      : 0.710784
Tempo para dobrar o numero de colunas na primeira linha      : 0.000000
Tempo para deletar matriz    : 0.057843
Soma: 96055452

Experimentos com matriz no formato ragged:
Tempo para criar matriz      : 0.000000
Tempo para inicializar matriz: 0.794949
Tempo para somar matriz      : 0.738543
Tempo para dobrar o numero de colunas na primeira linha      : 0.500982
Tempo para deletar matriz    : 0.032913
Soma: 96055452