void liberaMapa();
void leMapa();
void alocaMapa();
void imprimeMapa();
int acabou();
void move(char direcao);

struct mapa {
    char **matriz;
    int linhas;
    int colunas;
};
