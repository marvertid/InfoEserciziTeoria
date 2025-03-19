/* Realizzare analisi, ER, schema logico e le seguenti query in SQL:

1.    Determinare il numero totale di miglia marine percorse dalla barca “Antares” nel periodo che va dal 01/01/2024 al 31/03/2024.

2.    Elencare, in ordine alfabetico, nome e classe delle barche che hanno partecipato alla regata “Coppa Carnevale”.

3.    Determinare il numero delle regate a cui ha partecipato ciascun velista

4.    Elencare i velisti che hanno partecipato a regate di tipo “altura” e per ogni velista indicare il ruolo a bordo e la data di imbarco.

5.    Determinare il peso totale dell’equipaggio della barca “Antares” nella regata “Coppa Carnevale” del 23 marzo 2024

6.    Elencare il nome delle regate a cui ha partecipato la barca “Telepatia”

7.    Elencare tutti i dati delle regate e il numero di barche che vi ha partecipato

8.    Determinare il peso dell'equipaggio di ogni barca */

SELECT SUM(Miglia) AS 'Somma Miglia'
FROM Regata INNER JOIN Partecipazione ON Regata.Denominazione = Partecipazione.codRegata
WHERE DataR >= '2024-01-01' AND DataR <= '2024-03-31' AND codBarca;

SELECT Barca.Nome Barca.Classe
FROM Barca INNER JOIN Partecipazione ON Barca.Nome = Partecipazione.codBarca
		   INNER JOIN Regata ON Regata.Denominazione = Partecipazione.codRegata
WHERE Regata.Denominazione = 'Coppa Carnevale'
ORDER BY Barca.Nome, Barca.Classe DESC;

SELECT Nome, COUNT(Partecipazione.codVelista) AS 'N volte Partecipazione'
FROM Velista INNER JOIN Partecipazione ON Velista.Id = Partecipazione.codVelista
GROUP BY Velista.Id;