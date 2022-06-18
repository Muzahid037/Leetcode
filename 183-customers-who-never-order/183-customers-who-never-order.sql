SELECT name as Customers from Customers LEFT OUTER JOIN Orders
ON Customers.id=Orders.customerId
where Orders.customerId is null;
