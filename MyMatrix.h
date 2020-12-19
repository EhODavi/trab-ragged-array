#ifndef MYMATRIX_H
#define MYMATRIX_H

#include <iostream>

using namespace std;

template<class T>
class MyMatrix {
public:
    MyMatrix(int nRows, const int* cols, bool isRagged); // Construtor ✓
    ~MyMatrix(); // Destrutor ✓
    MyMatrix(const MyMatrix<T> &other); // Construtor de cópia ✓
    MyMatrix<T> & operator=(const MyMatrix<T> &other); // Operador de atribuição ✓
    const T & get(int row, int col) const; // Retorna o valor de um elemento da matriz ✓
    void set(int row, int col, const T& elem); // Atribui um valor para um elemento da matriz ✓
    int getNumRows() const; // Retorna a quantidade de linhas da matriz ✓
    int getNumElems() const; // Retorna a quantidade de elementos da matriz ✓
    int getNumCols(int row) const; // Retorna a quantidade de colunas de uma linha ✓
    void resizeRow(int row, int newCol); // Altera a quantidade de colunas de uma linha ✓
    void resizeNumRows(int newRows); // Altera a quantidade de linhas da matriz ✓
    bool isRagged() const; // Verifica se a matriz está no formato ragged ou tradicional ✓
    void convertToRagged(); // Converte a matriz para o formato ragged ✓
    void convertToTraditional(); // Converte a matriz para o formato tradicional ✓
    void print() const; // Imprime a matriz ✓
protected:
    int rows; // Quantidade de linhas da matriz ✓
    int size; // Quantidade de elementos da matriz ✓
    int* tam; // Quantidade de colunas de cada linha ✓
    T** matriz; // Matriz no formato tradicional ✓
    int* start; // Posição na qual o primeiro elemento de cada linha está localizado ✓
    T* ragged; // Matriz no formato ragged ✓
};

// Complexidade do modo tradicional: O(R + R * C) -- Precisamos calcular o size percorrendo as R linhas de cols. Após isso, precisamos alocar as R linhas de tam e da matriz. Depois, precisamos preencher as R linhas de tam e alocar C elementos em cada linha da matriz ✓
// Complexidade do modo ragged: O(R + T) -- Precisamos calcular o size percorrendo as R linhas de cols. Após isso, precisamos alocar as R + 1 linhas de start e os T elementos de ragged. Depois, precisamos preencher as R + 1 linhas de start ✓
template<class T>  
MyMatrix<T>::MyMatrix(int nRows, const int* cols, bool isRagged) {
    rows = nRows; // Inicializando rows
    size = 0; // Inicializando size

    // Calculando a quantidade de elementos da matriz
    for(int i = 0; i < rows; i++) {
        size += cols[i];
    }
    
    if(isRagged) { // Verificando o formato da matriz
        // Atribuindo NULL para tam e matriz
        tam = NULL;
        matriz = NULL;

        // Alocando start e ragged
        start = new int[rows + 1];
        ragged = new T[size];

        // Preenchendo o vetor start
        start[0] = 0;
        for(int i = 1; i < rows + 1; i++) {
            start[i] = start[i - 1] + cols[i - 1];
        }  

    } else {
        // Atribuindo NULL para start e ragged
        start = NULL;
        ragged = NULL;

        // Alocando tam e matriz
        tam = new int[rows];
        matriz = new T*[rows];
        
        // Preenchendo o vetor tam e alocando cada linha da matriz
        for(int i = 0; i < rows; i++) {
            tam[i] = cols[i];
            matriz[i] = new T[tam[i]]; 
        }    
    }
} 

// Complexidade do modo tradicional: O(R * C + R) -- Precisamos desalocar todas as R linhas da matriz com C colunas. Após isso, precisamos desalocar as R linhas de tam e desalocar as R linhas da matriz ✓
// Complexidade do modo ragged: O(R + T) -- Precisamos desalocar as R + 1 linhas de start e depois desalocar os T elementos de ragged ✓
template<class T> 
MyMatrix<T>::~MyMatrix() {
    if(isRagged()) { // Verificando o formato da matriz
        // Desalocando start e ragged
        delete []start;
        delete []ragged;
    } else {
        // Desalocando tam e matriz
        for(int i = 0; i < rows; i++) delete []matriz[i];
        delete []tam;
        delete []matriz;
    }
}

