CREATE DATABASE EducationalGames;
USE EducationalGames;

CREATE TABLE Argomento(
    Id INT AUTO_INCREMENT PRIMARY KEY,
    Nome VARCHAR(20) NOT NULL
);

CREATE TABLE Utente(
    Id INT AUTO_INCREMENT PRIMARY KEY,
    NickName VARCHAR(25) NOT NULL,
    Pwd VARCHAR(30) NOT NULL,
);

CREATE TABLE Studente(
    Id INT AUTO_INCREMENT PRIMARY KEY,
    Nome VARCHAR(20) NOT NULL,
    Cognome VARCHAR(20) NOT NULL,
    CodUtente INT NOT NULL,
    FOREIGN KEY (CodUtente) REFERENCES Utente(Id) 
);

CREATE TABLE Docente(
    Id INT AUTO_INCREMENT PRIMARY KEY,
    Nome VARCHAR(20) NOT NULL,
    Cognome VARCHAR(20) NOT NULL,
    CodUtente INT NOT NULL,
    FOREIGN KEY (CodUtente) REFERENCES Utente(Id) 
);

CREATE TABLE classeVirtuale(
    Id INT AUTO_INCREMENT PRIMARY KEY,
    Nome VARCHAR(30) NOT NULL,
    Materia VARCHAR(30) NOT NULL,
    codIscr VARCHAR(2000) NOT NULL,
    codDocente INT NOT NULL,
    FOREIGN KEY (codDocente) REFERENCES Docente(Id)   
)ENGINE = InnoDB;

CREATE TABLE videoGioco(
    Id INT AUTO_INCREMENT PRIMARY KEY,
    Titolo VARCHAR(30) NOT NULL,
    Descrizione VARCHAR(1000) NOT NULL,
    DescrizioneBreve VARCHAR(160) NOT NULL,
    NrMonete INT CHECK(NrMonete > 0) NOT NULL,
    Immagine1 VARCHAR(2000) NOT NULL,
    Immagine2 VARCHAR(2000) NOT NULL,
    Immagine3 VARCHAR(2000) NOT NULL,
    CodDocente INT NOT NULL,
    FOREIGN KEY (CodDocente) REFERENCES Docente(Id)
);

CREATE TABLE AssocTernaria(
    CodVideoGioco INT NOT NULL,
    CodClasseVirtuale INT NOT NULL,
    CodStudente INT NOT NULL,
    LinkGioco VARCHAR(2000) NOT NULL,
    Monete INT CHECK(Monete > 1) NOT NULL,
    FOREIGN KEY (CodVideoGioco) REFERENCES videoGioco(Id),
    FOREIGN KEY (CodClasseVirtuale) REFERENCES classeVirtuale(Id),
    FOREIGN KEY (CodStudente) REFERENCES Studente(Id)
);

