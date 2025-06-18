CREATE DATABASE WebCommunity;

USE WebCommunity;

CREATE TABLE Provincia(
	Sigla VARCHAR(20) PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL
);

CREATE TABLE Luogo (
	IdL INT PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL,
	CodProvincia VARCHAR(20) NOT NULL,
	FOREIGN KEY (CodProvincia) REFERENCES Provincia(Sigla)
);

CREATE TABLE Utente (
	IdU INT PRIMARY KEY,
	Cognome VARCHAR(20) NOT NULL,
	Nome VARCHAR(20) NOT NULL,
	Via VARCHAR(20) NOT NULL,
	Civico VARCHAR(20) NOT NULL,
	CodLuogo INT NOT NULL,
	FOREIGN KEY (CodLuogo) REFERENCES Luogo(IdL)
);

CREATE TABLE Account (
	CodUtente INT,
	Nickname VARCHAR(30) NOT NULL UNIQUE,
	Email VARCHAR(100) NOT NULL UNIQUE,
	Pwd VARCHAR(50) NOT NULL,
	PRIMARY KEY (CodUtente),
	FOREIGN KEY (CodUtente) REFERENCES Utente(IdU)
);

CREATE TABLE Categoria (
	IdC INT PRIMARY KEY,
	Descrizione VARCHAR(400) NOT NULL
);

CREATE TABLE Preferenza (
	CodAccount INT NOT NULL,
	CodCategoria INT NOT NULL,
	PRIMARY KEY (CodAccount, CodCategoria),
	FOREIGN KEY (CodAccount) REFERENCES Account(CodUtente),
	FOREIGN KEY (CodCategoria) REFERENCES Categoria(IdC)

);

CREATE TABLE Evento (
	IdE INT PRIMARY KEY,
	Data DATE NOT NULL,
	Titolo VARCHAR(30) NOT NULL,
	CodAccount INT NOT NULL,
	CodCategoria INT NOT NULL,
	CodLuogo INT NOT NULL,
	FOREIGN KEY (CodAccount) REFERENCES Account(CodUtente),
	FOREIGN KEY (CodCategoria) REFERENCES Categoria(IdC),
	FOREIGN KEY (CodLuogo) REFERENCES Luogo(IdL)
);

CREATE TABLE Commento (
	CodAccount INT NOT NULL,
	CodEvento INT NOT NULL,
	DataOra DATETIME NOT NULL,
	Testo VARCHAR(200) NOT NULL,
	Voto INT CHECK (Voto BETWEEN 1 AND 5),
	PRIMARY KEY (CodAccount, CodEvento),
	FOREIGN KEY (CodAccount) REFERENCES Account(CodUtente),
	FOREIGN KEY (CodEvento) REFERENCES Evento(IdE)
);

CREATE TABLE Artista (
	IdA INT PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL
);

CREATE TABLE Partecipazione (
	CodEvento INT NOT NULL,
	CodArtista INT NOT NULL,
	PRIMARY KEY (CodEvento, CodArtista),
	FOREIGN KEY (CodEvento) REFERENCES Evento(IdE),
	FOREIGN KEY (CodArtista) REFERENCES Artista(IdA)
);

-- Province
INSERT INTO Provincia (Sigla, Nome) VALUES
('RM', 'Roma'),
('MI', 'Milano'),
('NA', 'Napoli'),
('TO', 'Torino');

-- Luoghi
INSERT INTO Luogo (IdL, Nome, CodProvincia) VALUES
(1, 'Centro Storico', 'RM'),
(2, 'Navigli', 'MI'),
(3, 'Vomero', 'NA'),
(4, 'San Salvario', 'TO');

-- Utenti
INSERT INTO Utente (IdU, Cognome, Nome, Via, Civico, CodLuogo) VALUES
(1, 'Rossi', 'Luca', 'Via Roma', '12', 1),
(2, 'Bianchi', 'Anna', 'Via Milano', '7', 2),
(3, 'Verdi', 'Marco', 'Via Napoli', '3', 3),
(4, 'Neri', 'Giulia', 'Via Torino', '5', 4);

-- Account
INSERT INTO Account (CodUtente, Nickname, Email, Pwd) VALUES
(1, 'luca_rossi', 'luca.rossi@email.com', 'pass123'),
(2, 'anna_b', 'anna.bianchi@email.com', 'pass234'),
(3, 'marco_verdi', 'marco.verdi@email.com', 'pass345'),
(4, 'giulia_n', 'giulia.neri@email.com', 'pass456');

-- Categorie
INSERT INTO Categoria (IdC, Descrizione) VALUES
(1, 'Musica'),
(2, 'Teatro'),
(3, 'Cinema'),
(4, 'Arte');

-- Preferenze
INSERT INTO Preferenza (CodAccount, CodCategoria) VALUES
(1, 1),
(1, 3),
(2, 2),
(3, 1),
(3, 4),
(4, 2);

-- Eventi
INSERT INTO Evento (IdE, Data, Titolo, CodAccount, CodCategoria, CodLuogo) VALUES
(1, '2023-04-15', 'Concerto Jazz', 1, 1, 1),
(2, '2023-05-20', 'Spettacolo Teatrale', 2, 2, 2),
(3, '2024-01-10', 'Festival del Cinema', 3, 3, 3),
(4, '2023-03-05', 'Mostra d\'Arte Moderna', 1, 4, 4);

-- Commenti
INSERT INTO Commento (CodAccount, CodEvento, DataOra, Testo, Voto) VALUES
(2, 1, '2023-04-16 20:00:00', 'Bellissimo concerto!', 5),
(3, 1, '2023-04-16 21:30:00', 'Ottima esibizione.', 4),
(1, 2, '2023-05-21 18:00:00', 'Interessante spettacolo.', 4),
(3, 3, '2024-01-11 22:00:00', 'Film molto coinvolgente.', 5);

-- Artisti
INSERT INTO Artista (IdA, Nome) VALUES
(1, 'Jazz Band'),
(2, 'Compagnia Teatrale'),
(3, 'Regista Famoso'),
(4, 'Artista Moderno');

-- Partecipazioni
INSERT INTO Partecipazione (CodEvento, CodArtista) VALUES
(1, 1),
(2, 2),
(3, 3),
(4, 4);