// Complexidade do modo tradicional: O(R * C + R) -- precisamos alocar o tam com R linhas e a matriz com R linhas. Depois precisamos preencher as R linhas de tam e, em cada linha da matriz, alocar C elementos e preenche-los ✓
// Complexidade do modo ragged: O(R + T) -- precisamos alocar o start com R + 1 linhas e o ragged com T elementos. Depois precisamos preencher as R + 1 linhas de start e os T elementos de ragged ✓
template<class T> 
MyMatrix<T>::MyMatrix(const MyMatrix<T> &other) {
    // Atribuindo 0 para rows e size
    rows = size = 0;  
    
    // Atribuindo NULL para tam, matriz, start e ragged
    tam = NULL;
    matriz = NULL;
    start = NULL;
    ragged = NULL;
    
    // Reaproveitando código com o operador de atribuição
    *this = other;
}

// Complexidade do modo tradicional: O(1) | O(R * C + R + T) | O(R * C + R) -- Se o other for igual ao this, não é feito nada. Se o other estiver no formato ragged, precisamos desalocar as R linhas da matriz com C colunas, desalocar o tam com R linhas e desalocar a matriz com R linhas. Após isso, precisamos alocar o start com R + 1 linhas e o ragged com T elementos. Depois precisamos preencher as R + 1 linhas de start e os T elementos de ragged. Se o other estiver no formato tradicional, precisamos desalocar as R linhas da matriz com C colunas, desalocar o tam com R linhas e desalocar a matriz com R linhas. Após isso, precisamos alocar o tam com R linhas e a matriz com R linhas. Depois precisamos preencher as R linhas de tam e, em cada linha da matriz, alocar C elementos e preenche-los ✓
// Complexidade do modo ragged: O(1) | O(R + T) | O(R + T + R * C) -- Se o other for igual ao this, não é feito nada. Se o other estiver no formato ragged, precisamos desalocar as R + 1 linhas do start e desalocar os T elementos do ragged. Após isso, precisamos alocar o start com R + 1 linhas e o ragged com T elementos. Depois precisamos preencher as R + 1 linhas de start e os T elementos de ragged. Se o other estiver no formato tradicional, precisamos desalocar as R + 1 linhas do start e desalocar os T elementos do ragged. Após isso, precisamos alocar o tam com R linhas e a matriz com R linhas. Depois precisamos preencher as R linhas de tam e, em cada linha da matriz, alocar C elementos e preenche-los ✓
template<class T> 
MyMatrix<T> & MyMatrix<T>::operator=(const MyMatrix<T> &other) {
    if(this == &other) return *this; // Verificando auto-atribuição

    if(isRagged()) { // Verificando o formato da matriz
        // Desalocando start e ragged
        delete []start;
        delete []ragged;
    } else {
        // Desalocando tam e matriz
        for(int i = 0; i < rows; i++) delete []matriz[i];
        delete []tam;
        delete []matriz;
    }

    // Atribuindo o valor de rows e size do other para o this
    rows = other.rows; 
    size = other.size;

    if(other.isRagged()) { // Verificando o formato da matriz do other
        // Atribuindo NULL para tam e matriz
        tam = NULL;
        matriz = NULL;
        
        // Alocando start e ragged
        start = new int[rows + 1];
        ragged = new T[size];

        // Preenchendo start e ragged
	    for(int i = 0; i < rows + 1; i++) start[i] = other.start[i];
        for(int i = 0; i < size; i++) ragged[i] = other.ragged[i];
    } else {
        // Atribuindo NULL para start e ragged
        start = NULL;
        ragged = NULL;
        
        // Alocando tam e matriz
        tam = new int[rows];
        matriz = new T*[rows];
        
        // Preenchendo tam e matriz
        for(int i = 0; i < rows; i++) {
            tam[i] = other.tam[i];
            matriz[i] = new T[tam[i]];

            for(int j = 0; j < tam[i]; j++) {
                matriz[i][j] = other.matriz[i][j];
            }
        } 
    }
	
    return *this; // Retornado o *this
}

