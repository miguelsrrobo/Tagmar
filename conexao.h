#ifndef CONEXAO_H
#define CONEXAO_H

#endif // CONEXAO_H
#include <QtSql>
class Conexao
{
    public:
        QSqlDatabase bancoDeDados;
        QString banco;
        //conexão com o banco de dados
        Conexao()
        {
            //endereço do arquivo banco de dados
            banco = "/home/miguel/Documentos/Tagmar/game";
            //nome do programa para conexão
            bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
        }
        void fechar()
        {
            bancoDeDados.close();
        }
        bool abrir()
        {
            bancoDeDados.setDatabaseName(banco);
            if(!bancoDeDados.open())
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        bool aberto()
        {
            if(bancoDeDados.isOpen())
            {
                return true;
            }
            else
            {
                return false;
            }
        }
}
#endif; // CONEXAO_H
