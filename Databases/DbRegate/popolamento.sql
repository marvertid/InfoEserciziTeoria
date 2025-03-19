-- Inserimento dati in Nazione
INSERT INTO Nazione (Nome) VALUES ('Italia'), ('Francia'), ('Spagna');

-- Inserimento dati in Tipologia
INSERT INTO Tipologia (Nome) VALUES ('Altura'), ('Costiera'), ('Offshore');

-- Inserimento dati in Ruolo
INSERT INTO Ruolo (Nome) VALUES ('Skipper'), ('Tattico'), ('Prodiere');

-- Inserimento dati in Velista
INSERT INTO Velista (Nome, Cognome, DataN, Peso) VALUES 
('Luca', 'Rossi', '1985-06-15', 78.5),
('Marco', 'Bianchi', '1990-08-22', 82.3),
('Giovanni', 'Verdi', '1992-11-10', 75.0);

-- Inserimento dati in Barca
INSERT INTO Barca (Nome, Classe, PesoMax) VALUES 
('Antares', 'Monotipo', 250.00),
('Telepatia', 'Catamarano', 300.00);

-- Inserimento dati in Luogo
INSERT INTO Luogo (Nome, codNazione) VALUES 
('Genova', 1), 
('Marsiglia', 2);

-- Inserimento dati in Regata
INSERT INTO Regata (Denominazione, Miglia, codTipologia, codLuogo) VALUES 
('Coppa Carnevale', 50.0, 1, 1),
('Trofeo Mediterraneo', 75.5, 2, 2);

-- Inserimento dati in Ricopre
INSERT INTO Ricopre (codRuolo, codVelista) VALUES 
(1, 1), -- Skipper Luca Rossi
(2, 2), -- Tattico Marco Bianchi
(3, 3); -- Prodiere Giovanni Verdi

-- Inserimento dati in Partecipazione
INSERT INTO Partecipazione (codVelista, codRegata, codBarca, DataR) VALUES 
(1, 'Coppa Carnevale', 'Antares', '2024-03-23'),
(2, 'Coppa Carnevale', 'Antares', '2024-03-23'),
(3, 'Coppa Carnevale', 'Antares', '2024-03-23'),
(1, 'Trofeo Mediterraneo', 'Telepatia', '2024-02-15'),
(2, 'Trofeo Mediterraneo', 'Telepatia', '2024-02-15');
