SELECT customers.name, orders.id FROM orders
INNER JOIN customers ON orders.id_customers = customers.id
WHERE orders.orders_date < '2016-06-30';