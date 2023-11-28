#include "Tipo.h"

Tipo::Tipo()
{
}

Tipo::Tipo(string titulo,string autor,string ano,string edicao,string cidade,string pag,string isbn,string ass,string palavrachave,string palavrachave2,string cdu){
	
	setTitulo(titulo);
	setAutor(autor);
	setAno(ano);
	setEdicao(edicao);
	setCidade(cidade);
	setPag(pag);
	setIsbn(isbn);
	setAss(ass);
	setPalavrachave(palavrachave);
	setPalavrachave2(palavrachave2);
	setCdu(cdu);
}

Tipo::~Tipo()
{
}

string Tipo::getTitulo(){
	
	return titulo;
}
string Tipo::getAutor(){
	
	return autor;
}

string Tipo::getAno(){
	
	return ano;
}

string Tipo::getEdicao(){
	
	return edicao;
}

string Tipo::getCidade(){
	
	return cidade;
}

string Tipo::getPag(){
	
	return pag;
}

string Tipo::getIsbn(){
	
	return isbn;
}

string Tipo::getAss(){
	
	return ass;
}

string Tipo::getPalavrachave(){
	
	return palavrachave;
}

string Tipo::getPalavrachave2(){
	
	return palavrachave2;
}

string Tipo::getCdu(){
	
	return cdu;
}

void Tipo::setTitulo(string titulo){
	
	this->titulo = titulo;
}

void Tipo::setAutor(string autor){
	
	this->autor = autor;
}

void Tipo::setAno(string ano){
	
	this->ano = ano;
}

void Tipo::setEdicao(string edicao){
	
	this->edicao = edicao;
}

void Tipo::setCidade(string cidade){
	
	this->cidade = cidade;
}

void Tipo::setPag(string pag){
	
	this->pag = pag;
}

void Tipo::setIsbn(string isbn){
	
	this->isbn = isbn;
}

void Tipo::setAss(string ass){
	
	this->ass = ass;
}

void Tipo::setPalavrachave(string palavrachave){
	
	this->palavrachave = palavrachave;
}

void Tipo::setPalavrachave2(string palavrachave2){
	
	this->palavrachave2 = palavrachave2;
}

void Tipo::setCdu(string cdu){
	
	this->cdu = cdu;
}


void Tipo::imprimi(){

	cout << titulo;
	cout << "\n\n" << autor << "\n";
	cout << ano << "\n";
	cout << cidade << ":";
	cout << edicao << "-"; 
	cout << pag << "\n\n";
	cout << "ISBN:" << isbn << "\n\n";
	cout << "1. " << ass << " ";
	cout << "I." << palavrachave << " ";
	cout << "II. " << palavrachave2 << " ";
	cout << "III." << titulo << "\n\n						"; 
	cout << "CDU: " << cdu; 
}