// Complexidade do modo tradicional: O(1) -- Precisamos apenas retornar o valor da matriz na linha row e coluna col ✓
// Complexidade do modo ragged: O(1) -- Precisamos apenas retornar o valor do ragged na posição start[row] + col ✓
template<class T> 
const T & MyMatrix<T>::get(int row, int col) const {
    if(isRagged()) return ragged[start[row] + col]; // Se a matriz estiver no formato ragged, retornamos ragged[start[row] + col]

    return matriz[row][col]; // Se a matriz estiver no formato tradicional, retornamos a matriz[row][col]
}

// Complexidade do modo tradicional: O(1) -- Precisamos apenas trocar o valor da matriz na linha row e coluna col por elem ✓
// Complexidade do modo ragged: O(1) -- Precisamos apenas trocar o valor do ragged na posição start[row] + col por elem ✓
template<class T> 
void MyMatrix<T>::set(int row, int col, const T& elem) {
    if(isRagged()) { // Verificando o formato da matriz
        ragged[start[row] + col] = elem; // Se a matriz estiver no formato ragged, será atribuído elem na posição start[row] + col do ragged
    } else {
        matriz[row][col] = elem; // Se a matriz estiver no formato tradicional, será atribuído elem na linha row e coluna col da matriz
    }
}

// Complexidade do modo tradicional: O(1) -- Precisamos apenas retornar o rows ✓
// Complexidade do modo ragged: O(1) -- Precisamos apenas retornar o rows ✓
template<class T> 
int MyMatrix<T>::getNumRows() const {
    return rows; // Retornando o número de linhas da matriz
}

// Complexidade do modo tradicional: O(1) -- Precisamos apenas retornar o size ✓
// Complexidade do modo ragged: O(1) -- Precisamos apenas retornar o size ✓
template<class T> 
int MyMatrix<T>::getNumElems() const {
    return size; // Retornando o número de elementos da matriz
}

// Complexidade do modo tradicional: O(1) -- Precisamos apenas retornar o tam[row] ✓
// Complexidade do modo ragged: O(1) -- Precisamos apenas retornar a diferença entre o start[row + 1] com start[row] ✓
template<class T> 
int MyMatrix<T>::getNumCols(int row) const {
    if(isRagged()) return start[row + 1] - start[row]; // Se estiver no formato ragged, é retornado a diferença de start[row + 1] com start[row], isto é, a quantidade de colunas que a linha possui
    
    return tam[row]; // Se estiver no formato tradicional, é retornado tam[row], isto é, a quantidade de colunas que a linha possui 
}

