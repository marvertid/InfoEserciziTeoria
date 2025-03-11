CREATE DATABASE DBPatenti;

USE DBPatenti;

CREATE TABLE Provincia (
	Id INT AUTO_INCREMENT PRIMARY KEY,
	Sigla CHAR(6) NOT NULL
);

CREATE TABLE Regione(
	Id INT AUTO_INCREMENT PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL
);

CREATE TABLE Comune (
	Cap INT PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL,
	codRegione INT,
	FOREIGN KEY (codRegione) REFERENCES Regione(Id)
);

CREATE TABLE Cittadino (
	codF CHAR(16) PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL,
	Cognome VARCHAR(20) NOT NULL,
	DataN Date NOT NULL,
	Via VARCHAR(20) NOT NULL,
	Civico VARCHAR(20) NOT NULL,
	codComune INT,
	FOREIGN KEY (codComune) REFERENCES Comune(Cap)
);

CREATE TABLE Esaminatore(
	codF CHAR(16) PRIMARY KEY,
	Nome VARCHAR(20) NOT NULL,
	Cognome VARCHAR(20) NOT NULL,
	DataN Date NOT NULL,
	Via VARCHAR(20) NOT NULL,
	Civico VARCHAR(20) NOT NULL,
	NTelefono VARCHAR(12) NOT NULL,
	Email VARCHAR(40),
	codComune INT,
	FOREIGN KEY (codComune) REFERENCES Comune(Cap)
);

CREATE TABLE Patente (
	Id INT AUTO_INCREMENT PRIMARY KEY,
	DataR Date NOT NULL,
	DataS Date NOT NULL,
	Tipo VARCHAR(15) NOT NULL,
	NPatente VARCHAR(15),
	codProvincia INT,
	codCittadino CHAR(16),
	codEsaminatore CHAR(16),
	FOREIGN KEY (codProvincia) REFERENCES Provincia(Id),
	FOREIGN KEY (codCittadino) REFERENCES Cittadino(codF),
	FOREIGN KEY (codEsaminatore) REFERENCES Esaminatore(codF)
);

INSERT INTO Provincia(Sigla)
VALUES 
	("MO"),
	("PR"),
	("VR"),
	("NA"),
	("FO"),
	("CA");

INSERT INTO Regione(Nome)
VALUES
	("Emilia-Romagna"),
	("Campania"),
	("Basilicata"),
	("Piemonte"),
	("Calabria"),
	("Veneto");

INSERT INTO Comune(Cap, Nome, codRegione)
VALUES
	(41019, "Soliera", 1),
	(41012, "Carpi", 1), 
	(83100, "Avellino", 2),
	(84012, "Angri", 2),
	(85010, "Anzi", 3),
	(12051, "Alba", 4),
	(31030, "Casier", 6);

INSERT INTO Cittadino(codF, Nome, Cognome, DataN, Via, Civico, codComune)
VALUES 
	('CLLFRS90T10E472X', 'Francesco', 'Collini', '1990-11-10', 'Via Veneto', 22, 41019),
    ('BRNGLL85D05A123Y', 'Gabriele', 'Baroni', '1985-04-05', 'Via Milano', 7, 41012),
    ('SRTMRC93B21F205K', 'Marco', 'Sarti', '1993-02-21', 'Via Torino', 14, 85010),
    ('LMBVLR78L30D969J', 'Valeria', 'Lombardi', '1978-07-30', 'Corso Venezia', 9, 83100),
    ('MNFRNC88M12H501Z', 'Francesca', 'Manni', '1988-12-12', 'Via Firenze', 18, 31030),
    ('DGMRFL81P25L219Q', 'Raffaella', 'Degli', '1981-09-25', 'Piazza Duomo', 5, 12051),
    ('GRSMRC99G08H501R', 'Marco', 'Guerra', '1999-07-08', 'Via Napoli', 3, 84012),
	("RSSMRA85M10H501Z", "Marco", "Rossi", "1985-08-10", "Via Roma", 12, 41012),
	("BNCLSN92A01F205X", "Alessandro", "Bianchi", "1992-01-01", "Via Garibaldi", 8, 41019),
	("VRDGPP76D20L219Y", "Giuseppe", "Verdi", "1976-04-20", "Corso Italia", 24, 84012),
	("MNTGPP00T15E472U", "Giovanni", "Monti", "2000-12-15", "Via Dante", 5, 12051),
	("FRNLCU88S12D969V", "Luca", "Ferrini", "1988-11-12", "Piazza Mazzini", 19, 83100),
	("PLZMRN95C25H501J", "Martina", "Palazzi", "1995-03-23", "Via Manzoni", 3, 31030);

