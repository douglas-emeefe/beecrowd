SELECT customers.name, rentals.rentals_date FROM rentals
INNER JOIN customers ON customers.id = rentals.id_customers
WHERE extract(month from rentals.rentals_date) = 9;