// Complexidade do modo tradicional: O(1) | O(C) | O(C) -- Se a nova quantidade de colunas for igual a antiga, não é feito nada. Se a nova quantidade de colunas for menor do que a antiga, alocamos a nova linha com C colunas, preenchemos a nova linha com C colunas e desalocamos a linha antiga com C colunas. Se a nova quantidade de colunas for maior do que a antiga, alocamos a nova linha com C colunas, preenchemos a nova linha com C colunas e desalocamos a linha antiga com C colunas ✓
// Complexidade do modo ragged: O(1) | O(R + T + R * C) | O(R + T + R * C) -- Se a nova quantidade de colunas for igual a antiga, não é feito nada. Se a nova quantidade de colunas for menor do que a antiga, alocamos um auxStart com R + 1 linhas, alocamos o newRagged com T elementos, preenchemos o auxStart com R + 1 linhas, atualizamos os valores de start e preenchemos as R linhas com C colunas do newRagged. Após isso, desalocamos as R + 1 linhas do auxStart e os T elementos de ragged. Se a nova quantidade de colunas for maior do que a antiga, alocamos um auxStart com R + 1 linhas, alocamos o newRagged com T elementos, preenchemos o auxStart com R + 1 linhas, atualizamos os valores de start e preenchemos as R linhas com C colunas do newRagged. Após isso, desalocamos as  R + 1 linhas do auxStart e os T elementos de ragged ✓
template<class T> 
void MyMatrix<T>::resizeRow(int row, int newCol) {
    if(isRagged()) { // Verificando o formato da matriz
        if(newCol < start[row + 1] - start[row]) { // Verificando se a nova quantidade de colunas é menor do que a atual
            // Alocando um start auxiliar para não perder as posições originais
            int* auxStart = new int[rows + 1];

            // Calculando a diferença de tamanho entre a quantidade de colunas antiga e a quantidade de colunas nova
            int dif = (start[row + 1] - start[row]) - newCol;
            
            // Atualizando o valor de size
            size = size - dif;

            // Alocando o novo ragged
            T* newRagged = new T[size];
            
            // Copiando os valores de start para o start auxiliar
            for(int i = 0; i < rows + 1; i++) auxStart[i] = start[i];
            
            // Atualizando os valores de start
            for(int i = row + 1; i < rows + 1; i++) start[i] = start[i] - dif;
            
            // Preenchendo o novo ragged
            for(int i = 0; i < rows; i++) {
                for(int j = 0; j < start[i + 1] - start[i]; j++) {
                    newRagged[start[i] + j] = ragged[auxStart[i] + j];
                }
            }

            // Desalocando o start auxiliar e o ragged antigo
            delete []auxStart;
            delete []ragged;
            
            // Atualizando o valor de ragged
            ragged = newRagged;
            
        } else if (newCol > start[row + 1] - start[row]) { // Verificando se a nova quantidade de colunas é maior do que a atual
            // Alocando um start auxiliar para não perder as posições originais
            int* auxStart = new int[rows + 1];

            // Calculando a diferença de tamanho entre a quantidade de colunas nova e a quantidade de colunas antiga
            int dif = newCol - (start[row + 1] - start[row]);

            // Atualizando o valor de size
            size = size + dif;

            // Alocando o novo ragged
            T* newRagged = new T[size];
            
            // Copiando os valores de start para o start auxiliar
            for(int i = 0; i < rows + 1; i++) auxStart[i] = start[i];
            
            // Atualizando os valores de start
            for(int i = row + 1; i < rows + 1; i++) start[i] = start[i] + dif;
            
            // Preenchendo o novo ragged
            for(int i = 0; i < rows; i++) {
                for(int j = 0; j < start[i + 1] - start[i]; j++) {
                    // Verificando se devemos adicionar o valor padrão ou o valor original
                    if(i == row && j >= auxStart[i + 1] - auxStart[i]) {
                        newRagged[start[i] + j] = T();
                    } else {
                        newRagged[start[i] + j] = ragged[auxStart[i] + j];
                    }
                }
            }

            // Desalocando o start auxiliar e o ragged antigo
            delete []auxStart;
            delete []ragged;
            
            // Atualizando o valor de ragged
            ragged = newRagged;
        } 
    } else {
        if(newCol < tam[row]) { // Verificando se a nova quantidade de colunas é menor do que a atual
            // Alocando a nova linha
            T* newRow = new T[newCol];
            
            // Preenchendo a nova linha
            for(int i = 0; i < newCol; i++) newRow[i] = matriz[row][i];      
            
            // Desalocando a linha antiga
            delete []matriz[row];
            
            // Atualizando os valores de size, tam e matriz
            size = size - (tam[row] - newCol);
            tam[row] = newCol;
            matriz[row] = newRow;

        } else if (newCol > tam[row]) { // Verificando se a nova quantidade de colunas é maior do que a atual
            // Alocando a nova linha
            T* newRow = new T[newCol];
            
            // Preenchendo a nova linha
            for(int i = 0; i < tam[row]; i++) newRow[i] = matriz[row][i];
            for(int i = tam[row]; i < newCol; i++) newRow[i] = T();
            
            // Desalocando a linha antiga
            delete []matriz[row];
            
            // Atualizando os valores de size, tam e matriz
            size = size + (newCol - tam[row]);
            tam[row] = newCol;
            matriz[row] = newRow;
        }  
    }
} 

