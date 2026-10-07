Demander la limite

si (la limite saisie n'est pas correcte) -> demander la limite encore

Soit n_col - le nombre de colonnes

Afficher "Voici la liste des nombres premiers"

Soit i - la quantité actuelle des nombres dans une rangée

pour chaque nombre =< limite ->
    est-ce que le nombre est un nombre premier ?
        si oui ->
            est-ce que i < 5 ?
                si oui -> afficher le nombre dans la même rangée et i++
                sinon -> afficher le nombre dans la rangée suivante et i = 0

Demander si l'utilisateur veut recommencer
    si oui -> recommencer
    sinon -> sortir de la fonction
