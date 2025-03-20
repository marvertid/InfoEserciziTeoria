CREATE DATABASE EsercizioFile;

USE EsercizioFile;

CREATE TABLE Magazzino (
	Id INT AUTO_INCREMENT PRIMARY KEY,
	NrLotti INT, 
	DataRiordino DATE,
	Prodotto VARCHAR(20),
	Categoria VARCHAR(20)
);

INSERT INTO Magazzino (NrLotti, DataRiordino, Prodotto, Categoria)  
VALUES  
(600, "2020-01-08", "Acqua Naturale 1L", "Bevande"),  
(570, "2020-01-08", "Acqua Naturale 1/2 L", "Bevande"),  
(100, "2020-01-08", "Anguria", "Frutta e Verdura"),  
(300, "2020-03-01", "Mela Golden", "Frutta e Verdura"),  
(200, "2020-01-02", "Cavolfiore", "Frutta e Verdura"),  
(300, "2020-01-08", "Latte UHT", "Bevande"),  
(550, "2020-02-02", "Sapone Liquido", "Igiene Personale"),  
(500, "2020-02-02", "The Freddo 1/2L", "Bevande"),  
(300, "2020-03-04", "Wafer", "Biscotti"),  
(234, NULL, "Frollini integrali", "Biscotti"),  
(155, "2020-03-01", "Fazzoletti di carta", "Igiene Personale"),  
(20, "2020-03-04", "Frollini classici", "Biscotti");  


