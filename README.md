# PokemonChallenge
A solution to the Softwire Support Team Pokémon Challenge in C++ (more-or-less):

> There are [quite a lot of Pokémon](http://pokeapi.co/api/v1/pokedex/) now. Let the set of all Pokémon be the Pokédex.   
> We can take the power set of the Pokédex, giving us a set of all subsets of Pokémon, and then define a sort of order on the subsets:
> 
> S1 < S2 <=> The number of Pokémon in S1 is less than the number in S2, or, if they are equal, then the total number of characters in the names of S1 is less than those in S2
> 
> So:
> * {xatu}  < {smeargle}
> * {smeargle} < {xatu, ratatta}
> * {ratatta} == {geodude}
> * {charmeleon} < {muk, grimer}
> 
> I'm not sure what kind of ordering this represents, hopefully it makes sense though.
> 
> So, the challenge is – can you find a minimal set S of all subsets of the Pokédex, such that all the letters of the alphabet appear in S?

This currently gets the correct answer in 26-28ms on my desktop here, which is the best runtime of solutions here so far I think. It is, however, a real mess:

* I'm only using C++ for memory allocation; this is plain C really
* In places where I really needed a lambda I've made global state and promoted the lambdas to global functions
* There are virtually no comments, and the names need some thought too
* The number '26' is everywhere, both as an array bound and as the number of letter
* (and I never clean up allocated memory) 

and so on. The latest version also crashes if I switch it into depth-first mode, which it really ought not :-( but I don't have time or inclination to debug that just now.
