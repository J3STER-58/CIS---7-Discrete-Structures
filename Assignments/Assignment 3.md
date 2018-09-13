# Part 1:
  Let S = it is sunny, C = camping is fun, H = the homework is done, and M = mathematics is easy.
  
  Translate into English: (M → H)∧(S →C)
  Math is easy, therefore the homework is done and it is sunny, therefore camping is fun.
  
  Translate into Propositional Logic: “Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”
  (S ^ H) -> (M V C)
  
  -------------------------------------------------------------------------------------------------------------------------------
# Part 2:
  Use a truth table to determine whether this is a tautology, contradiction, or neither:
  (¬B → ¬A) → ((¬B → A) → B)
  
  A = "I turn on the oven"
  B = "The oven is hot"
  
  | A | B | ¬A | ¬B | ¬B -> ¬A | ¬B -> A | ((¬B -> A) -> B) | (¬B → ¬A) → ((¬B → A) → B) |
  | T | T |  F |  F |  T       | T       |  T               |  T                         |
  | T | F |  F |  T |  F       | F       |  F               |  T                         |
  | F | T |  T |  F |  T       | T       |  T               |  T                         |
  | F | F |  T |  T |  T       | T       |  T               |  T                         |
  
  Tautology
  
  Use a truth table to determine whether this is a tautology, contradiction, or neither:
  ((A → B)∧(B → ¬A)) → A
  
  | A | B | ¬A | A -> B | B -> ¬A | ((A → B)∧(B → ¬A)) | ((A → B)∧(B → ¬A)) → A |
  | T | T |  F |  T     | F       |  F                 |  F                     |
  | T | F |  F |  F     | T       |  F                 |  T                     |
  | F | T |  T |  T     | T       |  T                 |  F                     |
  | F | F |  T |  T     | T       |  T                 |  F                     |
  
  Neither
  
  -------------------------------------------------------------------------------------------------------------------------------
# Part 3:
  For each of the following pairs of propositions, show that the 
  two propositions are logically equivalent by finding a chain of equivalences from one
  to the other. State which definition or law of logic justifies each equivalence in the 
  chain.
  
  1) |(p ^ q) → r   | = | p → (q → r)    | Given
     |(p ^ q)' v r  | = | p → (q → r)    | Implication
     |p' v q' v r   | = | p → (q → r)    | De Morgan's
     |p → (q' v r)  | = | p → (q → r)    | Implication
     |p → (q → r)   | = | p → (q → r)    | Implication
     
  2) |(q v r) → p          | = | (q → p) ^ (r → p)   | Given
     |(q v r)' v p         | = | (q → p) ^ (r → p)   | Implication
     |(q' ^ r') v p        | = | (q → p) ^ (r → p)   | De Morgan's
     |(q' v p) ^ (r' v p)  | = | (q → p) ^ (r → p)   | Distributive 
     |(q - p) ^ (r - p)    | = | (q → p) ^ (r → p)   | Implication
     
  -------------------------------------------------------------------------------------------------------------------------------
# Part 4:
  Let Loves(x,y) = “x loves y” 
      Traveler(x) = “x is a traveler”
      City(x) = “x is a city” 
      Lives(x,y) = “x lives in y”

  Translate into English: ∃x∀y∀z(City(x) ∧ Traveler(y) ∧ Lives(z,x)) → (Loves(y,x) ∧ ¬Loves(z,x)) :
    "There are some cities that travelers love whereas the locals don't."
  
  Translate into Predicate Logic: “No traveler loves the city they live in.” :
    ∃x∀y(City(x) v Traveler(y)) → (Lives(y,x) ^ ~Loves(y,x))
    
    -------------------------------------------------------------------------------------------------------------------------------
# Part 5 (Extra Credit):
  Assuming: p → (q ^ r), s → r, r → p  
    Prove: s → q.
    
   1.) s       | Assumption
   2.) r       | MPP
   3.) p       | MPP
   4.) (q ^ r) | MPP
   5.) q       | Truth Table v Identity Law
   6.) s → q   | Steps 1-5
  
  Assuming: ¬(r ∨ s), ¬p → s, p → q. 
    Prove: q
  
   1.) ~s    | De Morgan's
   2.) p     | MTT
   3.) q     | MPP
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
