male(andy).
male(ram).
male(jay).
male(pranav).
male(dev).
female(priya).
female(isha).
female(rey).
female(anjali).
female(bella).
parent(ram, andy).
parent(anjali, rey).
parent(andy, rey).
parent(andy,isha).
parent(andy,andy).
parent(bella, andy).
parent(isha, pranav).
parent(dev, anjali).
father(X,Y):-male(X), parent(X,Y).
mother(X,Y):-female(X), parent(X,Y).
grandparent(X,Y):-parent(X,P),parent(P,Y).
grandson(X,Y):-grandparent(X,Y),male(Y).
granddaughter(X,Y):-grandparent(X,Y),female(Y).
parents(X,Y,Z):-(father(X,Z);mother(X,Z)),(father(Y,Z);mother(Y,Z)).