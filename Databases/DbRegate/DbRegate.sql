CREATE DATABASE DbRegate;

USE DbRegate;

CREATE TABLE Nazione (
	Id INT AUTO_INCREMENT PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL
);

CREATE TABLE Tipologia (
	Id INT AUTO_INCREMENT PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL
);

CREATE TABLE Ruolo (
	Id INT AUTO_INCREMENT PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL
);

CREATE TABLE Velista (
	Id INT AUTO_INCREMENT PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL,
	Cognome VARCHAR(20) NOT NULL,
	DataN DATE NOT NULL,
	Peso DECIMAL(4, 2) NOT NULL
);

CREATE TABLE Barca (
	Nome VARCHAR(20) PRIMARY KEY,
	Classe VARCHAR(20) NOT NULL,
	PesoMax DECIMAL(4, 2) NOT NULL
);

CREATE TABLE Luogo (
	Id INT AUTO_INCREMENT PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL,
	codNazione INT,
	FOREIGN KEY (codNazione) REFERENCES Nazione(Id)
); 

CREATE TABLE Regata (
	Denominazione VARCHAR(20) PRIMARY KEY,
	Miglia DECIMAL(4, 2) NOT NULL,
	codTipologia INT,
	codLuogo INT,
	FOREIGN KEY (codTipologia) REFERENCES Tipologia(Id),
	FOREIGN KEY (codLuogo) REFERENCES Luogo(Id)
);

CREATE TABLE Ricopre (
	codRuolo INT,
	codVelista INT,
	FOREIGN KEY (codRuolo) REFERENCES Ruolo(Id),
	FOREIGN KEY (codVelista) REFERENCES Velista(Id),
	PRIMARY KEY (codRuolo, codVelista)
);

CREATE TABLE Partecipazione (
	codVelista INT,
	codRegata INT,
	codBarca INT,
	DataR DATE NOT NULL,	
	FOREIGN KEY (codVelista) REFERENCES Velista(Id),
	FOREIGN KEY (codRegata) REFERENCES Regata(Denominazione),
	FOREIGN KEY (codBarca) REFERENCES Barca(Id),
	PRIMARY KEY (codVelista, DataR)
);




