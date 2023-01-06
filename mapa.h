struct mapa {
    char **matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;

void liberaMapa();
void leMapa();
void alocaMapa();
void imprimeMapa();