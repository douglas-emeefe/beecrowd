SELECT c.name, SUM(p.amount) FROM categories AS c 
INNER JOIN products AS p ON p.id_categories = c.id
GROUP by c.name