// Complexidade do modo tradicional: O(1) | O(R + R * C) | O(R + R * C) -- Se a nova quantidade de linhas for igual a antiga, não é feito nada. Se a nova quantidade de linhas for menor do que a antiga, alocamos R linhas da nova matriz e do novo tam. Preenchemos as R linhas do novo tam, alocamos as C colunas em cada uma das R linhas da nova matriz e, em cada linha, preenchemos as C colunas da nova matriz. Por fim, desalocamos as R linhas da matriz antiga com C colunas, desalocamos as R linhas do tam antigo e as R linhas da matriz antiga. Se a nova quantidade de linhas for maior do que a antiga, alocamos R linhas da nova matriz e do novo tam. Preenchemos as R linhas do novo tam, alocamos as C colunas em cada uma das R linhas da nova matriz e, em cada linha, preenchemos as C colunas da nova matriz. Além disso, desalocamos as R linhas da matriz antiga com C colunas. Por fim, desalocamos as R linhas do tam antigo e as R linhas da matriz antiga ✓
// Complexidade do modo ragged: O(1) | O(R + T) | O(R) -- Se a nova quantidade de linhas for igual a antiga, não é feito nada. Se a nova quantidade de linhas for menor do que a antiga, alocamos R + 1 linhas do novo start. Preenchemos as R + 1 linhas do novo start. Calculamos o novo size percorrendo as R + 1 linhas do novo start. Alocamos T elementos do novo ragged. Preenchemos os T elementos do novo ragged. Por fim, desalocamos as R + 1 linhas do start antigo e os T elementos do ragged antigo. Se a nova quantidade de linhas for maior do que a antiga, alocamos R + 1 linhas do novo start. Preenchemos as R + 1 linhas do novo start. Por fim, desalocamos as R + 1 linhas do start antigo ✓
template<class T> 
void MyMatrix<T>::resizeNumRows(int newRows) {
    if(isRagged()) { // Verificando o formato da matriz
        if(newRows < rows) { // Verificando se a nova quantidade de linhas é menor do que a atual
            // Alocando o novo start
            int* newStart = new int[newRows + 1];
            
            // Preenchendo o novo start
            for(int i = 0; i < newRows + 1; i++) newStart[i] = start[i];

            // Calculando o novo size
            size = 0;
            for(int i = 0; i < newRows; i++) size += newStart[i + 1] - newStart[i];
            
            // Alocando o novo ragged
            T* newRagged = new T[size];
            
            // Preenchendo o novo ragged
            for(int i = 0; i < size; i++) newRagged[i] = ragged[i];

            // Desalocando o start e o ragged antigo
            delete []start;
            delete []ragged;
            
            // Atualizando os valores de rows, start e ragged
            rows = newRows;
            start = newStart;         
            ragged = newRagged;

        } else if (newRows > rows) { // Verificando se a nova quantidade de linhas é maior do que a atual
            // Alocando o novo start
            int* newStart = new int[newRows + 1];

            // Preenchendo o novo start
            for(int i = 0; i < rows + 1; i++) newStart[i] = start[i];
            for(int i = rows + 1; i < newRows + 1; i++) newStart[i] = start[rows];
            
            // Desalocando o start antigo
            delete []start;

            // Atualizando os valores de rows e start
            rows = newRows;  
            start = newStart;
        } 
    } else {
        if(newRows < rows) { // Verificando se a nova quantidade de linhas é menor do que a atual
            // Alocando a nova matriz e o novo tam
            T** newMatriz = new T*[newRows];
            int* newTam = new int[newRows];
            
            // Calculando o novo size e preenchendo a nova matriz e o novo tam
            size = 0;
            for(int i = 0; i < newRows; i++) {
                newTam[i] = tam[i];
                size += newTam[i];
                newMatriz[i] = new T[newTam[i]];
                
                for(int j = 0; j < newTam[i]; j++) {
                    newMatriz[i][j] = matriz[i][j];
                }
            }

            // Desalocando a matriz antiga e o tam antigo
            for(int i = 0; i < rows; i++) delete []matriz[i]; 
            delete []tam;
            delete []matriz;
            
            // Atualizando os valores de rows, tam e matriz
            rows = newRows;
            tam = newTam;
            matriz = newMatriz;

        } else if (newRows > rows) { // Verificando se a nova quantidade de linhas é maior do que a atual
            // Alocando a nova matriz e o novo tam
            T** newMatriz = new T*[newRows];
            int* newTam = new int[newRows];
            
            // Preenchendo a nova matriz e o novo tam
            for(int i = 0; i < rows; i++) {
                newTam[i] = tam[i];
                newMatriz[i] = new T[newTam[i]];
                
                for(int j = 0; j < newTam[i]; j++) {
                    newMatriz[i][j] = matriz[i][j];
                }

                // Desalocando as linhas da matriz antiga
                delete []matriz[i];
            }
            
            // Alocando as novas linhas e preenchendo o restante de tam
            for(int i = rows; i < newRows; i++) {
                newMatriz[i] = new T[0];
                newTam[i] = 0;
            }

            // Desalocando a matriz antiga e o tam antigo
            delete []tam;
            delete []matriz;
            
            // Atualizando os valores de rows, tam e matriz
            rows = newRows;
            tam = newTam;
            matriz = newMatriz;
        }
    }
}

