#a) l’elenco in ordine alfabetico dei giochi classificati per uno specifico argomento;
SELECT videoGioco.titolo, videoGioco.descrizioneBreve, argomento.Nome
FROM videoGioco INNER JOIN argomento ON videoGioco.Id = argomento.codVideogioco
GROUP BY argomento.Nome, videoGioco.titolo, videoGioco.descrizioneBreve
ORDER BY videoGioco.titolo;

#b) la classifica degli studenti di una certa classe virtuale, in base alle monete raccolte per un certo gioco;
SELECT Studente.Nome, SUM(AssocTernaria.Monete)
FROM Studente 
INNER JOIN AssocTernaria ON Studente.Id = AssocTernaria.codStudente
INNER JOIN classeVirtuale ON classeVirtuale.Id = AssocTernaria.codClasseVirtuale
WHERE classeVirtuale.Nome = ["Inserire Nome classe"] AND AssocTernaria.codVideogioco = ["Inserire codice gioco gay: "]
GROUP BY Studente.Nome
ORDER BY SUM(AssocTernaria.Monete);

#c) il numero di classi in cui è utilizzato ciascun videogioco del catalogo;
SELECT COUNT(classeVirtuale.Id), videoGioco.titolo
FROM classeVirtuale 
INNER JOIN AssocTernaria on classeVirtuale.Id = AssocTernaria.codClasseVirtuale
INNER JOIN videoGioco ON videoGioco.Id = AssocTernaria.codVideogioco
GROUP BY videoGioco.titolo
