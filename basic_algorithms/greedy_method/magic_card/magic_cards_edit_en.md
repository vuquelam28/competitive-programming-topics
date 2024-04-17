# Magic Cards - Editorial

There are different methods to solve this problem (Greedy, Dynamic Programming, Mincost Path), but the Greedy algorithm, which is easier to approach, will be introduced here.

An has only two options for his attack tactics: Either to destroy all of Binh's cards, or not to destroy all of them.

First of all, sort the cards in ascending order of attack points (or defense points). Assume An's cards are stored in array $\text{mine}[],$ Binh's attack cards are stored in array $\text{atk_cards}[],$ while defense cards are in $\text{def_cards}[]$.

If An does not destroy all of Binh's cards, attacking defense cards is obviously pointless. Thus, assume that An performs $k$ attacks, the strategy is to use $k$ cards with the highest attack points to attack opponent's $k$ cards with the lowest attack points. In this case, no matter how the attacks are arranged, the result is always:

$$\text{max}\left(\sum_{i = m - k + 1}^m \text{mine}[i] - \sum_{i = 1}^k \text{atk_cards}[i]\right); \forall k: 1 \le k \le \text{min}\big(m, \text{size(atk_cards)}\big)$$

If An tries to destroy all of Binh's cards, two jobs need to be done:

- Firstly, try to destroy all of Binh's defense cards. For each defense card with a defense point of $\text{def_cards}[i],$ find a card $\text{mine}[j]$ with the lowest attack point but higher than $\text{def_cards}[i],$ use it to attack and mark it as used. If it is possible to destroy all of Binh's defense cards, move to the next step, or else the total damage caused is $0$.
- Use the remaining cards, try to destroy Binh's attack cards. The idea is still the same: use attack cards with the highest attack points to attack Binh's cards. If it is impossible to destroy all of Binh's attack cards, the result will immediately be $0,$ as this option will not be better than the first one.
- If it is possible to destroy all of Binh's attack cards, Binh will also receive direct damage if An still have unused attack cards.

Take the maximum value of the two tactics, we get the final result.

Complexity: $O(m + n)$.