// Complexidade do modo tradicional: O(1) -- Precisamos apenas verificar se ragged é NULL ou não. Como é falso, ele retorna falso ✓
// Complexidade do modo ragged: O(1) -- Precisamos apenas verificar se ragged é NULL ou não. Como é true, ele retorna true ✓
template<class T> 
bool MyMatrix<T>::isRagged() const {
    if(ragged != NULL) return true; // Se ragged for diferente de NULL, é retornado true
    
    return false; // Se ragged for NULL, é retornado false
}

// Complexidade do modo tradicional: O(R + T + R * C) -- Precisamos alocar os vetores start com R + 1 elementos e ragged com T elementos. Depois precisamos preencher as R + 1 linhas do vetor start e preencher os R * C elementos do vetor ragged. Após isso desalocamos os R elementos de tam e os R * C elementos da matriz ✓
// Complexidade do modo ragged: O(1) -- como a matriz já está no modo ragged, não é feito nada ✓
template<class T> 
void MyMatrix<T>::convertToRagged() {
    if(!isRagged()) {
        // Alocando start e ragged
        start = new int[rows + 1];
        ragged = new T[size];

        // Preenchendo start
        start[0] = 0;
        for(int i = 1; i < rows + 1; i++) {
            start[i] = start[i - 1] + tam[i - 1];
        }

        // Copiando os valores da matriz no formato tradicional para o formato ragged
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < tam[i]; j++) {
                ragged[start[i] + j] = matriz[i][j];
            }
        }

        // Desalocando tam e matriz
        delete []tam;
        for(int i = 0; i < rows; i++) delete []matriz[i];
        delete []matriz;
        
        // Atribuindo NULL para tam e matriz
        tam = NULL;
        matriz = NULL;
    }
}

// Complexidade do modo tradicional: O(1) -- como a matriz já está no modo tradicional, não é feito nada ✓
// Complexidade do modo ragged: O(R + R * C + T) -- precisamos alocar os vetores tam e matriz de tamanho R. Depois precisamos varrer todas as R linhas da matriz e, em cada linha, devemos alocar cada linha com C colunas e preenche-las. Depois devemos desalocar os vetores start com R + 1 linhas e ragged com T elementos ✓
template<class T> 
void MyMatrix<T>::convertToTraditional() {
    if(isRagged()) { // Verificando o formato da matriz
        // Alocando tam e matriz
        tam = new int[rows];
        matriz = new T*[rows];

        // Copiando os valores da matriz no formato ragged para o formato tradicional
        for(int i = 0; i < rows; i++) {
            tam[i] = start[i + 1] - start[i];
            matriz[i] = new T[tam[i]];
            
            for(int j = 0; j < tam[i]; j++) {
                matriz[i][j] = ragged[start[i] + j];
            }
        }

        // Desalocando start e ragged
        delete []start;
        delete []ragged;

        // Atribuindo NULL para start e ragged
        start = NULL;
        ragged = NULL;
    }
}

// Complexidade do modo tradicional: O(R * C) -- precisamos varrer todas as R linhas da matriz e, em cada linha, imprimir as C colunas ✓
// Complexidade do modo ragged: O(R * C) -- precisamos varrer todas as R linhas da matriz e, em cada linha, imprimir as C colunas ✓
template<class T> 
void MyMatrix<T>::print() const {
    cout << "Rows: " << rows << endl; // Imprimindo a quantidade de linhas da matriz
    cout << "Elems: " << size << endl; // Imprimindo a quantidade de elementos da matriz
    
    if(isRagged()) { // Verificando o formato da matriz
        // Percorrendo todos os elementos da matriz
        for(int i = 0; i < rows; i++) {
            cout << start[i + 1] - start[i] << ":"; // Imprimindo a quantidade de colunas da linha
            for(int j = 0; j < start[i + 1] - start[i]; j++) {
                cout << " " << get(i,j); // Imprimindo o elemento
            }
            cout << endl;
        }
    } else {
        // Percorrendo todos os elementos da matriz
        for(int i = 0; i < rows; i++) {
            cout << tam[i] << ":"; // Imprimindo a quantidade de colunas da linha
            for(int j = 0; j < tam[i]; j++) {
                cout << " " << get(i,j); // Imprimindo o elemento
            }
            cout << endl;
        }
    }
}

#endif