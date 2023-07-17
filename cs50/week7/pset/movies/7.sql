/*
List all movies released in 2010 and their ratings, in descending order
by rating. For movies with the same rating, order them alphabetically by
title.
*/
SELECT movies.title, ratings.rating
  FROM movies AS m
       INNER JOIN ratings AS r -- Exclude movies with no ratings.
       ON m.id = r.movie_id
 WHERE m.year = 2010
 ORDER BY rating DESC, title;
