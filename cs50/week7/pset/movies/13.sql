/*
List the names of all people who starred in a movie in which Kevin Bacon
also starred.
*/

SELECT name
  FROM people AS p
       JOIN stars AS s
       ON p.id = s.person_id

       JOIN
       ;