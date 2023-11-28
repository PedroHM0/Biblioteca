#ifndef TIPO_H
#define TIPO_H

#include <string>
#include <iostream>
using namespace std;

class Tipo
{
	public:
		Tipo();
		Tipo(string titulo,string autor,string ano,string edicao,string cidade,string pag,string isbn,string ass,string palavrachave,string palavrachave2,string cdu);
		~Tipo();
		
		virtual void imprimi();

		string getTitulo();
		string getAutor();
		string getAno();
		string getEdicao();
		string getCidade();
		string getPag();
		string getIsbn();
		string getAss();
		string getPalavrachave();
		string getPalavrachave2();
		string getCdu();

		void setTitulo(string titulo);
		void setAutor(string autor);
		void setAno(string ano);
		void setEdicao(string edicao);
		void setCidade(string cidade);
		void setPag(string pag);
		void setIsbn(string isbn);
		void setAss(string ass);
		void setPalavrachave(string palavrachave);
		void setPalavrachave2(string palavrachave2);
		void setCdu(string cdu);
		
	private:

		string titulo;
		string autor;
		string ano;
		string edicao;
		string cidade;
		string pag;
		string isbn;
		string ass;
		string palavrachave;
		string palavrachave2;
		string cdu;
};

#endif
