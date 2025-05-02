-- 1.Elencare tutti i dati dei pacchi spediti con ritardo.
SELECT Pacco.*
FROM Pacco INNER JOIN Spedizione ON Pacco.idP = Spedizione.codPacco
WHERE Spedizione.DataEffettiva > Spedizione.DataStimata;

-- 2.Contare i pacchi spediti per ogni tipo di merce.
SELECT TipoSpedizione.Tipo, COUNT(*)
FROM TipoSpedizione INNER JOIN Spedizione ON TipoSpedizione.IdS = Spedizione.codTipoSpedizione
GROUP BY TipoSpedizione.Tipo;

-- 3.Elencare i codici fiscali degli utenti che hanno spedito almeno un pacco senza opzioni di spedizione
SELECT Utente.CF 
FROM Utente INNER JOIN Spedizione ON Utente.CF = Spedizione.codUtente
WHERE Spedizione.OpzioniSped IS NULL;

-- 4.Elencare i tipi di spedizione per i quali il peso medio dei pacchi è maggiore di 3 Kg.
SELECT TipoSpedizione.Tipo, AVG(Pacco.Peso)
FROM TipoSpedizione INNER JOIN Spedizione ON Spedizione.codTipoSpedizione = TipoSpedizione.IdS
					INNER JOIN Pacco ON Spedizione.codPacco = Pacco.IdP
GROUP BY TipoSpedizione.IdS, TipoSpedizione.Tipo
HAVING AVG(Pacco.Peso) > 3

-- 5.Elencare codice, mittente e destinatario di ogni pacco spedito nel 2018.
SELECT Spedizione.codUtente, Spedizione.codUtenteDestinatario, Spedizione.CodUtenteProvenienza
FROM Spedizione 
WHERE YEAR(DataEffettiva) = 2018;

-- 6.Elencare nome, cognome e numero totale dei pacchi ricevuti, per gli utenti che hanno ricevuto più di due pacchi, da un utente i cui nome e cognome sono dati in input.
SELECT Destinatario.Nome, Destinatario.Cognome, COUNT(*)
FROM Spedizione INNER JOIN Utente AS 'Mittente' ON Mittente.CF = Spedizione.CodUtenteProvenienza
				INNER JOIN Utente AS 'Destinatario' ON Destinatario.CF = Spedizione.codUtenteDestinatario
	WHERE Mittente.Nome = ['Inserire nome: '], Mittente.Cognome = ['Inserire cognome: ']
GROUP BY Destinatario.CF, Destinatario.Nome, Destinatario.Cognome
HAVING COUNT(*) > 2

-- 7.Calcolare il totale (costo) complessivo delle spedizioni effettuate dall'utente con codice fiscale ABCDEF71A50B819A.
Select Utente.Nome, COUNT(TipoSpedizione.Costo + Spedizione.Maggiorazione)
FROM Utente INNER JOIN Spedizione ON Spedizione.CodUtenteProvenienza = Utente.CF
			INNER JOIN TipoSpedizione ON Spedizione.codTipoSpedizione = TipoSpedizione.IdS
WHERE Utente.CF = 'ABCDEF71A50B819A';


-- 8. Determinare il numero medio di pacchi mensilmente ricevuti da ogni utente spediti nell'anno 2020
SELECT Utente.Nome, Utente.Cognome, COUNT(Pacco.IdP) / 12
FROM Utente INNER JOIN Spedizione ON Utente.CF = Spedizione.codUtenteDestinatario
			INNER JOIN Pacco ON Spedizione.codPacco = Pacco.IdP
WHERE YEAR(Spedizione.DataEffettiva) = 2020
GROUP BY Utente.CF, Utente.Nome, Utente.Cognome;
-- 9. Contare quanti pacchi sono stati spediti e ricevuti all'interno dello stesso comune
SELECT COUNT(*)
FROM Spedizione AS S INNER JOIN Utente AS 'Mittente' ON S.CodUtenteProvenienza = Mittente.CF
					 INNER JOIN Utente AS 'Destinatario' ON S.codUtenteDestinatario = Destinatario.CF
					 INNER JOIN Comune AS 'CMittente' ON Mittente.codComune = Comune.IdC
					 INNER JOIN Comune AS 'CDestinatario' ON Destinatario.codComune = Comune.IdC
WHERE CMittente = CDestinatario;
 
-- 10. Tutti i pacchi mai consegnati a Carpi (in questo contesto, un pacco si ritiene consegnato se ha una data effettiva di spedizione).
SELECT Pacco.*
FROM Pacco INNER JOIN Spedizione ON Pacco.IdP = Spedizione.CodPacco
		   INNER JOIN Utente AS 'Destinatario' ON Spedizione.codUtenteDestinatario = Destinatario.CF
WHERE Spedizione.DataEffettiva IS NOT NULL AND Destinatario.codComune = '41012'


-- 11. Determinare il costo medio delle spedizioni per ogni utente.
SELECT Utente.Nome, Utente.Cognome, SUM(TipoSpedizione.Costo + Spedizione.Maggiorazione) / COUNT(Spedizione.CodUtenteProvenienza)
FROM Utente INNER JOIN Spedizione ON Utente.CF = Spedizione.CodUtenteProvenienza
			INNER JOIN TipoSpedizione ON TipoSpedizione.IdS = Spedizione.codTipoSpedizione
GROUP BY Utente.CF, Utente.Nome, Utente.Cognome;

-- 12. I dati degli utenti che in un certo lasso di tempo (individuato tramite la data effettiva) hanno fatto il maggior numero di spedizioni destinate alle città di Carpi e Modena

-- 13. Elenco degli utenti che non hanno mai spedito pacchi
SELECT Utente.*
FROM Utente 

EXCEPT

Select Utente.*
FROM Utente INNER JOIN Spedizione ON Spedizione.CodUtenteProvenienza = Utente.CF


-- 14. Calcolare quanto spendono mediamente gli utenti del servizio
SELECT SUM(Spedizione.Maggiorazione + TipoSpedizione.Costo) / COUNT( DISTINCT Spedizione.codPacco)
FROM Spedizione INNER JOIN TipoSpedizione ON Spedizione.codTipoSpedizione = TipoSpedizione.IdS
