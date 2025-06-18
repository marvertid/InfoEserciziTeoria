#1. Elenco degli eventi già svolti, in ordine alfabetico di provincia

SELECT Evento.Titolo, Provincia.Nome
FROM Evento 
INNER JOIN Luogo ON Evento.CodLuogo = Luogo.idL
INNER JOIN Provincia ON Provincia.Sigla = Luogo.CodProvincia
WHERE Data < CURRENT_DATE()
ORDER BY Luogo.CodProvincia;

#2. Elenco dei membri che non hanno mai inserito un commento
SELECT Account.CodUtente
FROM Account

EXCEPT

SELECT Commento.CodAccount
FROM Commento;

#3. Per ogni evento il voto medio ottenuto in ordine di categoria e titolo
SELECT Evento.Titolo, VotoMedio.Voto, Evento.CodCategoria
FROM Evento 
INNER JOIN VotoMedio ON VotoMedio.CodEvento = Evento.IdE
ORDER BY Evento.Titolo, Evento.CodCategoria;

#4. I dati dell'utente che ha registrato il maggior numero di eventi
SELECT NrEventiPerUtente.CodUtente, Account.Nickname, NrEventiPerUtente.nEventi
FROM Account INNER JOIN NrEventiPerUtente ON Account.CodUtente = NrEventiPerUtente.CodUtente
WHERE NrEventiPerUtente.nEventi = (SELECT MAX(NrEventiPerUtente.nEventi)