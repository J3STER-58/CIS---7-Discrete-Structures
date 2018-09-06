// Justin Teeter
// ID: 2574746
// Assignment 2

// Worked with Rebecca Carter

p -> q <=> q' -> p'  ||  Given
p -> q <=> q" v p'   ||  Implication Law
p -> q <=> q v p'    ||  Double Negation Law
p -> q <=> p' v q    ||  Commutative Law
p -> q <=> p -> q    ||  Implication Law

---------------------------------------------------------------

(p -> r) ^ (q -> r) <=> (p v q) -> r   ||  Given
(p' v r) ^ (q' v r) <=> (p v q) -> r   ||  Implication Law
(p' ^ q') v r <=> (p v q) -> r         ||  Distributive Law
(p v q)' v r <=> (p v q) -> r          ||  De Morgan's Law
(p v q) -> r <=> (p v q) -> r          ||  Implication Law

---------------------------------------------------------------

(Ǝx)A(x) ^ (Ǝx)B(x) -> (Ǝx)(A(x) ^ B(x))
Prove this WWF is not valid

x = plants
A(x) = x is a fruit
B(x) = x is a vegetable

When read:
IF some plants are fruits and some plants are vegetable,
THEN Some plants are fruits and vegetables.

NOT VALID
