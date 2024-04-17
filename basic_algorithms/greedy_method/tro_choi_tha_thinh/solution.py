emotes, uses, max_uses = map(int, input().split())
cards = list(map(int, input().split()))
maximum = max(cards)
number_of_loops = uses // (max_uses + 1)
first_card = maximum * max_uses
cards.remove(maximum)
second_card = max(cards)
number_of_hapinesses = first_card + second_card
total = number_of_loops * number_of_hapinesses
remainder = uses % (max_uses + 1)
total += remainder * maximum

print(total)
    			     	 				  	   	 	 	