INSERT INTO Esaminatore(codF, Nome, Cognome, DataN, Via, Civico, NTelefono, Email, codComune)
VALUES
	('RSSMRA85M10H501Z', 'Marco', 'Rossi', '1985-08-10', 'Via Roma', '12', '3201234567', 'marco.rossi@email.com', 41019),  
	('BNCLSN92A01F205X', 'Alessandra', 'Bianchi', '1992-01-01', 'Via Garibaldi', '8', '3349876543', 'alessandra.bianchi@email.com', 83100),  
	('VRDGPP76D20L219Y', 'Giuseppe', 'Verdi', '1976-04-20', 'Corso Italia', '24', '3456789012', NULL, 31030);
	
INSERT INTO Patente(DataR, DataS, Tipo, NPatente, codProvincia, codCittadino, codEsaminatore)
VALUES 
    ('2020-06-15', '2030-06-15', 'B', '123456789A', 1, 'RSSMRA85M10H501Z', 'VRDGPP76D20L219Y'),
    ('2021-03-22', '2031-03-22', 'A', '234567891B', 2, 'BNCLSN92A01F205X', 'BNCLSN92A01F205X'),
    ('2019-07-30', '2029-07-30', 'C', '345678912C', 3, 'VRDGPP76D20L219Y', 'VRDGPP76D20L219Y'),
    ('2018-05-10', '2028-05-10', 'D', '456789123D', 4, 'MNTGPP00T15E472U', 'BNCLSN92A01F205X'),
    ('2022-01-15', '2032-01-15', 'B', '567891234E', 5, 'FRNLCU88S12D969V', 'VRDGPP76D20L219Y'),
    ('2015-09-25', '2025-09-25', 'A2', '678912345F', 6, 'PLZMRN95C25H501J', 'BNCLSN92A01F205X'),
    ('2017-12-05', '2027-12-05', 'B+E', '789123456G', 1, 'CLLFRS90T10E472X', 'VRDGPP76D20L219Y'),
    ('2023-04-10', '2033-04-10', 'C1+E', '891234567H', 2, 'BRNGLL85D05A123Y', 'BNCLSN92A01F205X'),
    ('2019-06-20', '2029-06-20', 'D1', '912345678I', 3, 'SRTMRC93B21F205K', 'VRDGPP76D20L219Y'),
    ('2016-08-15', '2026-08-15', 'D+E', 'A123456789J', 4, 'LMBVLR78L30D969J', 'BNCLSN92A01F205X'),
    ('2020-10-30', '2030-10-30', 'C', 'B234567891K', 5, 'MNFRNC88M12H501Z', 'VRDGPP76D20L219Y'),
    ('2014-11-12', '2024-11-12', 'B', 'C345678912L', 6, 'DGMRFL81P25L219Q', 'BNCLSN92A01F205X'),
    ('2021-07-18', '2031-07-18', 'Internazionale', 'D456789123M', 1, 'GRSMRC99G08H501R', 'VRDGPP76D20L219Y'),
    ('2013-02-22', '2023-02-22', 'Speciale', 'E567891234N', 2, 'FRNLCU88S12D969V', 'BNCLSN92A01F205X');
